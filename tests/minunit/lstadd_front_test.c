#include<string.h>
#include "minunit.h"
#include "libft.h"

static int foo = 0;
static int bar = 0;
//static double dbar = 0.1;
//static const char* foostring = "Thisstring";

void test_setup(void) {
	foo = 7;
	bar = 4;
}

void test_teardown(void) {
	/* Nothing */
}

/* --- --- SUBSTR --- --- */

MU_TEST(test_lstadd_front_lst_42)
{
	// ARRANGE
	t_list	**lst = NULL;
	t_list	*node = NULL;
	int		content = 24;
	int		content_new = 42;
	int		expected_return[2] = {42, 24};

	node = ft_lstnew(&content);
	if (node == NULL)
		return ;
	lst = &node;
	t_list *new_node;
	new_node = ft_lstnew(&content_new);
	// ACT
	ft_lstadd_front(lst, new_node);

	// ASSERT
	t_list *tmp = *lst;
	int i = 0;
	while(tmp != NULL)
	{
		mu_assert_int_eq(expected_return[i], *((int *) (tmp->content)));
		tmp = tmp->next;
		i++;
	}
	tmp = *lst;
	t_list *n = tmp->next;
	while(tmp->next != NULL)
	{
		free(tmp);
		tmp = n->next;
		n = tmp->next;
	}
	free(tmp);
}

/* --- --- Abaixo, exemplos default --- ---*/
/*
MU_TEST(test_check) {
	mu_check(foo == 7);
}

MU_TEST(test_assert) {
	mu_assert(foo == 7, "foo should be 7");
}

MU_TEST(test_assert_int_eq) {
	mu_assert_int_eq(4, bar);
}

MU_TEST(test_assert_double_eq) {
	mu_assert_double_eq(0.1, dbar);
}

MU_TEST(test_string_eq){
		mu_assert_string_eq("Thisstring", foostring);
}

MU_TEST(test_fail) {
	mu_fail("Fail now!");
}
*/

MU_TEST_SUITE(test_suite)
{
	MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

	MU_RUN_TEST(test_lstadd_front_lst_42);
}

int main(void) 
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; 
}
