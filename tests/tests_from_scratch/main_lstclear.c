/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guolivei <guolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:15:32 by guolivei          #+#    #+#             */
/*   Updated: 2022/09/08 21:15:29 by guolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print_lst(t_list **lst);
void	free_content(void *content);

int	main (void)

{
	t_list	*lst;
	t_list	*node;

	lst = NULL;
	lst = ft_lstnew("Guilherme");
	if (lst == NULL)
		return (0);
	node = ft_lstnew("Leonardo");
	if (node == NULL)
		return (0);
	ft_lstadd_front(&lst, node);
	node = ft_lstnew("Fabricio");
	if (node == NULL)
		return (0);
	ft_lstadd_front(&lst, node);
	print_lst(&lst);

	printf("\nContent from last node: %s !\n", (char *) ft_lstlast(lst)->content);

	printf("\n%d nodes!\n", ft_lstsize(lst));

	ft_lstclear(&lst, free_content);
	
	return (0);
}

void	print_lst(t_list **lst)
{
	t_list	*tmp;
	tmp = *lst;
	while (tmp)
	{
		printf("%s\n",(char *)  tmp->content);
		tmp = tmp->next;
	}
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}

void	free_content(void *content)
{
	free(content);
}
