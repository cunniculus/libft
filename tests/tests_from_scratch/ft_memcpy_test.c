/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:19:21 by guolivei          #+#    #+#             */
/*   Updated: 2022/09/01 04:21:01 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h> //malloc, free
#include <unistd.h> // write
#include <string.h> // memset, memcpy
#include "libft.h" // ft_memset

void	ft_putstr(char *s);

int main (void)
{
	void *ptr1 = malloc(8);
	void *ptr3 = malloc(8);
	void *ptr2 = malloc(8);


	memset(ptr1, 'a', 8);
	memset(ptr2, 'b', 8);
	memset(ptr3, 'a', 8);
	memcpy(ptr1, ptr2, 2);
	ft_putstr("memcpy\n");
	write(1, ptr1, 8);
	write(1, "\n\n", 2);

	ft_memcpy(ptr3, ptr2, 2);
	ft_putstr("ft_memcpy\n");
	write(1, ptr3, 8);
	write(1, "\n", 1);
	free(ptr1);
	free(ptr2);
	free(ptr3);
	return (0);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
