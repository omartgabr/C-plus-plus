# Options Pricing and Analysis Toolkit

This project is a comprehensive toolkit for options pricing and analysis, providing various algorithms and methods for pricing American, European, and exotic options using Monte Carlo simulations, Black-Scholes model, and other approaches. It aims to support users in quantitative finance, risk management, and financial analysis.

## Features

- **Option Pricing Algorithms:** Includes modules for pricing different types of options using various algorithms such as Black-Scholes, Monte Carlo simulations, and specialized methods for exotic options.

- **Sensitivity Analysis:** Calculates option Greeks (delta, gamma, theta, vega, rho) and assesses the sensitivity of option prices to changes in input parameters.

- **Risk Management:** Analyzes risk exposure of option portfolios by simulating market scenarios and evaluating potential losses or gains.

- **Strategy Evaluation:** Backtests option trading strategies and evaluates their performance metrics under different market conditions.

- **Exotic Options Pricing:** Supports pricing of complex or exotic options with non-standard features using specialized algorithms.

- **Visualization:** Provides visualization tools to plot option prices, payoffs, and sensitivities for better understanding and decision-making.

## Directory Structure

options_pricing_toolkit/
│
├── src/ # Source code directory
│ ├── option_pricing/ # Module for option pricing algorithms
│ │ ├── black_scholes.cpp # Implementation of Black-Scholes model
│ │ ├── monte_carlo.cpp # Implementation of Monte Carlo simulations
│ │ ├── exotic_options.cpp # Implementation of algorithms for exotic options
│ │ └── ...
│ ├── sensitivity_analysis/ # Module for sensitivity analysis
│ │ ├── greeks_calculator.cpp# Implementation of option Greeks calculation
│ │ └── ...
│ ├── risk_management/ # Module for risk management
│ │ ├── portfolio_simulation.cpp # Implementation of portfolio simulation
│ │ └── ...
│ ├── strategy_evaluation/ # Module for strategy evaluation
│ │ ├── strategy_backtesting.cpp # Implementation of strategy backtesting
│ │ └── ...
│ ├── visualization/ # Module for visualization
│ │ ├── plot_generator.cpp # Implementation of plot generation
│ │ └── ...
│ └── main.cpp # Main application file
│
├── include/ # Header files directory
│ ├── option_data.hpp # Struct definition for option data
│ ├── utilities/ # Utility functions directory
│ │ ├── input_output.hpp # Input/output functions
│ │ ├── math_functions.hpp # Mathematical functions
│ │ └── ...
│ └── ...
│
├── docs/ # Documentation directory
│ ├── user_guide.md # User guide and documentation
│ ├── examples/ # Examples directory
│ │ ├── example1.cpp # Example code for pricing options
│ │ ├── example2.cpp # Example code for sensitivity analysis
│ │ └── ...
│ └── ...
│
├── tests/ # Test directory
│ ├── option_pricing_tests.cpp # Unit tests for option pricing algorithms
│ ├── sensitivity_tests.cpp # Unit tests for sensitivity analysis
│ └── ...
│
├── LICENSE # License file
├── README.md # Project README file
└── ...

## Usage

1. **Clone the Repository:** Clone the repository to your local machine.

2. **Build the Project:** Build the project using a C++ compiler.

3. **Run Examples:** Explore the examples provided in the `docs/examples` directory to understand how to use different features of the toolkit.

4. **Read Documentation:** Refer to the `docs/user_guide.md` for detailed documentation and usage instructions.

5. **Contribute:** Contributions to the project are welcome! Refer to the contribution guidelines in the documentation for more information.
