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

/* --- --- SPLIT --- --- */

MU_TEST(test_split_gui0coelho_0)
{
	// ARRANGE
	const char	s[] = "gui0coelho";
	char	c = '0';
	const char *expected_return[] = {
    	"gui",
    	"coelho",
	};
	char	**actual_return;

	// ACT
	actual_return = ft_split(s, c);

	// ASSERT
	size_t i = 0;
	while (actual_return[i] != NULL)
	{
		mu_assert_string_eq(expected_return[i], actual_return[i]);
		i++;
	}
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

	MU_RUN_TEST(test_split_gui0coelho_0);
}

int main(void) 
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; 
}
