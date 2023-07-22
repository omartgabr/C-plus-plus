//
//  EuropeanOptions.hpp
//  Group A
//
//  Created by O.G on 6/11/21.
//

#ifndef EuropeanOptions_hpp
#define EuropeanOptions_hpp

#include <iostream>
#include <string>
#include <vector>

class EuropeanOption
{
public:
    // data members
    double r;   // interest rate
    double S;   // asset price
    double K;   // strike price
    double T;   // time to expiry
    double sig; // volatility
    double b;   // cost of carry
    std::string optionType; // put or call option
    
    // constructors + destructors
    EuropeanOption();   // default constructor
    EuropeanOption(const EuropeanOption& option);   // copy constructor
    virtual ~EuropeanOption();  // destructor
    
    // operators
    EuropeanOption& operator=(const EuropeanOption& option);    // assignment operator
    
    // cumulative/probability normal distribution approximator
    double n(double x) const;   // standard pdf
    double N(double x) const;   // standard cdf
    
    // current option pricing + sensitivities
    double Price(double U) const;   // option pricing
    double Delta(double U) const;   // sensitivities
    
    // call + put price + sensitivities functions
    double CallPrice(double U) const;   // call price function
    double PutPrice(double U) const;    // put price function
    double CallDelta(double U) const;   // call delta function
    double PutDelta(double U) const;    // put delta function
    double CallPutGamma(double K, double S, double T, double r, double b, double sig) const;   // call/put gamma
    
    // put + call parity
    double ParityPrice(double U) const; // put + call parity prices
    bool isParity(double callPrice, double putPrice) const;  // checks if parity satisfies
    
    // vector + matrix pricing function
    std::vector<double> Price(const std::vector<double>& vector) const;   // vector pricing function
    std::vector<double> Price(const std::vector<std::vector<double>>& matrix) const;    // matrix pricing function
};

#endif /* EuropeanOptions_hpp */
