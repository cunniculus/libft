/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:33:48 by coder             #+#    #+#             */
/*   Updated: 2022/08/25 19:31:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("0"), ft_atoi("0"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("42"), ft_atoi("42"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("-42"), ft_atoi("-42"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("+43"), ft_atoi("+43"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi(" -44"), ft_atoi(" -44"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi(" 	-45"), ft_atoi(" 	-45"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("-2147483647"), ft_atoi("-2147483647"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("-04"), ft_atoi("-04"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("-00"), ft_atoi("-00"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("-1234bla5"), ft_atoi("-1234bla5"));
	printf("atoi -> %d\nft_atoi -> %d\n\n", atoi("abc42"), ft_atoi("abc42"));
	return (0);
}
