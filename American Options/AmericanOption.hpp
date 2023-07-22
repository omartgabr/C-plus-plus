//
//  AmericanOption.hpp
//  Group B
//
//  Created by O.G on 6/13/21.
//

#ifndef AmericanOption_hpp
#define AmericanOption_hpp

#include <iostream>
#include <vector>

class AmericanOption
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
    AmericanOption();   // default constructor
    AmericanOption(const AmericanOption& option);   // copy constructor
    virtual ~AmericanOption();  // virtual destructor
    
    // operators
    AmericanOption& operator=(const AmericanOption& option);    // assignment operator
    
    // perpetual call/put pricing
    double PerpetualCall() const;   // call option no input
    double PerpetualPut() const;    // put option no input
    double PerpetualCall(double U) const;   // call option
    double PerpetualPut(double U) const;    // put option
    
    // vector of perpetual call/put pricing
    std::vector<double> PerpetualCall(const std::vector<double>& vector);
    std::vector<double> PerpetualPut(const std::vector<double>& vector);
    
};

#endif /* AmericanOption_hpp */
