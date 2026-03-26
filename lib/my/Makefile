##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy.a

SRC	= ./my_putchar.c \
	./my_putstr.c \
	./my_is_digit.c \
	./my_str_to_int.c \
	./my_compute_power_it.c \
	./my_intcmp.c \
	./my_strlen.c \
	./my_swap.c \
	./my_getnbr.c \
	./my_put_nbr.c \
	./my_sort_int_array.c \
	./my_compute_power_rec.c \
	./my_compute_square_root.c \
	./my_is_prime.c \
	./my_find_prime_sup.c \
	./my_strcpy.c \
	./my_strncpy.c \
	./my_revstr.c \
	./my_strstr.c \
	./my_strcmp.c \
	./my_strncmp.c \
	./my_strupcase.c \
	./my_is_alpha.c \
	./my_strcapitalize.c \
	./my_str_isalpha.c \
	./my_is_lower.c \
	./my_str_islower.c \
	./my_is_upper.c \
	./my_str_isupper.c \
	./my_str_isnum.c \
	./my_str_isprintable.c \
	./my_strcat.c \
	./my_strncat.c \
	./my_strdup.c \
	./my_strndup.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -I../my_utility -I../../include -O2
CC = epiclang

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	cp $(LIBNAME) ../
	cp my.h ../../include/

clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(LIBNAME)
	rm -rf ../$(LIBNAME)
	rm -rf ../../include/my.h

re: fclean all
