##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy_utility.a

SRC	= ./my_put_err.c \
	./my_malloc.c \
	./my_free.c \
	./my_open.c \
	./my_read.c \
	./my_close.c \
	./my_realloc.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -O2

CC = epiclang

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	cp $(LIBNAME) ../
	cp utility.h ../../include/

clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(LIBNAME)
	rm -rf ../$(LIBNAME)
	rm -rf ../../include/utility.h

re: fclean all
