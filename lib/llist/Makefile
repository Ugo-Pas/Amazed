##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy_llist.a

SRC	= create_llist.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -I../my_utility -I../../include -O2

CC = epiclang

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	cp $(LIBNAME) ../
	cp llist.h ../../include/

clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(LIBNAME)
	rm -rf ../$(LIBNAME)
	rm -rf ../../include/llist.h

re: fclean all
