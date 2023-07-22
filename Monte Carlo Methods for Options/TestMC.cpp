//
//  TestMC.cpp
//  Group C
//
//  Created by O.G on 6/13/21.
//

#include "OptionData.hpp"
#include "UtilitiesDJD/RNG/NormalGenerator.hpp"
#include "UtilitiesDJD/Geometry/Range.cpp"
#include "UtilitiesDJD/VectorsAndMatrices/ArrayMechanisms.cpp"
#include <cmath>
#include <iostream>
using namespace std;


template <class T> void print (const vector<T>& l)
{ // A generic print function for vectors
    
    cout << endl << "Size of vector is " << l.size() << "\n[";
    
    // We must use a const iterator here, otherwise we get a compiler error.
    typename vector<T>::const_iterator i;
    for (i = l.begin(); i != l.end(); ++i)
    {
        cout << *i << ",";
    }
    
    cout << "]\n";
}

namespace SDEDefinition
{ // Defines drift + diffusion + data
    
    OptionData* data;        // The data for the option MC
    
    double drift(double t, double X)
    { // Drift term
        
        return (data->r)*X; // r - D
        // return (date->r-D)*X;
    }
    
    double diffusion(double t, double X)
    { // Diffusion term
        
        double betaCEV = 1.0;
        return data->sig * pow(X, betaCEV);
    }
    
    double diffusionDerivative(double t, double X)
    { // Diffusion term, needed for the Milstein method
        
        double betaCEV = 1.0;
        return 0.5 * (data->sig) * (betaCEV) * pow(X, 2.0 * betaCEV - 1.0);
    }
} // End of namespace


int main()
{
    cout << "1 factor Monte Carlo with explicit Euler\n";
    
    OptionData myOption;
    myOption.K = 65.0;
    myOption.T = 0.25;
    myOption.r = 0.08;
    myOption.sig = 0.3;
    myOption.type = -1; // Put -1, call +1
    double S_0 = 60;
    
    long N = 100;
    cout << "Number of subintervals in time: ";
    cin >> N;
    
    // Create the basic SDE (Context class)
    Range<double> range (0.0, myOption.T);
    double VOld = S_0;
    double VNew = VOld; // Initialized it
    
    Vector<double, long> x = range.mesh(N);
    
    // V2 mediator stuff
    long NSim = 50000;
    cout << "Number of simulations: ";
    cin >> NSim;
    
    double k = myOption.T / double(N);
    double sqrk = sqrt(k);
    
    // Normal random number
    double dW;
    double price = 0.0;  // Option price
    
    
    /* // Create a U(0,1) and N(0,1) array
    TerribleRandGenerator myUniform;      // rand()
    // OR YOUR FAVOURITE!
    myUniform.init(0);
    // NormalGenerator* myNormal = new BoxMuller(myUniform);
    // NormalGenerator* myNormal = new PolarMarsaglia(myUniform);
    NormalGenerator* myNormal = new BoostNormal(); */
    
    
    // NormalGenerator is a base class
    NormalGenerator* myNormal = new BoostNormal();
    
    using namespace SDEDefinition;
    data = &myOption;
    
    vector<double> res;
    int coun = 0; // Number of times S hits origin
    
    // A.
    for (long i = 1; i <= NSim; ++i)
    { // Calculate a path at each iteration
        
        if ((i/10000) * 10000 == i)
        { // Give status after each 1000th iteration
            
            cout << i << endl;
        }
        
        VOld = S_0;
        for (long index = x.MinIndex()+1; index <= x.MaxIndex(); ++index)
        {
            // Create a random number
            dW = myNormal->getNormal();
            
            // The FDM (in this case explicit Euler)
            VNew = VOld + (k * drift(x[index-1], VOld))
            + (sqrk * diffusion(x[index-1], VOld) * dW);
            
            VOld = VNew;
            
            // Spurious values
            if (VNew <= 0) coun++;
        }
        
        double tmp = myOption.myPayOffFunction(VNew);
        price += (tmp)/double(NSim);
    }
    
    // D. Finally, discouting the average price
    price *= exp(-myOption.r * myOption.T);
    
    // Cleanup; V2 use scoped pointer
    delete myNormal;
    
    cout << "Price, after discounting: " << price << ", " << endl;
    cout << "Number of times origin is hit: " << coun<< endl;
    
    return 0;
}


