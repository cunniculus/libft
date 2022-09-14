/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:48:53 by guolivei          #+#    #+#             */
/*   Updated: 2022/08/31 22:52:10 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (isprint('a') && ft_isprint('a'))
	{
		printf("a is printable \t\t\033[0;32m OK! %d\n", isprint('a'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint('a'), ft_isprint('a'));
		printf("\033[0;37m"); // white
	}
	if (!isprint('\n') &&  !ft_isprint('\n'))
	{
		printf("\\n is not printable \t\033[0;32m Ok! %d\n", isprint('\n'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint('\n'), ft_isprint('\n'));
		printf("\033[0;37m"); // white
	}
	if (isprint('-') && ft_isprint('-'))
	{
		printf("- is printable \t\t\033[0;32m Ok! %d\n", isprint('-'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint('-'), ft_isprint('-'));
		printf("\033[0;37m"); // white
	}
	if (isprint('B') && ft_isprint('B'))
	{
		printf("B is printable \t\t\033[0;32m OK! %d\n", isprint('B'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint('B'), ft_isprint('B'));
		printf("\033[0;37m"); // white
	}
	if (!isprint(127) &&  !ft_isprint(127))
	{
		printf("DEL is not printable \t\033[0;32m Ok! %d\n", isprint(127));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint(127), ft_isprint(127));
		printf("\033[0;37m"); // white
	}
	if (isprint(' ') &&  ft_isprint(' '))
	{
		printf("SPACE is printable \t\033[0;32m Ok! %d\n", isprint(' '));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint(' '), ft_isprint(' '));
		printf("\033[0;37m"); // white
	}
	if (!isprint(31) &&  !ft_isprint(31))
	{
		printf("int 31 is NOT printable \033[0;32m Ok! %d\n", isprint(31));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isprint(31), ft_isprint(31));
		printf("\033[0;37m"); // white
	}
	printf("\n");
	return (0);
}
