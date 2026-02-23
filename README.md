*This project has been created as a part of the 42 curriculum by <martafer>*

# ft_printf

## DESCRIPTION
This is an implementation of the printf function included in the libc library. Its objective is to print the given arguments according to their specified format. In the case of this project, the format conversions can be a char (%c), a string (%s), a void pointer (%p), a decimal number (%d), an integer (%i), an unsigned integer (%u), a hexadecimal number, either in lower (%x) or upper (%X) case, or the percentage symbol (%%).

This project demonstrates:
- How to parse format specifiers.
- How to handle different data types using 'va_list'.
- How to manage recursion for number conversion.

## INSTRUCTIONS
Rergarding the Makefile, which includes all of the information regarding compilation, instalation and execution, there are different areas that should be mentioned:
- Firstly, source files are stated. These will be the files ft_printf uses depending on the input case.
- Then the library is created, with a (given) particular name.
- Afterwards rules for compiling (including flags) and deleting are found.
- Also, the objects are created by transforming the .c files (sources) in .o files.
- Finally, instructions are given for creating the library and the objects (all), for removing object files (clean), for removing object files and the library (fclean) and for recompiling (re). These instructions are later listed in the .PHONY to avoid conflict in case a file with the same name is found.

## RESOURCES
- printf manual (man printf)
- Guidebook (https://42-cursus.gitbook.io/guide/1-rank-01/ft_printf)

### USE OF AI
AI was asked to explain more in depth concepts related to the macros that are used in va_list variables (va_start, va_args and va_end). The README file was written and then AI suggested minor changes.

No AI was used to generate the actual implementation code. All logic was written manually to comlply with 42's project requirements.

## EXTRA

### BRIEF EXPLANATION OF HOW THE CODE WAS ORGANIZED
Two functions can be found in the ft_printf.c file. The ft_printf function will initilize and go over the elements of the va_list pointed by the function argument. If it finds a '%' symbol, the it will call manage_case, that will deal with the corresponding format.
In order to keep the code as clean as possible, a function for each case has been made instead of a function that contains different cases. In other words, one .c manages one specific case. Some of these have been unified because of their similarity (write_hex and write_int). For those cases that must display in hexadecimal, base_16 function was created and it will be use if needed by write_hex and write_p, since a printed void pointer is a hexadecimal.

### ALGORITHM CHOICE
- Recursive number printing:
Integers and hexadecimal values are printed using recursion. This approach simplifies digit extraction without requiring buffers or reversing strings.
- Direct wirte calls:
Instead of building strings in memory, characters are written directly to standard output using write. This avoids unnecessary memory allocation and ensures efficiency.

### DATA STRUCTURES
- va_list: used to handle variadic arguments safely and portably.
- Primitive types only: no complex data structures were required, since the project emphasizes low-level manipulation of integers, characters and pointers.
