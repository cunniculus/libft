#include <stdio.h>
#include "libft.h"

void	print_lst(t_list **lst);
void	free_lst(t_list	**lst);

int	main (void)

{
	t_list	**lst;
	t_list	*node;
	t_list	*new_node;
	t_list	*nn_node;

	lst = NULL;
	node = NULL;
	node = ft_lstnew("Guilherme");
	if (node == NULL)
		return (0);
	lst = &node;

	new_node = ft_lstnew("Leonardo");
	if (new_node == NULL)
		return (0);
	ft_lstadd_front(lst, new_node);

	nn_node = ft_lstnew("Fabricio");
	if (nn_node == NULL)
		return (0);
	ft_lstadd_front(lst, nn_node);
	print_lst(lst);

	printf("\nContent from last node: %s\n", (char *) ft_lstlast(*lst)->content);

	printf("\n%d nodes!\n", ft_lstsize(*lst));

	free_lst(lst);
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

		
		
