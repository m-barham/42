*This project has been created as part of the 42 curriculum by m-barham.*

# libft

## Description

libft is a small C library created as part of the 42 curriculum. The goal of the project is to re-implement a selection of standard C library functions and a handful of useful utility functions to deepen understanding of C, pointers, memory management, and basic data structures. The library is provided as a static archive (libft.a) and a single header (libft.h) exposing the implemented API.

This repository contains the source code, header files, Makefile, and example/test programs to build and validate the library.

## Library overview

- Name: libft
- Artifact: libft.a (static archive)
- Header: libft.h
- Compiler flags used: -Wall -Wextra -Werror

Implemented function categories (detailed list follows):

1) Character checks and conversions
- ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
- ft_toupper, ft_tolower

2) String functions
- ft_strlen, ft_strlcpy, ft_strlcat, ft_strncmp, ft_strchr, ft_strrchr, ft_strnstr, ft_strdup
- ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi

3) Memory functions
- ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc

4) I/O helpers
- ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

5) Conversion
- ft_atoi, ft_itoa

6) Linked list helpers (bonus)
- ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back
- ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

Notes:
- The exact set of functions implemented in this repository matches the libft subject and may include the "bonus" linked-list functions where indicated in the Makefile.
- Function names use the ft_ prefix to avoid clashing with the system libc.

## Detailed description of the library

The library is organized as a set of .c source files grouped by functionality, with a single public header libft.h that contains all function prototypes, macros, and the linked list struct definition:

```c
/* example excerpt from libft.h */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

/* function prototypes */
size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
/* ... other prototypes ... */

#endif
```

Building produces libft.a which can be linked into other programs. The Makefile provides targets: all, clean, fclean, re, and bonus (if bonus functions are present). The library is written with defensive checks (NULL checks where appropriate) and aims to match the behavior of the standard functions for the tested inputs.

## Instructions

To build the library (from repository root):

1. Build:

```bash
make
```

This builds the object files and archives them into libft.a.

2. Build with bonus functions (if implemented):

```bash
make bonus
```

3. Clean object files:

```bash
make clean
```

4. Remove objects and archive:

```bash
make fclean
```

5. Rebuild from clean state:

```bash
make re
```

Using the library in your project:

- Example compile command linking libft.a:

```bash
gcc -Wall -Wextra -Werror -I includes -L. -lft main.c -o main
```

- Or provide the static archive directly to the compiler:

```bash
gcc -I includes main.c libft.a -o main
```

Where `includes` is the directory that contains `libft.h` (adjust paths as necessary).

Running tests / quick validation:

- There may be an example `main.c` or test folder in the repo. Compile with the library as above and run the executable to exercise implemented functions.
- Optionally use automated test suites (not included) such as "libft-unit-tests" available from the 42 community.

## API and usage examples

A few short examples showing common functions:

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("Hello, libft");
    if (!s)
        return (1);
    ft_putstr_fd(s, 1); // write to stdout
    ft_putchar_fd('\n', 1);
    free(s);
    return (0);
}
```

Linked list example:

```c
#include "libft.h"

int main(void)
{
    t_list *node = ft_lstnew(strdup("node1"));
    t_list *node2 = ft_lstnew(strdup("node2"));
    ft_lstadd_back(&node, node2);
    // iterate and print
    ft_lstiter(node, (void (*)(void *))puts);
    ft_lstclear(&node, free);
    return 0;
}
```

## Resources

- man pages for standard functions (e.g., man strlen, man memcpy)
- The C Standard Library reference: https://en.cppreference.com/w/c
- 42 Network libft subject (check your campus intranet or project description for the official PDF)
- Common tutorials and references:
  - "The C Programming Language" — Kernighan & Ritchie
  - https://man7.org/linux/man-pages/ (Linux man pages online)
  - https://www.gnu.org/software/libc/manual/ (GNU C library manual)

AI usage disclosure

- I used AI assistance to help draft and refine this README file: structure, wording, and usage examples. The AI was used only for writing documentation and examples contained in README.md.
- All source code in the repository was written, adapted, and reviewed by me (m-barham). If any code in this repo was generated or heavily edited with AI assistance, it would be explicitly noted in the individual source files; otherwise assume code is authored by me.

## Contributing

- If you find bugs or want to propose improvements, open an issue or a pull request.
- Follow the coding style used across the repository (42 coding style: norminette rules, function naming with ft_ prefix, etc.).

## License

Add a license file or choose a license as appropriate. This repository currently does not include a license; adapt as needed for sharing or reuse.

---

If you want, I can:
- add a short example test harness to this repo,
- generate or integrate an automated test suite (community libft tests), or
- update the README with exact function lists and links to each implemented source file.

