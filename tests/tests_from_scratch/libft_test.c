#include "libft.h"
#include "libft_test.h"
#include <string.h>
#include <errno.h>

int main (int argc, char *argv[])
{
	if (argc == 1 || !strcmp(argv[1], "ft_split"))
		if (ft_split_test() == FAIL)
			exit(EXIT_FAILURE);
	if (argc == 1 || !strcmp(argv[1], "ft_strtrim"))
		if (ft_strtrim_test() == FAIL)
			exit(EXIT_FAILURE);
	return (0);
}
