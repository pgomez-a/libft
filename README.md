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
       
## Info for recruiters
If you are interested in my work, please do not hesitate to contact me. I am open to join new and innovative projects, especially if they are related to Big Data and Artificial Intelligence. Remember that on my Read me page you can contact me in different ways, having access to my Linkedin account and my email.

## Wiki Functions
You may be wondering how to use and implement this functions in your code. As you can imagine, you can access the manual for most of the funcions that are currently on the libft, but there are other ones that don't have an specific man page in the terminal. So, to make you the work easier, I have written the behaviour of each function so that you can see in the same page what all functions have to do.

**ft_memset**

       void	*ft_memset(void *b, int c, size_t len)
       
The ft_memset() function fills the first len bytes of the memory area pointed to by b with the constant byte c.<br>
The ft_memset() function returns a pointer to the memory area b.

**ft_bzero**

       void	ft_bzero(void *s, size_t n)
       
The ft_bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.<br>
The ft_bzero() function does no return anything.

**ft_memcpy**

       void	*ft_memcpy(void *dst, const void *src, size_t n)
       
The ft_memcpy() function copies n bytes from memory area src to memory area dst. The memory areas must not overlap. Use ft_memmove if the memory areas do overlap.<br>
The ft_memcpy() function returns a pointer to dst.

**ft_memccpy**

       void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
       
The ft_memccpy() function copies no more than n bytes from memory area src to memory area dst, stopping when the character c is found. If the memory areas overlap, the results are undefined.<br>
The ft_memccpy() function returns a pointer to the next character in dst after c, or NULL if c was not found in the first n characters of src.

**ft_memmove**

       void	*ft_memmove(void *dst, const void *src, size_t len)
       
The ft_memmove() function copies n bytes from memory area src to memory area dst. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dst, and the bytes are then copied from the temporary array to dst.<br>
The ft_memmove() function returns a pointer to dst.


 ## In closing...
As you do your own projects, you can add new functions to this library.
In this case, the functions you find are the ones that have been useful to me to date. If you think that you won't use many of these functions, try creating your
own. <br>
It is not necessary that you know how to create libraries, if you are reading this it is because you can access the Internet and nothing prevents you from
learning how to create them. I know this because before starting this project I didn't know how to do it, so don't be discouraged and keep coding :)
       
