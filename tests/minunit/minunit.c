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

MU_TEST(test_substr_furacao_4_3)
{
	// ARRANGE
	const char	origin[] = "furacao";
	size_t			len = 3;
	size_t			start = 4;
	char	expected_return[] = "cao";
	char	*actual_return;

	// ACT
	actual_return = ft_substr(origin, start, len);
	// ASSERT
	mu_assert_string_eq(actual_return, expected_return);
}
/* --- --- CALLOC --- --- */

MU_TEST(test_calloc_1_1)
{
	// ARRANGE
	unsigned char	origin[] = "\0";
	size_t			nmemb = 1;
	size_t			size = 1;
	unsigned char	*actual_return;

	// ACT
	actual_return = ft_calloc(nmemb, size);
	// ASSERT
	mu_assert(ft_memcmp(actual_return, origin, nmemb * size) == 0, "Should set one byte to 0");
}

MU_TEST(test_calloc_200000_20000)
{
	// ARRANGE
	unsigned char	*expected = NULL;
	size_t			nmemb = 200000;
	size_t			size = 20000;
	unsigned char	*actual_return;

	// ACT
	actual_return = ft_calloc(nmemb, size);
	// ASSERT
	mu_assert(actual_return == expected, "nmemb * size > INT_MAX --> calloc return NULL");
}

/* --- --- STRLCAT --- --- */
MU_TEST(test_strlcat_nul_b_0)
{
	// ARRANGE
	char	src[] = "b";
	char	dst[1]; 
	size_t	size = 0;
	size_t	expected_return = 1;
	char	expected_dst[] = "";
	size_t	actual_return;

	ft_memset(dst, '\0', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(dst, expected_dst);
}

MU_TEST(test_strlcat_nul_bcd_0)
{
	// ARRANGE
	char	src[] = "bcd";
	char	dst[1]; 
	size_t	size = 0;
	size_t	expected_return = 3;
	char	expected_dst[] = "";
	size_t	actual_return;

	ft_memset(dst, '\0', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_B000_bcd_0)
{
	// ARRANGE
	char	src[] = "bcd";
	char	dst[4]; 
	size_t	size = 0;
	size_t	expected_return = 3;
	char	expected_dst[] = "B";
	size_t	actual_return;

	ft_memset(dst, 0, 4);
	dst[0] = 'B';
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_B000_bcd_1)
{
	// ARRANGE
	char	src[] = "bcd";
	char	dst[4]; 
	size_t	size = 1;
	size_t	expected_return = 4;
	char	expected_dst[] = "B";
	size_t	actual_return;

	ft_memset(dst, 0, 4);
	dst[0] = 'B';
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_nul_b_1)
{
	// ARRANGE
	char	src[] = "b";
	char	dst[1]; 
	size_t	size = 1;
	size_t	expected_return = 1;
	char	expected_dst[] = "";
	size_t	actual_return;

	ft_memset(dst, '\0', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_nul_b_5)
{
	// ARRANGE
	char	src[] = "b";
	char	dst[5]; 
	size_t	size = 5;
	size_t	expected_return = 1;
	char	expected_dst[] = "b";
	size_t	actual_return;

	ft_memset(dst, '\0', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_a_b_2)
{
	// ARRANGE
	char	src[] = "b";
	char	dst[2]; 
	size_t	size = 2;
	size_t	expected_return = 2;
	char	expected_dst[] = "a";
	size_t	actual_return;

	ft_memset(dst, '\0', 2);
	ft_memset(dst, 'a', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_a_b_3)
{
	// ARRANGE
	char src[] = "b";
	char dst[3]; 
	size_t	size = 3;
	size_t expected_return = 2;
	char expected_dst[] = "ab";
	size_t actual_return;

	ft_memset(dst, '\0', 2);
	ft_memset(dst, 'a', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return );
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_a_bcd_3)
{
	// ARRANGE
	char src[] = "bcd";
	char dst[3]; 
	size_t	size = 3;
	size_t expected_return = 4;
	char expected_dst[] = "ab";
	size_t actual_return;

	memset(dst, '\0', 2);
	memset(dst, 'a', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_abc_def_4)
{
	// ARRANGE
	char src[] = "def";
	char dst[4]; 
	size_t	size = 4;
	size_t expected_return = 6;
	char expected_dst[] = "abc";
	size_t actual_return;

	memset(dst, '\0', 4);
	memset(dst, 'c', 3);
	memset(dst, 'b', 2);
	memset(dst, 'a', 1);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST(test_strlcat_r15x_loremipsum_5)
{
	// ARRANGE
	char src[] = "lorem ipsum dolor sit amet";
	char dst[16]; 
	size_t	size = 5;
	size_t expected_return = 31;
	char expected_dst[] = "rrrrrrrrrrrrrrr";
	size_t actual_return;

	memset(dst, 0, 16);
	memset(dst, 'r', 15);
	// ACT
	actual_return = ft_strlcat(dst, src, size);
	// ASSERT
	mu_assert_int_eq(expected_return, actual_return);
	mu_assert_string_eq(expected_dst, dst);
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


MU_TEST_SUITE(test_suite) {
	MU_SUITE_CONFIGURE(&test_setup, &test_teardown);

	MU_RUN_TEST(test_substr_furacao_4_3);

	MU_RUN_TEST(test_calloc_200000_20000);
	MU_RUN_TEST(test_calloc_1_1);

	MU_RUN_TEST(test_strlcat_r15x_loremipsum_5);
	MU_RUN_TEST(test_strlcat_B000_bcd_1);
	MU_RUN_TEST(test_strlcat_B000_bcd_0);
	MU_RUN_TEST(test_strlcat_nul_b_0);
	MU_RUN_TEST(test_strlcat_nul_bcd_0);
	MU_RUN_TEST(test_strlcat_nul_b_1);
	MU_RUN_TEST(test_strlcat_nul_b_5);
	MU_RUN_TEST(test_strlcat_a_b_2);
	MU_RUN_TEST(test_strlcat_a_b_3);
	MU_RUN_TEST(test_strlcat_a_bcd_3);
	MU_RUN_TEST(test_strlcat_abc_def_4);

}

int main(void) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE; }
