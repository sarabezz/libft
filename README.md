# LIBFT

A custom C library that reimplements essential standard functions from scratch.


## About

In C, standard functions are constantly needed to perform low-level operations. Libft is the project where we rebuild those functions from scratch to fully understand how they work under the hood.


## Functions

### Character checks
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |

### String manipulation
| Function | Description |
|----------|-------------|
| `ft_strlen` | Returns length of a string |
| `ft_strchr` | Locates first occurrence of a character in a string |
| `ft_strrchr` | Locates last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strdup` | Duplicates a string with malloc |
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_strmapi` | Applies a function to each character, returns new string |
| `ft_striteri` | Applies a function to each character in place |

### Memory
| Function | Description |
|----------|-------------|
| `ft_calloc` | Allocates zero-initialised memory |
| `ft_malloc` | Custom malloc wrapper |

### Number conversion
| Function | Description |
|----------|-------------|
| `ft_itoa` | Converts integer to string |

### Output
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |


## Usage

```bash
git clone https://github.com/sarabezz/libft.git
cd libft
make
```

This produces `libft.a`. To use it in another project:

```c
#include "libft.h"
```

```bash
gcc your_file.c -L. -lft -o your_program
```

## Key concepts

- Manual memory management with `malloc` and `free`
- Pointer arithmetic and string manipulation
- Static library compilation with `ar` and `Makefile`
- File descriptors and output to different destinations

## Project info

| | |
|---|---|
| Language | C |
| School | 42 Madrid |
| Status | ✅ Completed |
