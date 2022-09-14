#include <stdio.h>
#include "libft.h"

void	print_lst(t_list **lst);
void	free_lst(t_list	**lst);

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

	free_lst(&lst);
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

void	free_lst(t_list	**lst)
{
	t_list	*tmp;
	while(*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

		
		
