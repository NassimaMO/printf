*This activity has been created as part of the 42 curriculum by nnassiri*

# Libft

## Description

Libft consists of reimplementing a selection of standard C library functions, as well as additional utility functions.
The purpose of this project is to strengthen understanding of C fundamentals, memory management, linked lists, and the creation of static libraries.
The resulting `libft.a` archive serves as a personal utility library reusable across future 42 projects.

## Instructions

### Compilation

```bash
make
```

Running `make` will generate the static library `libft.a` at the root of the repository.

Other available rules:

```bash
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

### Usage

To use the library in another project, include the header and link against the archive:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o my_program
```

## Functions

### Part 1 — Libc reimplementations

| Function | Description |
|---|---|
| `ft_isalpha` | Returns 1 if the character is alphabetic, 0 otherwise |
| `ft_isdigit` | Returns 1 if the character is a digit, 0 otherwise |
| `ft_isalnum` | Returns 1 if the character is alphanumeric, 0 otherwise |
| `ft_isascii` | Returns 1 if the character is in the ASCII table, 0 otherwise |
| `ft_isprint` | Returns 1 if the character is printable, 0 otherwise |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte value |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area to another (no overlap handling) |
| `ft_memmove` | Copies a memory area, handling overlapping regions |
| `ft_strlcpy` | Copies a string into a buffer with size limit, returns src length |
| `ft_strlcat` | Appends a string to a buffer with size limit, returns total length |
| `ft_toupper` | Converts a lowercase character to uppercase |
| `ft_tolower` | Converts an uppercase character to lowercase |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte value in a memory area |
| `ft_memcmp` | Compares two memory areas byte by byte |
| `ft_strnstr` | Finds a substring in a string, searching at most n characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates memory for an array and initializes it to zero |
| `ft_strdup` | Allocates and returns a duplicate of a string |

### Part 2 — Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring from a given string |
| `ft_strjoin` | Allocates and returns the concatenation of two strings |
| `ft_strtrim` | Allocates and returns a string with specified characters removed from both ends |
| `ft_split` | Splits a string by a delimiter character and returns an array of strings |
| `ft_itoa` | Converts an integer to its string representation |
| `ft_strmapi` | Applies a function to each character of a string, returning a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Part 3 — Linked list

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and returns a new list node with the given content |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Frees a node's content using a given function, then frees the node |
| `ft_lstclear` | Deletes and frees a node and all its successors, sets the pointer to NULL |
| `ft_lstiter` | Applies a function to the content of each node in a list |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |

## Resources

- [man7.org — Linux man pages](https://man7.org/linux/man-pages/) — Reference for all reimplemented libc functions
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/) — In-depth reference on glibc behaviour and differences with BSD libc
- [42 Norme](https://github.com/42School/norminette) — Norminette tool and rules

### AI usage

AI was used to generate this README file.