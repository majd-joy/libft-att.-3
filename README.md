*This activity has been created as part of
the 42 curriculum by majbdour*

# LIBFT 


## Description
The goal of the Libft project is to reimplement a set of standard C library functions, creating a custom library (libft.a). This allows students to understand low-level C programming concepts such as memory management, string manipulation, and linked lists, while reinforcing coding standards and practices.

Overview:
In this project, I :

Recreated commonly used C functions like ft_strlen, ft_strcpy, ft_memset, and more.

Implemented additional utility functions for dynamic memory allocation and string manipulation.

Developed linked list operations as part of the “bonus” section, including creation, iteration, addition, and deletion of list elements.

Organized all functions into a static library (libft.a) that can be reused in other C projects.

By completing Libft, I gained a solid foundation in C programming, learned to follow strict coding norms, and practiced creating reusable, modular code.

## Instructions

### Compilation

To compile the library, use the provided `Makefile`. From the project root:

```bash
make
```

* This will create the static library `libft.a`.

### Installation / Usage

Once compiled, you can include your library in other C projects by adding the header and linking the library:

```c
#include "libft.h"
```

Compile your project with:

```bash
cc main.c libft.a -o my_program
```

* Replace `main.c` with your source files.
* `libft.a` must be in the same directory or specify its path.

### Cleaning

To remove object files:

```bash
make clean
```

To remove object files and the compiled library:

```bash
make fclean
```

To rebuild the library from scratch:

```bash
make re
```

# Resources
### References

The following resources were used to understand and implement the Libft project:

C Standard Library Documentation – for reference on function behavior and prototypes: https://man7.org/linux/man-pages/man3/

GNU C Library (glibc) Documentation – for memory and string function details: https://www.gnu.org/software/libc/manual/

Stackoverflow - https://stackoverflow.com/questions/2550774/what-is-size-t-in-c#comment106540680_2550774

Geeksforgeeks - https://www.geeksforgeeks.org/c/memory-layout-of-c-program/

makefile tutarial - https://makefiletutorial.com/

manual page 

42 Network Libft Guidelines – official project instructions and norms provided by 42 School.

### Tutorials and Articles:

Understanding pointers and memory in C

Implementing linked lists from scratch

Handling dynamic memory safely in C

### AI Assistance

AI (ChatGPT) was used to:

Provide explanations and guidance on complex C concepts (e.g., memory management, function implementation).

Suggest clear README sections, examples, and formatting for documentation.

Note: All code implementations and final solutions were written manually by the student; AI was used only as a learning and guidance tool.

# Student 
Majd A. Bdour
AI & DS 
