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

MU_TEST(test_itoa_intmin)
{
	// ARRANGE
	int		n = INT_MIN;
	char	expected_return[] = "-2147483648";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_intmax)
{
	// ARRANGE
	int		n = INT_MAX;
	char	expected_return[] = "2147483647";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_neg10)
{
	// ARRANGE
	int		n = -10;
	char	expected_return[] = "-10";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_100)
{
	// ARRANGE
	int		n = 10;
	char	expected_return[] = "10";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_42)
{
	// ARRANGE
	int		n = 42;
	char	expected_return[] = "42";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_10)
{
	// ARRANGE
	int		n = 10;
	char	expected_return[] = "10";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_1)
{
	// ARRANGE
	int		n = 1;
	char	expected_return[] = "1";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_0)
{
	// ARRANGE
	int		n = 0;
	char	expected_return[] = "0";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_neg1)
{
	// ARRANGE
	int		n = -1;
	char	expected_return[] = "-1";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free(actual_return);
}

MU_TEST(test_itoa_neg0)
{
	// ARRANGE
	int		n = -0;
	char	expected_return[] = "0";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_itoa(n);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
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

	MU_RUN_TEST(test_itoa_1);
	MU_RUN_TEST(test_itoa_0);
	MU_RUN_TEST(test_itoa_neg1);
	MU_RUN_TEST(test_itoa_neg0);
	MU_RUN_TEST(test_itoa_10);
	MU_RUN_TEST(test_itoa_42);
	MU_RUN_TEST(test_itoa_neg10);
	MU_RUN_TEST(test_itoa_100);
	MU_RUN_TEST(test_itoa_intmax);
	MU_RUN_TEST(test_itoa_intmin);
}

int main(void) 
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; 
}
