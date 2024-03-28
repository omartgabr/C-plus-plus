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
├── src/
│   ├── option_pricing/
│   │   ├── black_scholes.cpp
│   │   ├── monte_carlo.cpp
│   │   └── ...
│   ├── sensitivity_analysis/
│   │   ├── greeks_calculator.cpp
│   │   └── ...
│   ├── risk_management/
│   │   ├── portfolio_simulation.cpp
│   │   └── ...
│   ├── strategy_evaluation/
│   │   ├── strategy_backtesting.cpp
│   │   └── ...
│   ├── visualization/
│   │   ├── plot_generator.cpp
│   │   └── ...
│   └── main.cpp
├── include/
│   ├── option_data.hpp
│   ├── utilities/
│   │   ├── input_output.hpp
│   │   ├── math_functions.hpp
│   │   └── ...
│   └── ...
├── docs/
│   ├── user_guide.md
│   ├── examples/
│   │   ├── example1.cpp
│   │   ├── example2.cpp
│   │   └── ...
│   └── ...
├── tests/
│   ├── option_pricing_tests.cpp
│   ├── sensitivity_tests.cpp
│   └── ...
├── LICENSE
└── README.md


## Usage

1. **Clone the Repository:** Clone the repository to your local machine.

2. **Build the Project:** Build the project using a C++ compiler.

3. **Run Examples:** Explore the examples provided in the `docs/examples` directory to understand how to use different features of the toolkit.

4. **Read Documentation:** Refer to the `docs/user_guide.md` for detailed documentation and usage instructions.

5. **Contribute:** Contributions to the project are welcome! Refer to the contribution guidelines in the documentation for more information.
