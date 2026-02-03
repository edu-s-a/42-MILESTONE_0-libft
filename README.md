*This project has been created as part of the 42 curriculum by edsole-a.*

# libft

## Description
`libft` is a personal C library that reimplements a selection of standard C library functions.  
The goal of this project is to strengthen understanding of low-level C programming concepts, including memory management, pointers, string manipulation, and dynamic data structures.  

By completing this project, the following abilities are gained:  
- Create and manage memory safely with `malloc`, `free`, and custom memory functions.  
- Work with strings and characters without relying on the standard library.  
- Implement and manipulate linked lists, a key dynamic data structure.  
- Develop reusable functions that can serve as a foundation for other projects.

The library provides a solid base for future 42 projects by offering reliable, reusable functions that mirror common C library behavior.

---

## Library Overview

### Character and Conversion Functions
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` – check character types  
- `ft_toupper`, `ft_tolower` – convert character case  
- `ft_atoi` – convert a string to an integer  
- `ft_itoa` – convert an integer to a string

### String Functions
- `ft_strlen` – measure string length  
- `ft_strlcpy`, `ft_strlcat` – safe string copy and concatenation  
- `ft_strchr`, `ft_strrchr` – locate a character in a string  
- `ft_strncmp`, `ft_strnstr` – compare strings and search substrings  
- `ft_strdup` – duplicate a string  
- `ft_substr`, `ft_strjoin`, `ft_strtrim` – extract, combine, and trim strings  
- `ft_split` – split a string by a delimiter  
- `ft_strmapi`, `ft_striteri` – apply a function to each character

### Memory Functions
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove` – manipulate memory buffers  
- `ft_memchr`, `ft_memcmp` – search and compare memory blocks  
- `ft_calloc` – allocate and zero-initialize memory

### File Descriptor Output
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` – output data to any file descriptor

### Linked List Functions (Bonus)
- `t_list` – singly linked list structure  
- `ft_lstnew` – create a new node  
- `ft_lstadd_front`, `ft_lstadd_back` – add nodes to a list  
- `ft_lstsize` – return the number of nodes  
- `ft_lstlast` – access the last node  
- `ft_lstdelone`, `ft_lstclear` – delete nodes or entire lists  
- `ft_lstiter` – apply a function to each node  
- `ft_lstmap` – create a new list by transforming each node

---

## Instructions

### Compilation
To build the library:

```bash
gcc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
