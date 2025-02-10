# Calculator C++

## Overview
`calculator-cpp` is a simple command-line calculator implemented in C++. It demonstrates fundamental programming concepts such as object-oriented design, modular programming, and arithmetic operation handling.

## Features
- **Basic Arithmetic Operations**: Supports addition, subtraction, multiplication, and division.
- **Modular Design**: Separated logic into distinct header and source files for maintainability.
- **Command-line Interface**: Simple CLI for user interaction.

## Technologies
- **Programming Language**: C++
- **Build System**: CMake for cross-platform builds
- **Dependency Management**: Conan for handling external libraries (if any)

## Getting Started

### Prerequisites
- **Environment**: Cross-platform (Windows, macOS, Linux)
- **Compiler**: Any C++ compiler supporting C++11 or later
- **Tools**: CMake, Conan (for dependency management)

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/AkanMNdem/calculator-cpp.git
   ```

2. Navigate to the project directory:
   ```bash
   cd calculator-cpp
   ```

3. Install dependencies using Conan (if needed):
   ```bash
   conan install .
   ```

4. Build the project using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

## Usage

### Running the Calculator
1. Start the calculator:
   ```bash
   ./calculator
   ```
2. Follow on-screen prompts to perform calculations.

## Code Structure
- **`src/`**: Contains the main source code files.
  - **`main.cpp`**: Entry point of the application.
  - **`calculator.cpp`**: Core logic for performing calculations.

- **`include/`**: Header files for function declarations.
  - **`calculator.h`**: Declares the calculator class and functions.

- **`CMakeLists.txt`**: Build configuration file for CMake.
- **`conanfile.txt`**: Dependency management configuration using Conan.

## Functionality

### Basic Arithmetic
1. Supports integer and floating-point calculations.
2. Provides results for addition, subtraction, multiplication, and division.

### Error Handling
1. Detects and handles division by zero.
2. Provides meaningful error messages for invalid inputs.

## Future Enhancements
- **Advanced Operations**: Implement support for trigonometric functions and exponentiation.
- **GUI Version**: Add a graphical user interface using a framework like Qt.
- **History Feature**: Maintain a log of previous calculations for reference.

## License
This project is licensed under the MIT License.

## Acknowledgments
This project serves as a fundamental exercise in C++ programming, ideal for beginners looking to understand object-oriented design and modular programming.

