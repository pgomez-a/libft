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

### Libc Functions
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

**ft_memchr**

       void	*ft_memchr(const void *s, int c, size_t n)
       
The ft_memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.<br>
The ft_memchr() function returns a pointer to the matching byte or NULL if the characters does not occur in the given memory area.

**ft_memcmp**

       int	ft_memcmp(const void *s1, const void *s2, size_t n)
       
The ft_memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.<br>
The ft_memcmp() function returns an interger less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. For a nonzero return value, the sign if determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2. If n is zero, the return value is zero.

**ft_strlen**

       size_t	ft_strlen(const char *s)
       
The ft_strlen() function calculates the length of the string s, excluding the terminating null byte '\0'.<br>
The ft_strlen() function  returns the number of bytes in the string s.

**ft_strlcpy**

       size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
       
The ft_strlcpy() function copies up to dstsize - 1 characters from the NULL terminated string src to dst, NULL terminating the result.<br>
The ft_strlcpy() function returns the total length fo the string it tried to create. That means the length of src.

**ft_strlcat**

       size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
       
The ft_strlcat() function appends the NULL terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NULL terminating the result.<br>
The ft_strlcat() function returns the total length for the string it tried to create. That means the initial length of dst plus the length of src.

**ft__strchr**

       char	*ft_strchr(const char *s, int c)
       
The ft_strchr() function returns a pointer to the first occurrence of the character c in the string s.<br>
The ft_strchr() function returns a pointer to the matched character or NULL if the character is not found. The terminating NULL byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

**ft_strrchr**

       char	*ft_strrchr(const char *s, int c)
       
The ft_strrchr() function returns a pointer to the last occurence of the character c in the string s.<br>
The ft_strrchr() function returns a pointer to the matched character or NULL if the character is not found. The terminating NULL byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

**ft_strnstr**

       char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
       
The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a '\0' character are not searched.<br>
If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.

**ft_strncmp**

       int    ft_strncmp(const char *s1, const char *s2, size_t n);
       
The ft_strncmp() function lexicographically compare the NULL terminated strings s1 and s2. It compares not more than n characters. Because ft_strncmp() function is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.<br>
The ft_strncmp() function return an interger greater than, equal to, or less than 0, according ad the string s1 is greater than, equal to, or less than the string s2. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.

**ft_atoi**

       int    ft_atoi(const char *str);
       
The ft_atoi() function converts the initial portion of the string pointed to by str to int representation.

**ft_isalpha**

       int    ft_isalpha(int c);
       
The ft_isalpha() function tests for any character for which isupper(3) or islower(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF.<br>
The ft_isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.

**ft_isdigit**

       int    ft_isdigit(int c);
       
The ft_isdigit() function tests for a decimal digit character. The value of the argument must be representable as an unsigned char or the value of EOF.<br>
The ft_isdigit() function return zero if the character tests false and return non-zero if the character tests true.

**ft_isalnum**

       int    ft_isalnum(int c);
       
The ft_isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF.<br>
The ft_isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.

**ft_isascii**

       int    ft_isascii(int c);
       
The ft_isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.

**ft_isprint**

       int    ft_isprint(int c);
       
The ft_isprint() funtcion tests for any printing character, including space. The value of the argument must be representable as an unsigned char or the value of EOF.<br>
The ft_isprint() function returns zero if the character tests false and returns non-zero if the character tests true.

**ft_toupper**

       int    ft_toupper(int c);
       
The ft_toupper() function converts a lower-case letter to the corresponding upper-case letter. The argument must be representable as an unsigned char or the value of EOF.<br>
If the argument is a lower-case letter, the ft_toupper() function returns the corresponding upper-case letter if there if one; otherwise, the argument is returned unchanged.

**ft_tolower**

       int    ft_tolower(int c);
       
The ft_tolower() function converts an upper-case letter to the corresponding lower-case letter. The argument must be representable as an unsigned char or the value of EOF.<br>
If the argument is an upper-case letter, the ft_tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.

**ft_calloc**

       void   *ft_calloc(size_t count, size_t size);
       
The ft_calloc() function contiguosly allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero.<br>
The ft_calloc() function returns a pointer to allocated memory. If there is an error, it returns a NULL pointer and sets errno to ENOMEM.

**ft_strdup**

       char   *ft_strdup(const char *s1);
       
The ft_strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3). If insufficient memory if available, NULL is returned and errno is set no ENOMEM.

### Additional Functions
**ft_substr**

       char   *ft_substr(char const *s, unsigned int start, size_t len);
       
The ft_substr() function allocates (with malloc(3)) and returns a "fresh" substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren't refering to a valid substring, the behaviour is undefined. If the allocation fails, the function returns NULL.<br>
The ft_substr() function returns the substring.

**ft_strjoin**

       char   *ft_strjoin(char const *s1, char const *s2);
       
The ft_strjoin() function allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.<br>
The ft_strjoin() function returns the "fresh" string result of the concatenation of the 2 strings.

**ft_strtrim**

       char   *ft_strtrim(char const *s1, char const *set);
       
The ft_strtrim() function allocates (with malloc(3)) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string.<br>
The ft_strtrim() function returns the trimmed string. NULL if the allocation fails.

**ft_split**

       char   **ft_split(char const *s, char c);
       
The ft_split() function allocates (with malloc(3)) and returns an array of strings obtained by splitting s using the character c as a delimiter. The array must be ended by a NULL pointer.<br>
The ft_split() function returns the array of new strings result of the split. NULL if the allocation fails.

**ft_itoa**

       char   *ft_itoa(int n);
       
The ft_itoa() function allocates (with malloc(3)) and returns a string representating the integer received as an argument. Negative numbers must be handled.<br>
The ft_itoa() function returns the string representating the integer. NULL if the allocation fails.

**ft_strmapi**

       char   *ft_strmapi(char const *s, char (*f)(unsigned int, char));
       
The ft_strmapi() function applies the function f to each character of the string passed as argument to create a new string (with malloc(3)) resulting from successive applications of f.<br>
The ft_strmapi() function returns the string created from the successive applications of f. Returns NULL if the allocation fails.

**ft_putchar_fd**

       void   ft_putchar_fd(char c, int fd);
       
The ft_putchar_fd() function outputs the character c to given file descriptor.

**ft_putstr_fd**

       void   ft_putstr_fd(char *s, int fd);
       
The ft_putstr_fd() function outputs the string c to given file descriptor.

**ft_putendl_fd**

       void   ft_putendl_fd(char *s, int fd);
       
The ft_putendl_fd() function outputs the string c to given file descriptor, followed by a newline.

**ft_putnbr_fd**

       void   ft_putnbr_fd(int n, int fd);
       
The ft_putnbr_fd() function outputs the integer n to given file descriptor.

 ## In closing...
As you do your own projects, you can add new functions to this library.
In this case, the functions you find are the ones that have been useful to me to date. If you think that you won't use many of these functions, try creating your
own. <br>
It is not necessary that you know how to create libraries, if you are reading this it is because you can access the Internet and nothing prevents you from
learning how to create them. I know this because before starting this project I didn't know how to do it, so don't be discouraged and keep coding :)
       
