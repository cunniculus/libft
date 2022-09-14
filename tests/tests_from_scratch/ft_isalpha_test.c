/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:48:53 by guolivei          #+#    #+#             */
/*   Updated: 2022/09/06 18:14:40 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (isalpha('a') && ft_isalpha('a'))
	{
		printf("a is alpha \t\t\033[0;32m OK! %d\n", isalpha('a'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalpha('a'), ft_isalpha('a'));
		printf("\033[0;37m"); // white
	}
	if (!isalpha('5') &&  !ft_isalpha('5'))
	{
		printf("5 is not a alpha \t\033[0;32m Ok! %d\n", isalpha('5'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalpha('5'), ft_isalpha('5'));
		printf("\033[0;37m"); // white
	}
	if (!isalpha('-') && !ft_isalpha('-'))
	{
		printf("- is not a alpha: \t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalpha('-'), ft_isalpha('-'));
		printf("\033[0;37m"); // white
	}
	if (isalpha('B') && ft_isalpha('B'))
	{
		printf("B is alpha: \t\t\033[0;32m OK! %d\n", isalpha('B'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isalpha('B'), ft_isalpha('B'));
		printf("\033[0;37m"); // white
	}
	printf("\n");
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('B'));
	printf("%d\n", isalpha('1'));
	printf("%d\n", isalpha('*'));
	return (0);
}
