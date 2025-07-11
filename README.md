
# Breaker

**Random Integer Array Generator and Checker**

`breaker` is a versatile C program that generates a random array of integers, performs various operations, and optionally checks the results using a provided sorting algorithm. The tool is designed to be easy to use and provides flexibility in testing sorting algorithms.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
  - [Quick Start](#quick-start)
  - [Modes](#modes)
  - [Examples](#examples)
- [Additional Information](#additional-information)
- [Contributing](#contributing)
- [License](#license)

## Features

- Generates a random array of integers.
- Supports multiple modes to customize functionality.
- Optional integration with custom sorting algorithms.
- Displays the number of moves performed by a sorting algorithm.
- Validates input parameters for ease of use.
- Supports checking results using custom checkers.

## Usage

### Quick Start

To quickly generate a random array and display the number of moves performed by a sorting algorithm, use the following command:

```bash
./breaker NUMBER_OF_RANDOM_NUMBER [MODE]
```

### Modes

- `0`: Display the number of moves (default if not provided).
- `1`: Redirect moves to a custom checker (must be named `checker`).
- `2`: Redirect moves to a custom checker_Mac (must be named `checker_Mac`).

### Examples

1. **Display the Number of Moves:**

    ```bash
    ./breaker 100
    ```

2. **Redirect Moves to a Custom Checker:**

    ```bash
    ./breaker 500 1
    ```

3. **Redirect Moves to a Custom Checker_Mac:**

    ```bash
    ./breaker 100 2
    ```

### Additional Information

- Run `./breaker help` for more detailed information and usage examples.

## Contributing

Contributions and improvements are welcome! Feel free to fork the repository, make changes, and submit pull requests.

## License

This code is released under the [MIT License](LICENSE).

