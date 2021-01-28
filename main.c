/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:47:25 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/28 14:06:43 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

char	sum_1(unsigned int n, char c);

int	main(void)
{
	/*
	char	ptr[] = "0000000000";

	printf("memset antes: %s\n", ptr);
	ft_memset(ptr, '1', 5);
	printf("memset después: %s\n", ptr);
	*/

	/*
	char	ptr[] = "1111111111";

	printf("bzero antes: %s\n", ptr);
	ft_bzero(ptr, 5);
	printf("bzero después: %s\n", ptr);
	printf("bzero después x2: %s\n", ptr + 5);
	*/

	/*	
	char	dst[] = "";
	char	src[] = "1111111111";

	//printf("memcpy antes: %s\n", dst);
	ft_memcpy(NULL, NULL, 3);
	//printf("memcpy después: %s\n", dst);
	*/

	/*
	char	dst[] = "00000";
	char	src[] = "1121111111";

	printf("memccpy antes: %s\n", dst);
	ft_memccpy(dst, src, '2', 5);
	printf("memccpy después: %s\n", dst);
	*/

	/*	
	char	dst[] = "00000";
	char	src[] = "1111111111";

	printf("memmove antes: %s\n", dst);
	ft_memmove(dst, src, 8);
	printf("memmove después: %s\n", dst);
	*/

	/*
	char	ptr[] = "00200";
	char	*result;

	printf("memchr antes: %s\n", ptr);
	result = ft_memchr(ptr, '2', 4);
	printf("memchr después: %s\n", result);
	*/

	/*	
	char	s1[] = "hola";
	char	s2[] = "holb";
	int		num;

	num = ft_memcmp(s1, s2, 4);
	printf("Diff: %d\n", num);
	*/

	/*
	char	ptr[] = "00000";
	int		num;

	num = ft_strlen(ptr);
	printf("Len: %d\n", num);
	*/	

	/*	
	char	dst[] = "HELLO WORLD";
	char	src[] = "1";
	int		num;
	
	printf("%s\n", dst);
	num = ft_strlcpy(dst, src, 15);
	printf("strlcpy: %s\n", dst);
	*/

		
	char	dst[] = "11111111111";
	char	src[] = "2222";
	int		num;

	num = strlcat(dst, src, 8);
	printf("strlcat: %d\n", num);
	printf("%s\n", dst);
		

	/*	
	char	ptr[] = "0001000100";
	char	*result;

	result = ft_strchr(ptr, '1');
	printf("strchr: %s\n", result);
	*/

	/*
	char	ptr[] = "0001000100";
	char	*result;

	result = ft_strrchr(ptr, '1');
	printf("strrchr: %s\n", result);
	*/

	/*
	char	haystack[] = "0001011100";
	char	needle[] = "1";
	char	*result;

	result = ft_strnstr(haystack, needle, 4);
	printf("strnstr: %s\n", result);
	*/

	/*	
	char	s2[] = "bola";
	char	s1[] = "hola";
	int		num;

	num = ft_strncmp(s1, s2, 4);
	printf("strncmp: %d\n", num);
	*/

	/*	
	char	ptr[] = "34243243234234342342342422";
	int		num;

	num = atoi(ptr);
	printf("atoi: %d\n", num);
	*/

	/*	
	int	num;

	num = ft_isalpha('hello');
	printf("Verif: %d\n", num);
	*/

	/*
	int	num;

	num = ft_isdigit('8');
	printf("Verif: %d\n", num);
	*/

	/*
	int	num;

	num = ft_isalnum('z');
	printf("Verif: %d\n", num);
	*/

	/*
	int	num;

	num = ft_isascii(' ');
	printf("Verif: %d\n", num);
	*/

	/*
	int	num;

	num = ft_isprint('-');
	printf("Verif: %d\n", num);
	*/

	/*
	printf("toupper: %c\n", ft_toupper('c'));
	printf("tolower: %c\n", ft_tolower('Z'));
	*/

	/*
	char	*result;

	result = ft_calloc(4, 1);
	printf("calloc: %s\n", result);
	*/

	/*
	char	ptr[] = "123456789";
	char	*result;

	result = ft_strdup(ptr);
	printf("strdup: %s\n", result);
	printf("Dir ptr: %p\n", &ptr);
	printf("Dir result: %p\n", &result);
	*/

/*	
	char	ptr[] = "123456789";
	char	*result;

	printf("substr antes: %s\n", ptr);
	result = ft_substr(ptr, 3, 4);
	printf("substr después: %s\n", result);
*/	

	/*
	char	s1[] = "00000";
	char	s2[] = "11111";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("strjoin: %s\n", result);
	*/

	/*
	char	s1[] = "1234545355323314512";
	char	s2[] = "123";
	char	*result;

	result = ft_strtrim(s1, s2);
	printf("strtrim: %s\n", result);
	*/

	/*
	char	s1[] = "0 11  222   3333";
	char	**result;

	result = ft_split(s1, ' ');
	for (int i = 0; result[i]; i++)
	{
		printf("result[%d]: %s\n", i, result[i]);
	}
	*/	

	/*	
	char	*result;

	result = itoa(8328748);
	printf("itoa: %s\n", result);
	*/

	/*	
	char	ptr[] = "9999";
	char	*result;

	result = ft_strmapi(ptr, sum_1);
	printf("%s\n", result);
	*/

	/*	
	ft_putchar_fd('0', 1);
	ft_putstr_fd(" 11", 1);
	ft_putendl_fd("  222", 1);
	ft_putnbr_fd(111, 1);
	*/

}

char	sum_1(unsigned int n, char c)
{
	while (n > 0)
	{
		c--;
		n--;
	}
	return (c);
}
