*This activity has been created as part of the 42 curriculum by nnassiri*

# ft_printf

## Description

`ft_printf` is a partial reimplementation of the standard C library `printf()` function, built as a static library (`libftprintf.a`). The goal is to understand variadic functions in C — functions that accept a variable number of arguments — and to produce a robust, extensible format string parser. The library handles the most common conversion specifiers and integrates with `libft`. Once validated, it can be added to your `libft` and reused across all future 42 projects.

## Instructions

### Compilation

```bash
make
```

This produces `libftprintf.a` at the root of the repository. The library depends on `libft` functions located in the `libft/` subdirectory.

Other available rules:

```bash
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + all
```

### Usage

Link the library when compiling your program:

```bash
cc main.c -L. -lftprintf -o my_program
```

Include the header in your source files:

```c
#include "ft_printf.h"
```

Example:

```c
ft_printf("Hello, %s! You are %d years old.\n", "Nassima", 24);
ft_printf("Pointer: %p\n", ptr);
ft_printf("Hex: %x | %X\n", 255, 255);
ft_printf("100%%\n");
```

`ft_printf` returns the total number of characters printed — matching the behaviour of the original `printf()`.

## Conversion Specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a null-terminated string |
| `%p` | Prints a pointer address in hexadecimal (`0x...` format) |
| `%d` | Prints a signed decimal integer (base 10) |
| `%i` | Prints a signed integer in base 10 (same as `%d`) |
| `%u` | Prints an unsigned decimal integer (base 10) |
| `%x` | Prints an unsigned integer in hexadecimal lowercase |
| `%X` | Prints an unsigned integer in hexadecimal uppercase |
| `%%` | Prints a literal percent sign |

## Algorithm and Design Choices

### Parsing approach

The format string is scanned linearly. Non-format characters are printed as-is. When a `%` is encountered, the next character determines which conversion handler to call. This is done through dispatch functions (`ft_print_args_str` and `ft_print_args_nbr`) that switches on the specifier character.

This approach was chosen over a lookup table because it is simple, norminette-compatible, and sufficient for the specifiers required by this project.

### Count tracking

Rather than using a global or return-value chain, a pointer to a `count` integer is threaded through all print functions. Each helper increments it by the number of characters it writes. This avoids having to sum up return values across nested calls.

## Resources

- [`man 3 printf`](https://man7.org/linux/man-pages/man3/printf.3.html) — canonical reference for the expected behaviour of each specifier
- [`man 3 stdarg`](https://man7.org/linux/man-pages/man3/stdarg.3.html) — documentation for `va_start`, `va_arg`, `va_end`, `va_copy`

### AI usage

AI was used to help produce this README file.