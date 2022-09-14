/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:48:53 by guolivei          #+#    #+#             */
/*   Updated: 2022/08/31 21:07:04 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (isdigit('1') && ft_isdigit('1'))
	{
		printf("1 is digit \t\t\033[0;32m OK! %d\n", isdigit('1'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isdigit('1'), ft_isdigit('1'));
		printf("\033[0;37m"); // white
	}
	if (!isdigit('a') &&  !ft_isdigit('a'))
	{
		printf("a is not a digit \t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isdigit('a'), ft_isdigit('a'));
		printf("\033[0;37m"); // white
	}
	if (!isdigit('-') && !ft_isdigit('-'))
	{
		printf("- is not a digit: \t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isdigit('a'), ft_isdigit('a'));
		printf("\033[0;37m"); // white
	}
	if (isdigit('7') && ft_isdigit('7'))
	{
		printf("7 is digit: \t\t\033[0;32m OK! %d\n", isdigit('7'));
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\033[0;31m Fail!! %d %d\n", isdigit('7'), ft_isdigit('7'));
		printf("\033[0;37m"); // white
	}
	printf("\n");
	return (0);
}
