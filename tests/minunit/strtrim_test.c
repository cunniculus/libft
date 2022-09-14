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

MU_TEST(test_strtrim_guilhermeXXXYYZ_ZYX)
{
	// ARRANGE
	const char	s1[] = "guilherme";
	const char	set[] = "ZYX";
	char	expected_return[] = "guilherme";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);
	if (actual_return == NULL)
		return ;

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_XXXXXX_X)
{
	// ARRANGE
	const char	s1[] = "XXXXXX";
	const char	set[] = "X";
	char	expected_return[] = "";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);
	if (actual_return == NULL)
		return ;

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_ZZZ_gZi)
{
	// ARRANGE
	const char	s1[] = "ZZZ";
	const char	set[] = "Z";
	char	expected_return[] = "";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_abc_space)
{
	// ARRANGE
	const char	s1[] = "abc";
	const char	set[] = " ";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_abcZ_Z)
{
	// ARRANGE
	const char	s1[] = "abcZ";
	const char	set[] = "Z";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_YzYzzYYYabc_Yz)
{
	// ARRANGE
	const char	s1[] = "YzYzzYYYabc";
	const char	set[] = "Yz";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_Yzzabc_zY)
{
	// ARRANGE
	const char	s1[] = "Yzzabc";
	const char	set[] = "zY";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_zzYabc_zY)
{
	// ARRANGE
	const char	s1[] = "zzYabc";
	const char	set[] = "zY";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_zzabc_z)
{
	// ARRANGE
	const char	s1[] = "zzabc";
	const char	set[] = "z";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
	free (actual_return);
}

MU_TEST(test_strtrim_zabc_z)
{
	// ARRANGE
	const char	s1[] = "zabc";
	const char	set[] = "z";
	char	expected_return[] = "abc";
	char	*actual_return;

	actual_return = NULL;
	// ACT
	actual_return = ft_strtrim(s1, set);

	// ASSERT
	mu_assert_string_eq(expected_return, actual_return);
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

	MU_RUN_TEST(test_strtrim_guilhermeXXXYYZ_ZYX);
	MU_RUN_TEST(test_strtrim_XXXXXX_X);
	MU_RUN_TEST(test_strtrim_ZZZ_gZi);
	MU_RUN_TEST(test_strtrim_abc_space);
	MU_RUN_TEST(test_strtrim_abcZ_Z);
	MU_RUN_TEST(test_strtrim_YzYzzYYYabc_Yz);
	MU_RUN_TEST(test_strtrim_Yzzabc_zY);
	MU_RUN_TEST(test_strtrim_zzYabc_zY);
	MU_RUN_TEST(test_strtrim_zzabc_z);
	MU_RUN_TEST(test_strtrim_zabc_z);
}

int main(void) 
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; 
}
