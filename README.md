*This project has been created as part of the 42 curriculum by wdaou.*

# Libft

## Description

Libft is my first C library. The goal is to rewrite some standard libc functions
myself, add a few useful extra functions, and use them in my future 42 projects.
Everything is compiled into a static library, `libft.a`.

The library has three parts:

- **Libc functions:** my own versions of `isalpha`, `isdigit`, `isalnum`, `isascii`,
  `isprint`, `strlen`, `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`,
  `toupper`, `tolower`, `strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`, `strnstr`,
  `atoi`, `calloc` and `strdup`, all with the `ft_` prefix.
- **Additional functions:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`,
  `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`,
  `ft_putendl_fd` and `ft_putnbr_fd`.
- **Linked list:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
  `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter` and `ft_lstmap`,
  using the `t_list` structure defined in `libft.h`.

## Instructions

Build the library from the root of the repository:

```bash
make        # creates libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

To use it, include the header and link the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Resources

- `man` pages of the original functions
- [libftTester](https://github.com/Tripouille/libftTester)

**Use of AI:** AI was used to help write this README.