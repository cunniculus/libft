#include "libft.h"

int main(void)
{
	ft_putnbr_fd(1, 1);
	ft_putendl_fd("", 1);

	ft_putnbr_fd(9, 1);
	ft_putendl_fd("", 1);

	ft_putnbr_fd(-1, 1);
	ft_putendl_fd("", 1);
	
	ft_putnbr_fd(-9, 1);
	ft_putendl_fd("", 1);

	ft_putnbr_fd(42, 1);
	ft_putendl_fd("", 1);

	ft_putnbr_fd(-42, 1);
	ft_putendl_fd("", 1);

	ft_putnbr_fd(INT_MAX, 1);
	ft_putendl_fd("", 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putendl_fd("", 1);
	return (0);
}
