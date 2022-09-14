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

MU_TEST(test_strjoin_abc_def)
{
	// ARRANGE
	const char	s1[] = "abc";
	const char	s2[] = "def";
	char	expected_return[] = "abcdef";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(actual_return, expected_return);
	free (actual_return);
}

MU_TEST(test_strjoin_nul_def)
{
	// ARRANGE
	const char	s1[] = "";
	const char	s2[] = "def";
	char	expected_return[] = "def";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(actual_return, expected_return);
	free (actual_return);
}

MU_TEST(test_strjoin_abc_nul)
{
	// ARRANGE
	const char	s1[] = "abc";
	const char	s2[] = "";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(actual_return, expected_return);
	free (actual_return);
}

MU_TEST(test_strjoin_nul_nul)
{
	// ARRANGE
	const char	s1[] = "";
	const char	s2[] = "";
	char	expected_return[] = "";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strjoin(s1, s2);

	// ASSERT
	mu_assert_string_eq(actual_return, expected_return);
	free (actual_return);
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

	MU_RUN_TEST(test_strjoin_nul_def);
	MU_RUN_TEST(test_strjoin_abc_def);
	MU_RUN_TEST(test_strjoin_abc_nul);
	MU_RUN_TEST(test_strjoin_nul_nul);

}

int main(void) 
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; 
}
