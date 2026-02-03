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

### Linked List Functions 
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

To compile the library, run make to generate libft.a. Use make clean to remove object files, make fclean to remove object files and the library, and make re to rebuild everything. To use the library in other projects, include libft.h in your source files and link libft.a during compilation, for example: gcc main.c -L/path/to/libft -lft -o my_program. Once compiled, execute your program normally with ./my_program.

## Resources

During the development of the **Libft project**, the following resources were used to understand C programming concepts, function implementations, and project requirements:

### Documentation
- **[42 School Libft Subject PDF](https://cdn.intra.42.fr/pdf/pdf/12345/libft.pdf)** – Official project instructions and requirements.
- **[C Standard Library Documentation (man pages)](https://man7.org/linux/man-pages/)** – Reference for standard C functions and behavior.

### Learning and Tutorials
- **[CS50 – Introduction to Computer Science (David J. Malan)](https://cs50.harvard.edu/x/)** – Comprehensive lessons on C programming, memory management, and problem-solving techniques.
- **[GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)** – Tutorials and examples for C functions and memory management.

### AI Usage

This project leveraged artificial intelligence to assist in development and enhance certain project components. The AI was used for the following tasks:

- **Code Generation and Optimization:** AI tools helped generate boilerplate code, suggest improvements, and optimize logic in specific modules.  
- **Content and Documentation:** AI assisted in drafting this README, inline code comments, and other documentation to improve clarity and consistency.  
- **Testing and Debugging Assistance:** AI suggested test cases and highlighted potential edge cases in the codebase.  

All AI-generated content and suggestions were carefully reviewed and refined to ensure correctness and alignment with project objectives.
