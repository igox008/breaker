
# Push_swap tester

This C program generates a random array of integers, converts them to strings, concatenates them into a space-separated string, and then executes a command using the generated string as an argument. The program includes utility functions for string manipulation, integer-to-string conversion, and checking the presence of an integer in an array.


## Key Features:

1. **Random Integer Generation:** Generates a random array of integers, alternating between positive and negative values.
2. **String Manipulation:** Provides a string concatenation function (`ft_strjoin`) and an integer-to-string conversion function (`ft_itoa`).
3. **Command Execution:** Uses the generated integer array as an argument to execute a command (`./push_swap $ARG | wc -l`) to count the number of moves in a sorting algorithm.
## Usage:

1. Compile the program using a C compiler.
2. Run the compiled executable to generate a random array and execute the specified command.
## NOTE:

- The program currently includes a command to count the number of moves in the "push_swap" sorting algorithm. Other commands for testing can be uncommented and added as needed.
## Contributions:

Contributions and improvements are welcome. Feel free to fork the repository, make changes, and submit pull requests.
## License:

This code is released under the [MIT License](https://opensource.org/licenses/MIT).
