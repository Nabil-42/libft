# libft

[![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=flat&logo=c)](https://github.com/Nabil-42/libft)
[![School](https://img.shields.io/badge/Ecole_42-Paris-00babc?style=flat)](https://42.fr)
[![Norminette](https://img.shields.io/badge/Norminette-compliant-brightgreen?style=flat)](https://github.com/42School/norminette)

Reimplementation of a subset of the C standard library, extended with additional utility functions. This is the foundational library used across all subsequent 42 projects.

## Contents

### Standard C functions (libc)

| Function | Description |
|----------|-------------|
| `ft_memset` / `ft_bzero` / `ft_memcpy` / `ft_memmove` / `ft_memchr` / `ft_memcmp` | Memory operations |
| `ft_strlen` / `ft_strlcpy` / `ft_strlcat` / `ft_strchr` / `ft_strrchr` / `ft_strncmp` / `ft_strnstr` / `ft_strdup` | String operations |
| `ft_atoi` / `ft_isalpha` / `ft_isdigit` / `ft_isalnum` / `ft_isascii` / `ft_isprint` / `ft_toupper` / `ft_tolower` | Char and conversion |
| `ft_calloc` | Memory allocation |

### Additional functions

| Function | Description |
|----------|-------------|
| `ft_substr` / `ft_strjoin` / `ft_strtrim` / `ft_split` / `ft_itoa` / `ft_strmapi` / `ft_striteri` | String utilities |
| `ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd` | Output to file descriptor |

### Bonus - Linked lists

| Function | Description |
|----------|-------------|
| `ft_lstnew` / `ft_lstadd_front` / `ft_lstadd_back` / `ft_lstsize` / `ft_lstlast` | List creation and navigation |
| `ft_lstdelone` / `ft_lstclear` / `ft_lstiter` / `ft_lstmap` | List manipulation |

## Build

```bash
make        # build libft.a
make bonus  # build with linked list functions
make clean  # remove object files
make fclean # remove object files and libft.a
make re     # full rebuild
```

## Usage

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("hello");
    ft_putendl_fd(s, 1);
    free(s);
    return (0);
}
```

Compile with:
```bash
gcc main.c -L. -lft -o program
```

## 42 Project Info

| Field | Value |
|-------|-------|
| **Project** | libft |
| **Circle** | 0 |
| **Norminette** | Compliant |

## What I Learned

- Rebuilding standard C functions from scratch to understand their internals
- Memory management and pointer arithmetic
- Linked list data structure implementation in C