/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:48:53 by guolivei          #+#    #+#             */
/*   Updated: 2022/08/31 22:10:10 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (isascii('a') && ft_isascii('a'))
	{
		printf("a is ascii \t\t\033[0;32m OK! %d\n", isascii('a'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isascii('a'), ft_isascii('a'));
		printf("\033[0;37m"); // white
	}
	if (!isascii(200) &&  !ft_isascii(200))
	{
		printf("int 200 is not a ascii \t\033[0;32m Ok! %d\n", isascii(200));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isascii(200), ft_isascii(200));
		printf("\033[0;37m"); // white
	}
	if (isascii('-') && ft_isascii('-'))
	{
		printf("- is not a ascii: \t\033[0;32m Ok! %d\n", isascii('-'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isascii('-'), ft_isascii('-'));
		printf("\033[0;37m"); // white
	}
	if (isascii('B') && ft_isascii('B'))
	{
		printf("B is ascii: \t\t\033[0;32m OK! %d\n", isascii('B'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isascii('B'), ft_isascii('B'));
		printf("\033[0;37m"); // white
	}
	printf("\n");
	return (0);
}
