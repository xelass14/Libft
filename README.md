*This project has been created as part of the 42 curriculum by albranco.*

# libft

My implementation of the 42 libft project — a C library with standard and additional functions.

## Description

This project implements **libft**, a custom C library that reimplements standard libc functions and provides additional utilities. The final deliverable is a static library **`libft.a`** created with `ar` (never `libtool`).

The library is organized in **3 parts**:

- **Part 1** (23 functions): Reimplementation of standard libc functions with `ft_` prefix
- **Part 2** (11 functions): Additional utility functions not in standard libc
- **Part 3** (9 functions): Linked list manipulation using `t_list` structure

## Project Structure

```
libft/
├── libft.h              # Header with all prototypes
├── Makefile             # Build rules
├── ft_*.c               # Part 1: libc functions (23)
├── ft_*.c               # Part 2: additional functions (11)
├── ft_*.c               # Part 3: linked list functions (9)
└── README.md            # This file
```

## Functions Implemented

### Part 1 — Libc Functions (23)

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check alphabetic character |
| `ft_isdigit` | Check digit |
| `ft_isalnum` | Check alphanumeric |
| `ft_isascii` | Check ASCII |
| `ft_isprint` | Check printable |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |
| `ft_strlen` | String length |
| `ft_strchr` | Find first occurrence of char |
| `ft_strrchr` | Find last occurrence of char |
| `ft_strncmp` | Compare n chars |
| `ft_memset` | Fill memory |
| `ft_bzero` | Zero memory |
| `ft_memcpy` | Copy memory |
| `ft_memmove` | Copy memory (handles overlap) |
| `ft_memchr` | Find byte in memory |
| `ft_memcmp` | Compare memory |
| `ft_strnstr` | Find substring (size-limited) |
| `ft_atoi` | String to integer |
| `ft_calloc` | Alloc + zero |
| `ft_strdup` | Duplicate string |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concat |
| `ft_strnstr` | Find substring (size-limited) |

### Part 2 — Additional Functions (11)

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract substring |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from set |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Integer to string |
| `ft_strmapi` | Map function on string |
| `ft_striteri` | Iterate function on string |
| `ft_putchar_fd` | Write char to fd |
| `ft_putstr_fd` | Write string to fd |
| `ft_putendl_fd` | Write string + newline to fd |
| `ft_putnbr_fd` | Write integer to fd |

### Part 3 — Linked List Functions (9)

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new node |
| `ft_lstadd_front` | Add node at front |
| `ft_lstsize` | Count nodes |
| `ft_lstlast` | Get last node |
| `ft_lstadd_back` | Add node at back |
| `ft_lstdelone` | Delete one node |
| `ft_lstclear` | Delete list |
| `ft_lstiter` | Iterate function on list |
| `ft_lstmap` | Map function on list |

## Compilation

```bash
make          # Build libft.a
make clean    # Remove object files
make fclean   # Remove object files + libft.a
make re       # Rebuild from scratch
```

## Usage

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("Hello");
    ft_putstr_fd(s, 1);
    free(s);
    return (0);
}
```

Compile with:
```bash
cc -Wall -Wextra -Werror -I. main.c -L. -lft -o main
```

## Norminette

All files pass `norminette` checks (including header).

```bash
norminette *.c libft.h
```

## Resources

- [42 Subject v19.3](https://github.com/42Paris/libft)
- [Norminette](https://github.com/42School/norminette)
- [man pages](https://man7.org/linux/man-pages/) — reference for libc behavior

## AI Usage

This project was developed following 42's AI usage guidelines:
- Reasoned through problems before consulting AI
- Did not ask AI for direct solutions
- Used AI only for explanations, debugging assistance, and code review
- All code was written and understood by me

## Author

albranco — 42 Lisboa