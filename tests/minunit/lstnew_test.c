
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

MU_TEST(test_lstnew_42)
{
	// ARRANGE
	int		content = 42;
	t_list	expected_return;
	expected_return.content = &content;
	t_list	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_lstnew(&content);

	// ASSERT
	mu_assert_int_eq(((int *)expected_return.content)[0],((char*) actual_return->content)[0]);
	free(actual_return);
}

MU_TEST(test_lstnew_lorem)
{
	// ARRANGE
	char		content[] = "lorem";
	t_list	expected_return;
	expected_return.content = content;
	t_list	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_lstnew(content);

	// ASSERT
	mu_assert_string_eq(((char *)expected_return.content), ((char*) actual_return->content));
	free(actual_return);
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

	MU_RUN_TEST(test_lstnew_lorem);
	MU_RUN_TEST(test_lstnew_42);
}

int main(void) 
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; 
}
