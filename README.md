# libft
**libft** is a project in which you have to replicate the most basic functions of C, as well as implement other slightly more complex but very important functions
too.
Thanks to our **libft** project we will be able to access to very commonly used functions while programming, saving time by not having to reprogram the same
function again and again.

It is true that C already includes most of the functions found in **libft**, although these are distributed in different libraries. However, as good programmers
we have to be able to understand the 100% of our code, and what a better way to achieve it than to spend a little time at first recreating functions that already
exist but that in the long run will make our workflow much more dynamic, by knowing exactly what each line of our program do and not having to waste time reading
the manual. **¡¡RFM!!**

## What functions does libft have?
The peculiarity of this project is that as time passes it will be updated with new functions. I mean, it will not be a library with a fixed content, so if at any
time we need to resort to the use of new functions, what we will do would be to program them, to introduce them in the library and finally, to use them as one
more piece of our code.
Thus, taking into account the functions of our **libft**, we can make the following classification:

Libc Functions | Additional Functions | Linked Lists Functions | Personal Functions
:------------- | :------------- | :------------- | -------------:
ft_memset         | ft_substr       | ft_lstnew
ft_bzero          | ft_strjoin      | ft_lstadd_front
ft_memcpy         | ft_strtrim      | ft_lstsize
ft_memccpy        | ft_split        | ft_lstlast
ft_memmove        | ft_itoa         | ft_lstadd_back
ft_memchr         | ft_strmapi      | ft_lstdelone
ft_memcmp         | ft_putchar_fd   | ft_lstclear
ft_strlen         | ft_putstr_fd    | ft_lstiter
ft_strlcpy        | ft_putendl_fd   | ft_lstmap
ft_strlcat        | ft_putnbr_fd
ft_strchr
ft_strrchr
ft_strnstr
ft_strncmp
ft_atoi
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower
ft_calloc
ft_strdup

**Libc Functions:** basic functions of the libc.<br>
**Additional Functions:** functions not included in the libc but widely used.<br>
**Linked List Functions:** functions to manipulate linked lists.<br>
**Personal Functions:** functions of my own harvest (Spanish expression).<br>

## How does the libft work?
**libft** is nothing more than a library that contains the functions that you see above in the table.
If you are wondering what the use of this library would make, I'll explain it quickly: as a 42 Student, we are not allowed to use most of the functions
that come by default programmed in C. The main objective that they want us to achieve with this project is to get a deep and detailed knowledge about the
functioning of C, coming into contact with the concepts of: pointer, dynamic memory, structures, linked lists, etc.

If you want to access the content of this project and learn more about the behavior of **libft**, you will have to follow the following steps:
1. Clone the repository and access it, using the cd command. Note that you must access the **libft** folder:

       git clone https://github.com/pgomez-a/libft.git
       cd libft
       
2. Once inside, you will be able to access all the functions that **libft** contains, as well as its **libft.h** file and its corresponding Makefile:
            
       ls // To see all the files that libft contains
       
3. Once all the functions have been analyzed and understood, you can create the library using:

       make // You are going to create our libc.a library with the functions of the libc and the additional functions
       
4. The rest of the operations you can do with Makefile are:

       make bonus // Creates the libft.a library with the libc, additional and bonus functions
       make clean // Deletes the .o files that are created when forming libft.a
       make fclean // Does a make clean and also removes the libft.a library created
       make re // Does a make fclean and recreates the libft.a library with make
       
5. Finally, if you want to run a main using your new library, you will have to do:

       gcc -Wall -Werror -Wextra main.c -L. -lft
       
       
 ## In closing...
As you do your own projects, you can add new functions to this library.
In this case, the functions you find are the ones that have been useful to me to date. If you think that you won't use many of these functions, try creating your
own. <br>
It is not necessary that you know how to create libraries, if you are reading this it is because you can access the Internet and nothing prevents you from
learning how to create them. I know this because before starting this project I didn't know how to do it, so don't be discouraged and keep coding :)
       
