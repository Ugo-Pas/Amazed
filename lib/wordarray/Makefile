##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy_wordarray.a

SRC	= ./my_str_to_word_array.c \
	./my_array_len.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -I../my -I../../include -I../utility -O2

CC = epiclang

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	cp word_array.h ../../include/
	cp $(LIBNAME) ../

clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(LIBNAME)
	rm -rf ../$(LIBNAME)
	rm -rf ../../include/word_array.h

re: fclean all
