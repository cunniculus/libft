/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:41:57 by coder             #+#    #+#             */
/*   Updated: 2022/09/01 03:26:49 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // malloc, free
#include <string.h> // memset
#include "libft.h" // ft_memset

void	ft_putstr(char *s);

int main (void)
{
	char *ptr1;
	char *ptr2;


	ptr1 = malloc (sizeof(int));
	ptr2 = malloc (sizeof(int));
	memset(ptr2, 130, sizeof (int));
	ft_putstr("memset: 4bytes\n");
	write(1, ptr2, 8);
	write(1, "\n\n", 2);

	ft_memset(ptr1, 130, sizeof (int));
	ft_putstr("ft_memset: 4bytes\n");
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
