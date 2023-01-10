CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

NAME2 = checker

SRC = ./tools/pusha.c\
	./tools/pushb.c\
	./tools/rotate_a.c\
	./tools/rotate_b.c\
	./tools/rotateab.c\
	./tools/reverse_rotate_stack_a.c\
	./tools/reverse_rotate_stack_b.c\
	./tools/reverse_rotateab.c\
	./tools/swapa.c\
	./tools/swapb.c\
	./tools/swapab.c\
	./lib_lst/ft_atoi.c\
	./lib_lst/ft_split.c\
	./lib_lst/ft_lstadd_back_bonus.c\
	./lib_lst/ft_lstadd_front_bonus.c\
	./lib_lst/ft_lstlast_bonus.c\
	./lib_lst/ft_lstnew_bonus.c\
	./lib_lst/ft_lstsize_bonus.c\
	./lib_lst/ft_strlen.c\
	./sort_UI/sort3.c\
	./sort_UI/sort5.c\
	./sort_UI/ultimate_sorter.c\
	./sort_UI/advanced_searcher.c \
	./sort_UI/func_to_save_norm.c \
	./sort_UI/func_to_save_norm2.c \
	./sort_UI/error_check.c \
	push_swap.c \

BONUS_SRC =	./getnextline/get_next_line_utils.c\
		./getnextline/get_next_line.c\
		./lib_lst/ft_atoi.c\
		./lib_lst/ft_split.c\
		./lib_lst/ft_lstadd_back_bonus.c\
		./lib_lst/ft_lstadd_front_bonus.c\
		./lib_lst/ft_lstlast_bonus.c\
		./lib_lst/ft_lstnew_bonus.c\
		./lib_lst/ft_lstsize_bonus.c\
		./lib_lst/ft_strlen.c\
		./tools_checker/checker_pusha.c\
		./tools_checker/checker_pushb.c\
		./tools_checker/checker_rotate_a.c\
		./tools_checker/checker_rotate_b.c\
		./tools_checker/checker_rotateab.c\
		./tools_checker/checker_reverse_rotate_stack_a.c\
		./tools_checker/checker_reverse_rotate_stack_b.c\
		./tools_checker/checker_reverse_rotateab.c\
		./tools_checker/checker_swapa.c\
		./tools_checker/checker_swapb.c\
		./tools_checker/checker_swapab.c\
		./sort_UI/error_check.c \
		./sort_UI/func_to_save_norm2.c \
		./checker.c\



OBJ = $(SRC:.c=.o)

BONUS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(BONUS)

fclean: clean
	rm -f $(NAME) $(NAME2)

bonus: $(NAME2)

$(NAME2): $(BONUS)
	$(CC) $(FLAGS) $(BONUS) -o $(NAME2)

re: fclean all

czar: all clean

czarb: bonus clean

.PHONY: all clean fclean re