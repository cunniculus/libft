NAME_TEST = libft_test

SRC_MAIN = libft_test.c

SRCS_TEST = ft_split_test.c \
			ft_strtrim_test.c

OBJ_TEST = $(patsubst %.c, %.o, $(SRCS_TEST))

INCLUDEDIR = ../../src

LIBDIR = ../../src

LIBTEST = libft_test.a

HEADER_TEST = libft_test.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME_TEST)
	@./$(NAME_TEST)

$(NAME_TEST): $(SRC_MAIN) $(LIBTEST) $(LIBDIR)/libft.a
	@gcc  $(CFLAGS) -o $(NAME_TEST) -I$(INCLUDEDIR) -I. $(SRC_MAIN) -L. -lft_test -L$(LIBDIR) -lft

$(LIBDIR)/libft.a:  
	@make -C $(LIBDIR) bonus

$(LIBTEST): $(OBJ_TEST)
	ar crs $(LIBTEST) $(OBJ_TEST) 

$(OBJ_TEST): $(SRCS_TEST) $(HEADER_TEST)
	cc $(CFLAGS) -c $(SRCS_TEST) -I$(INCLUDEDIR)

leakfull: $(NAME_TEST)
	-@valgrind --error-exitcode=42 --leak-check=full ./$(NAME_TEST)

ft_split:  $(NAME_TEST)
	@./$(NAME_TEST) ft_split

ft_strtrim:	$(NAME_TEST)
	@./$(NAME_TEST) ft_strtrim

clean:
	@make -C $(LIBDIR) clean
	@rm -f $(OBJ_TEST)

fclean: clean
	@make -C $(LIBDIR) fclean 
	@rm -f $(NAME_TEST)

re: fclean all
