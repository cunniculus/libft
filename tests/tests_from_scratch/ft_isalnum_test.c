/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:48:53 by guolivei          #+#    #+#             */
/*   Updated: 2022/08/31 21:53:19 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (isalnum('a') && ft_isalnum('a'))
	{
		printf("a is alnum \t\t\033[0;32m OK! %d\n", isalnum('a'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalnum('a'), ft_isalnum('a'));
		printf("\033[0;37m"); // white
	}
	if (isalnum('5') && ft_isalnum('5'))
	{
		printf("5 is alnum \t\t\033[0;32m Ok! %d\n", isalnum('5'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalnum('5'), ft_isalnum('5'));
		printf("\033[0;37m"); // white
	}
	if (!isalnum('-') && !ft_isalnum('-'))
	{
		printf("- is not a alnum: \t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalnum('-'), ft_isalnum('-'));
		printf("\033[0;37m"); // white
	}
	if (isalnum('B') && ft_isalnum('B'))
	{
		printf("B is alnum: \t\t\033[0;32m OK! %d\n", isalnum('B'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalnum('B'), ft_isalnum('B'));
		printf("\033[0;37m"); // white
	}
	printf("\n");
	return (0);
}
