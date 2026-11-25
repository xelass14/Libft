*This project has been created as part of the 42 curriculum by albranco.*

# libft

My implementation of the 42 libft project — a C library that reimplements standard libc functions and provides additional utilities. The final deliverable is a static library **`libft.a`** created with `ar` (never `libtool`).

## Description

This project implements **libft**, a custom C library that reimplements standard libc functions and provides additional utilities. The final deliverable is a static library **`libft.a`** created with `ar` (never `libtool`).

The library is organized in **3 parts**:

- **Part 1** (23 functions): Reimplementation of standard libc functions with `ft_` prefix
- **Part 2** (11 functions): Additional utility functions not in standard libc
- **Part 3** (9 functions): Linked list manipulation using `t_list` structure

## Functions Implemented

### Part 1 — Libc Functions (23)

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic (A-Z, a-z). Returns 1 if true, 0 otherwise. |
| `ft_isdigit` | Checks if a character is a decimal digit (0-9). Returns 1 if true, 0 otherwise. |
| `ft_isalnum` | Checks if a character is alphanumeric (alphabetic or digit). Returns 1 if true, 0 otherwise. |
| `ft_isascii` | Checks if a character is in the ASCII table (0-127). Returns 1 if true, 0 otherwise. |
| `ft_isprint` | Checks if a character is printable (space to ~, ASCII 32-126). Returns 1 if true, 0 otherwise. |
| `ft_toupper` | Converts a lowercase letter to uppercase. Returns the converted character or the original if not a lowercase letter. |
| `ft_tolower` | Converts an uppercase letter to lowercase. Returns the converted character or the original if not an uppercase letter. |
| `ft_strlen` | Calculates the length of a string (number of characters before the null terminator). |
| `ft_strchr` | Locates the first occurrence of a character `c` in a string `s`. Returns a pointer to the found character or `NULL` if not found. |
| `ft_strrchr` | Locates the last occurrence of a character `c` in a string `s`. Returns a pointer to the found character or `NULL` if not found. |
| `ft_strncmp` | Compares up to `n` characters of two strings lexicographically. Returns an integer less than, equal to, or greater than zero if the first string is lexicographically less than, equal to, or greater than the second string. |
| `ft_memset` | Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`. |
| `ft_bzero` | Writes `n` zeroed bytes to the string `s`. |
| `ft_memcpy` | Copies `n` bytes from memory area `src` to memory area `dst`. The memory areas must not overlap. |
| `ft_memmove` | Copies `n` bytes from memory area `src` to memory area `dst`. The memory areas may overlap; copy is done correctly. |
| `ft_memchr` | Scans the initial `n` bytes of the memory area pointed to by `s` for the first occurrence of `c`. Returns a pointer to the matching byte or `NULL` if not found. |
| `ft_memcmp` | Compares the first `n` bytes of memory areas `s1` and `s2`. Returns an integer less than, equal to, or greater than zero if `s1` is found, respectively, to be less than, to match, or greater than `s2`. |
| `ft_strnstr` | Locates the first occurrence of the substring `little` in the string `big`, where not more than `len` characters are searched. Returns a pointer to the beginning of the substring or `NULL` if not found. |
| `ft_atoi` | Converts the initial portion of a string to an integer. Handles optional leading whitespace, an optional sign (`+` or `-`), and stops at the first non-digit character. Handles `INT_MIN` edge case. |
| `ft_calloc` | Allocates memory for an array of `nmemb` elements of `size` bytes each, initializes all bytes to zero, and returns a pointer to the allocated memory. Returns `NULL` on failure. |
| `ft_strdup` | Allocates sufficient memory for a copy of the string `s`, copies the string, and returns a pointer to the new string. Returns `NULL` on allocation failure. |
| `ft_strlcpy` | Copies up to `size - 1` characters from the string `src` to `dst`, NUL-terminating the result if `size` is not 0. Returns the total length of the string `src`. |
| `ft_strlcat` | Appends the string `src` to the end of `dst`, up to `size - strlen(dst) - 1` characters. NUL-terminates the result if `size` is not 0. Returns the total length of the string it tried to create. |
| `ft_strnstr` | Locates the first occurrence of the substring `little` in the string `big`, where not more than `len` characters are searched. Returns a pointer to the beginning of the substring or `NULL` if not found. |

### Part 2 — Additional Functions (11)

| Function | Description |
|----------|-------------|
| `ft_substr` | Allocates and returns a substring from the string `s`, starting at index `start` with maximum length `len`. Returns `NULL` on allocation failure. |
| `ft_strjoin` | Allocates and returns a new string resulting from the concatenation of `s1` and `s2`. Returns `NULL` on allocation failure. |
| `ft_strtrim` | Allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string. Returns `NULL` on allocation failure. |
| `ft_split` | Allocates and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array is terminated by a `NULL` pointer. Returns `NULL` on allocation failure. |
| `ft_itoa` | Allocates and returns a string representing the integer `n`. Negative numbers are handled. Returns `NULL` on allocation failure. |
| `ft_strmapi` | Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character as the second. Returns a new string resulting from the successive applications of `f`. |
| `ft_striteri` | Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character by reference (allowing modification). |
| `ft_putchar_fd` | Outputs the character `c` to the given file descriptor `fd`. |
| `ft_putstr_fd` | Outputs the string `s` to the given file descriptor `fd`. |
| `ft_putendl_fd` | Outputs the string `s` to the given file descriptor `fd`, followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer `n` to the given file descriptor `fd`. |

### Part 3 — Linked List Functions (9)

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Allocates and returns a new node with the given `content`. The `next` pointer is initialized to `NULL`. |
| `ft_lstadd_front` | Adds the node `new` at the beginning of the list pointed to by `lst`. |
| `ft_lstsize` | Counts the number of nodes in a list. Returns the number of nodes. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds the node `new` at the end of the list. |
| `ft_lstdelone` | Deletes a single node `lst` using the function `del` to free its content, then frees the node itself. The node must not be part of a list (or be the last node). |
| `ft_lstclear` | Deletes and frees the entire list, using `del` to free each node's content, then frees each node. The pointer to the head is set to `NULL`. |
| `ft_lstiter` | Iterates the list `lst` and applies the function `f` to the content of each node. |
| `ft_lstmap` | Iterates the list `lst` and applies the function `f` to the content of each node. Creates a new list resulting from the successive applications of `f`. The `del` function is used to delete the content of a node if an allocation fails. |

## Instructions

### Compilation

```bash
make          # Build libft.a
make clean    # Remove object files
make fclean   # Remove object files + libft.a
make re       # Rebuild from scratch
```

### Usage

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

### Compilation

```bash
cc -Wall -Wextra -Werror -I. main.c -L. -lft -o main
```

Run:
```bash
./a.out
# or
./a.out
```

## Testing

### libft-tester (Claudinette)

A comprehensive test suite for validating libft functions against the 42 subject requirements.

```bash
# Clone and run the tester
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make a
```

**Features:**
- Tests all mandatory and bonus functions
- Checks for memory leaks with Valgrind
- Tests edge cases and edge cases from the subject
- Provides detailed output for each function
- Color-coded output for easy reading

```bash
# Alternative tester: libft-unit-test
git clone https://github.com/alexreg/libft-unit-test.git
cd libft-unit-test
make f
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
- [C Standard Library Reference](https://en.cppreference.com/w/c)

## AI Usage

This project was developed following 42's AI usage guidelines:
- Reasoned through problems before consulting AI
- Did not ask AI for direct solutions
- Used AI only for explanations, debugging assistance, and code review
- All code was written and understood by me

**Documentation note:** A comprehensive Obsidian guide documenting the implementation details, edge cases, and testing strategies for each function will be published separately for future reference.

## Author

albranco — 42 Lisboa