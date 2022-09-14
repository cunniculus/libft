#include <stdlib.h> //malloc, free
#include <unistd.h> // write
#include <string.h> // memset, memmove
#include "libft.h" // ft_memmove

void	ft_putstr(char *s);

int main (void)
{
	//src > dest
	void *dest = malloc(24);
	void *src = dest + 4;

	memset(dest, 'A', 24);
	memset(src, 'b', 20);

	ft_putstr("Original src: ");
	write(1, src, 20);
	ft_putstr("\nOriginal dest: ");
	write(1, dest, 24);

	memmove(dest, src, 1);
	ft_putstr("\n\nmemmove\ndest: ");
	write(1, dest, 24);
	write(1, "\nsrc: ", 6);
	write(1, src, 20);
	write(1, "\n\n", 2);

	memset(dest, 'A', 24);
	memset(src, 'b', 20);

	ft_memmove(dest, src, 1);
	ft_putstr("ft_memmove\ndest: ");
	write(1, dest, 24);
	write(1, "\nsrc: ", 6);
	write(1, src, 20);
	write(1, "\n\n", 2);

	free (dest);
	
	// src < dest
	src = malloc (24);
	dest = src + 4;

	memset(src, 'b', 24);
	memset(dest, 'A', 20);
	
	ft_putstr("Original src: ");
	write(1, src, 24);
	ft_putstr("\nOriginal dest: ");
	write(1, dest, 20);

	memmove(dest, src, 1);
	ft_putstr("\n\nmemmove\ndest: ");
	write(1, dest, 20);
	write(1, "\nsrc: ", 6);
	write(1, src, 24);
	write(1, "\n\n", 2);

	memset(src, 'b', 24);
	memset(dest, 'A', 20);

	ft_memmove(dest, src, 1);
	ft_putstr("ft_memmove\ndest: ");
	write(1, dest, 20);
	write(1, "\nsrc: ", 6);
	write(1, src, 24);
	write(1, "\n", 1);
	free(src);
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
