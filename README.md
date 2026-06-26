# Grep-Engine

A fast, lightweight grep engine implemented in C++ with support for regular expression pattern matching.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Features

- **Regular Expression Support**: Full regex pattern matching capabilities
- **Fast Performance**: Optimized C++ implementation for quick searches
- **Lightweight**: Minimal dependencies and small footprint
- **Command-Line Interface**: Easy-to-use CLI for text searching
- **Flexible Input**: Support for file and standard input searching

## Prerequisites

- C++11 or later
- CMake 3.10+
- A C++ compiler (g++, clang, or MSVC)

## Installation

### Building from Source

1. **Clone the repository**
   ```bash
   git clone https://github.com/rezabagher/Grep-Engine.git
   cd Grep-Engine
   ```

2. **Create a build directory**
   ```bash
   mkdir build
   cd build
   ```

3. **Build with CMake**
   ```bash
   cmake ..
   make
   ```

4. **Run the executable**
   ```bash
   ./grep-engine
   ```

## Usage

### Basic Search
```bash
./grep-engine "pattern" input.txt
```

### Regular Expression Patterns
```bash
./grep-engine "^error.*failed$" logfile.txt
```

### Search with Flags
```bash
./grep-engine -i "pattern" input.txt    # Case-insensitive
./grep-engine -c "pattern" input.txt    # Count matches only
./grep-engine -n "pattern" input.txt    # Show line numbers
```

### Examples
```bash
# Find all lines containing "error"
./grep-engine "error" system.log

# Find lines starting with "ERROR:" (case-insensitive)
./grep-engine -i "^error:" application.log

# Count occurrences of a pattern
./grep-engine -c "success" output.txt
```

## Project Structure

```
Grep-Engine/
├── CMakeLists.txt      # Build configuration
├── main.cpp            # Main entry point and CLI
├── input.txt           # Sample input file
├── LICENSE             # MIT License
└── .gitignore          # Git ignore rules
```

## Development

### Current Features
- Basic grep functionality
- Regular expression pattern matching
- Command-line interface

### Upcoming Features
- Additional C++ optimizations
- Extended flag support
- Performance improvements

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request with improvements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author

**Reza Bagheri Alashti** ([@rezabagher](https://github.com/rezabagher))

## Support

If you encounter any issues or have questions, please open an issue on the [GitHub repository](https://github.com/rezabagher/Grep-Engine/issues).

---

**Note**: This is an active project under development. Features and functionality may change.
