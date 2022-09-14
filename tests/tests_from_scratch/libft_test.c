#include "libft.h"
#include "libft_test.h"
#include <string.h>

int main (int argc, char *argv[])
{
	if (argc == 1 || strcmp(argv[1], "ft_split"))
		ft_split_test();
	ft_strtrim_test();
	return (0);
}
