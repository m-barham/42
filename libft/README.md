*This project has been created as part of the 42 curriculum by mbarham.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to build your own C static library (`libft.a`) that reimplements a set of standard libc functions, adds useful utility functions, and provides a basic linked-list toolkit. The library is reused in later 42 projects.

Overview of the project:

- **Part 1 – Libc functions:** reimplementation of standard functions with the `ft_` prefix, matching the behavior described in their man pages.
- **Part 2 – Additional functions:** string, memory and file-descriptor output utilities that are not in libc or exist in a different form.
- **Part 3 – Linked list:** a generic singly linked list (`t_list`) with functions to create, add, iterate, map and free nodes.

Constraints: written in C, compliant with the 42 Norm, no global variables, compiled with `cc -Wall -Wextra -Werror`, archive created with `ar` (no `libtool`), and no memory leaks.

## Instructions

### Compilation

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

### Usage in your own project

1. Include the header:

```c
#include "libft.h"
```

2. Compile and link against the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Library description

### Part 1 – Libc functions

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2 – Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of `s` starting at `start` with a maximum length `len`. |
| `ft_strjoin` | Returns a new string made of `s1` followed by `s2`. |
| `ft_strtrim` | Returns a copy of `s1` with the characters in `set` removed from both ends. |
| `ft_split` | Splits `s` using the delimiter `c` into a NULL-terminated array of strings. |
| `ft_itoa` | Converts an integer (including negatives) to a string. |
| `ft_strmapi` | Applies `f(index, char)` to each character and returns the new string. |
| `ft_striteri` | Applies `f(index, &char)` to each character of `s` in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 – Linked list

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (using `del`) and the node itself. |
| `ft_lstclear` | Frees a node and all its successors, then sets the list pointer to NULL. |
| `ft_lstiter` | Applies `f` to the content of each node. |
| `ft_lstmap` | Builds a new list by applying `f` to each node's content, using `del` on failure. |

## Resources

### References

- `man 3` pages for each reimplemented function (`man 3 strlcpy`, `man 3 memmove`, etc.)
- [The C Programming Language – Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [The 42 Norm](https://github.com/42School/norminette)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

### Use of AI

- AI was used to help draft the structure and wording of this `README.md`.
- AI was used to help with explanations of concepts.
