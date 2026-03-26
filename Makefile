##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

NAME 	= amazed

NAMEtest = unit_tests

SRC	= ./amazed.c \
	./src/get_content.c\
	./src/parsing.c\
	./src/my_free_struct.c\
	./src/set_in_struct.c \
	./src/bfs.c \
	./src/print_road.c \
	./src/create_matrice.c \
	./src/my_print_way_robot.c \
	./src/print_struct.c

CC = epiclang

OBJ	= $(SRC:.c=.o)

CFLAGS = -g3 -Wall -Wextra -Werror  -Wmissing-prototypes -Wstrict-prototypes

CFLAGS_DEBUG   = -g3 -Wall -Wextra -Wmissing-prototypes -Wstrict-prototypes
CFLAGS_RELEASE = -DNDEBUG -Wextra  -Wmissing-prototypes -Wstrict-prototypes

all: CFLAGS = $(CFLAGS_RELEASE)
all: utility my printf llist wordarray $(NAME)

debug: CFLAGS = $(CFLAGS_DEBUG)
debug: utility my printf llist wordarray $(NAME)

printf:
	make -C ./lib/my_printf/

wordarray:
	make -C ./lib/wordarray/

llist:
	make -C ./lib/llist/

utility:
	make -C ./lib/utility/

my:
	make -C ./lib/my/

$(NAME):    $(OBJ)
	epiclang -o $(NAME) $(OBJ) -L./lib/ -lmy_wordarray -lmy_printf -lmy_llist -lmy_utility -lmy

valgrind: all
	$(RM) *.log
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind.log ./$(NAME) < labyrinth

clean:
	make clean -C ./lib/my_printf/
	make clean -C ./lib/llist/
	make clean -C ./lib/utility/
	make clean -C ./lib/my/
	make clean -C ./lib/wordarray/
	rm -rf $(OBJ)
	rm -rf *.gcno
	rm -rf *.gcda

fclean:	clean
	make fclean -C ./lib/my_printf
	make fclean -C ./lib/llist
	make fclean -C ./lib/utility
	make fclean -C ./lib/my/
	make fclean -C ./lib/wordarray/
	rm -rf $(NAME)
	rm -rf $(NAMEtest)

re: fclean all

unit_tests: utility my printf llist
	clang -o $(NAMEtest) $(SRC2) tests/*.c --coverage -lcriterion -lgcov -lmy_utility -lmy -lmy_printf -lmy_llist -L./lib/

tests_run: unit_tests
	./$(NAMEtest)
	gcovr --gcov-executable "llvm-cov-20 gcov" --exclude tests/

cover: tests_run
	gcovr --gcov-executable "llvm-cov-20 gcov" --exclude tests/ --branches
