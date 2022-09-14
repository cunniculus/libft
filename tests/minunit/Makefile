LIBNAME = libft.a

NAME = test

SRCDIR = /home/coder/Cursus/libft/src

FT_HEADER = $(SRCDIR)

TEST_HEADER = . 

TEST_SRC = minunit.c

SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_calloc.c \
	  ft_atoi.c \
	  ft_substr.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_lstnew.c \
	  ft_lstadd_front.c

SRCS = $(addprefix $(SRCDIR)/, $(SRC))

OBJ = $(patsubst %.c, %.o, $(SRC))

CFLAGS = -Wall -Wextra -Werror

COMPILER = cc

VALGRIND = valgrind --leak-check=full --track-origins=yes

all: $(LIBNAME) $(NAME)
	@echo "Current test"
	@$(COMPILER) $(CFLAGS) current_test.c -I $(TEST_HEADER) -I $(FT_HEADER) -L. -lft -lrt -lm -lbsd -o current_test && ./current_test
	@echo
	@echo "minunit test"
	@echo
	@./test
	@echo

$(LIBNAME): $(OBJ) 
	@ar rc $(LIBNAME) $(OBJ)

$(NAME): $(OBJ) $(TEST_SRC)
	@$(COMPILER) $(CFLAGS) $(TEST_SRC) -I $(TEST_HEADER) -I $(FT_HEADER) -L. -lft -lrt -lm -o $(NAME)

$(OBJ): $(SRCS) 
	@$(COMPILER) $(CFLAGS) -I $(TEST_HEADER) -I $(FT_HEADER) -c $(SRCS)

lstadd_front: $(LIBNAME) 
	@echo -n " --- Moulinette: "
	@norminette	$(SRCDIR)/ft_lstadd_front.c
	@$(COMPILER) $(CFLAGS) lstadd_front_test.c -I $(FT_HEADER) -L. -lft -o lstadd_front_program &&  ./lstadd_front_program

lstnew: $(LIBNAME) 
	@echo -n " --- Moulinette: "
	@norminette	$(SRCDIR)/ft_lstnew.c
	@echo
	@$(COMPILER) $(CFLAGS) lstnew_test.c -I $(FT_HEADER) -L. -lft -o lstnew_program && ./lstnew_program | cat -e

split: $(LIBNAME) 
	@echo -n " --- Moulinette: "
	@norminette	$(SRCDIR)/ft_split.c
	@echo
	@$(COMPILER) $(CFLAGS) split_test.c -I $(FT_HEADER) -L. -lft -o split_program && ./split_program | cat -e

calloc: $(LIBNAME) 
	$(COMPILER) $(CFLAGS) calloc_test.c -I $(FT_HEADER) -L. -lft -o calloc_program && valgrind --leak-check=full ./calloc_program | cat -e

substr: $(LIBNAME) 
	$(COMPILER) $(CFLAGS) substr_test.c -I $(FT_HEADER) -L. -lft -o substr_program && valgrind --leak-check=full ./substr_program | cat -e
	
strmapi: $(LIBNAME) 
	@echo -n " --- Moulinette: "
	@norminette	$(SRCDIR)/ft_strmapi.c
	@$(COMPILER) $(CFLAGS) strmapi_test.c -I $(FT_HEADER) -L. -lft -o strmapi_program &&  ./strmapi_program

itoa: $(LIBNAME) 
	@echo -n " --- Moulinette: "
	@norminette	$(SRCDIR)/ft_itoa.c
	@$(COMPILER) $(CFLAGS) itoa_test.c -I $(FT_HEADER) -L. -lft -o itoa_program &&  ./itoa_program

strtrim: $(LIBNAME) 
	@echo -n " --- Moulinette: "
	@norminette	$(SRCDIR)/ft_strtrim.c
	@$(COMPILER) $(CFLAGS) strtrim_test.c -I $(FT_HEADER) -L. -lft -o strtrim_program &&  ./strtrim_program
	
strjoin: $(LIBNAME) 
	@$(COMPILER) $(CFLAGS) strjoin_test.c -I $(FT_HEADER) -L. -lft -o strjoin_program &&  ./strjoin_program

ft_memset: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_memset.c
	@echo
	$(COMPILER) $(CFLAGS) ft_memset_test.c -L. -lft -o ft_memset_program && ./ft_memset_program | cat -e

ft_memcpy: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_memcpy.c
	@echo
	$(COMPILER) $(CFLAGS) ft_memcpy_test.c -L. -lft -o ft_memcpy_program && ./ft_memcpy_program | cat -e

ft_strlen: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strlen.c
	@$(COMPILER) $(CFLAGS) ft_strlen_test.c -L. -lft -o ft_strlen_program && ./ft_strlen_program

ft_atoi: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_atoi.c
	@$(COMPILER) $(CFLAGS) ft_atoi_test.c -L. -lft -o ft_atoi_program && ./ft_atoi_program

ft_isdigit: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_isdigit.c
	@$(COMPILER) $(CFLAGS) ft_isdigit_test.c -L. -lft -o ft_isdigit_program && ./ft_isdigit_program
ft_isalpha: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_isalpha.c
	@$(COMPILER) $(CFLAGS) ft_isalpha_test.c -L. -lft -o ft_isalpha_program && ./ft_isalpha_program
ft_isalnum: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_isalnum.c
	@$(COMPILER) $(CFLAGS) ft_isalnum_test.c -L. -lft -o ft_isalnum_program && ./ft_isalnum_program
ft_isascii: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_isascii.c
	@$(COMPILER) $(CFLAGS) ft_isascii_test.c -L. -lft -o ft_isascii_program && ./ft_isascii_program
ft_isprint: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_isprint.c
	@$(COMPILER) $(CFLAGS) ft_isprint_test.c -L. -lft -o ft_isprint_program && ./ft_isprint_program
ft_bzero: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_bzero.c
	@echo
	$(COMPILER) $(CFLAGS) ft_bzero_test.c -L. -lft -o ft_bzero_program && ./ft_bzero_program | cat -e
ft_memmove: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_memmove.c
	@echo
	$(COMPILER) $(CFLAGS) ft_memmove_test.c -L. -lft -o ft_memmove_program && ./ft_memmove_program | cat -e
ft_toupper: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_toupper.c
	@echo
	$(COMPILER) $(CFLAGS) ft_toupper_test.c -L. -lft -o ft_toupper_program && ./ft_toupper_program | cat -e
ft_tolower: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_tolower.c
	@echo
	$(COMPILER) $(CFLAGS) ft_tolower_test.c -L. -lft -o ft_tolower_program && ./ft_tolower_program | cat -e
ft_strchr: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strchr.c
	@echo
	$(COMPILER) $(CFLAGS) ft_strchr_test.c -L. -lft -o ft_strchr_program && ./ft_strchr_program | cat -e
ft_strrchr: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strrchr.c
	@echo
	$(COMPILER) $(CFLAGS) ft_strrchr_test.c -L. -lft -o ft_strrchr_program && ./ft_strrchr_program | cat -e
ft_strncmp: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strncmp.c
	@echo
	$(COMPILER) $(CFLAGS) ft_strncmp_test.c -L. -lft -o ft_strncmp_program && ./ft_strncmp_program | cat -e
ft_memchr: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_memchr.c
	@echo
	$(COMPILER) $(CFLAGS) ft_memchr_test.c -L. -lft -o ft_memchr_program && ./ft_memchr_program | cat -e
ft_memrchr: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_memrchr.c
	@echo
	$(COMPILER) $(CFLAGS) ft_memrchr_test.c -L. -lft -o ft_memrchr_program && ./ft_memrchr_program | cat -e
ft_memcmp: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_memcmp.c
	@echo
	$(COMPILER) $(CFLAGS) ft_memcmp_test.c -L. -lft -o ft_memcmp_program && ./ft_memcmp_program | cat -e
ft_strnstr: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strnstr.c
	@echo
	$(COMPILER) $(CFLAGS) ft_strnstr_test.c -L. -lft -o ft_strnstr_program && ./ft_strnstr_program | cat -e
ft_strlcpy: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strlcpy.c
	@echo
	$(COMPILER) $(CFLAGS) ft_strlcpy_test.c -L. -lft -o ft_strlcpy_program && ./ft_strlcpy_program | cat -e
ft_strlcat: $(LIBNAME)
	@echo -n " --- Moulinette: "
	@norminette	../ft_strlcat.c
	@echo
	$(COMPILER) $(CFLAGS) ft_strlcat_test.c -L. -lft -o ft_strlcat_program && ./ft_strlcat_program | cat -e

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBNAME) 
	rm -f $(NAME)
	rm -f *program
	rm -f current_test

re: clean fclean all
