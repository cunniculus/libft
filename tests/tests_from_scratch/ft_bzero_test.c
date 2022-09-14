/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 02:01:44 by guolivei          #+#    #+#             */
/*   Updated: 2022/09/01 03:25:15 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // malloc, free
#include <string.h> // memset, bzero
#include "libft.h" // ft_bzero

void	ft_putstr(char *s);

int main (void)
{
	char *ptr1;
	char *ptr2;


	ptr1 = malloc (sizeof(int));
	ptr2 = malloc (sizeof(int));
	memset(ptr2, 'a', sizeof (int));
	ft_putstr("memset: 4bytes\n");
	write(1, ptr2, 8);
	write(1, "\n", 1);
	bzero(ptr2, sizeof (int));
	write(1, ptr2, 8);
	write(1, "\n\n", 2);

	ft_memset(ptr1, 'a', sizeof (int));
	ft_putstr("ft_memset: 4bytes\n");
	write(1, ptr1, 8);
	write(1, "\n", 1);
	bzero(ptr1, sizeof (int));
	write(1, ptr1, 8);
	write(1, "\n", 1);
	free(ptr1);
	free(ptr2);
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
