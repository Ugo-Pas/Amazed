##
## EPITECH PROJECT, 2025
## test
## File description:
## test
##

LIBNAME 	= libmy_printf.a

SRC	= ./ressource/my_printf.c \
	./flags/flag_c.c \
	./flags/flag_s.c \
	./flags/flag_i.c \
	./flags/flag_d.c \
	./flags/flag_per.c \
	./flags/flag_o.c \
	./flags/flag_x.c \
	./flags/flag_f.c \
	./flags/flag_xx.c \
	./flags/flag_u.c \
	./flags/flag_p.c \
	./flags/flag_ff.c \
	./flags/flag_e.c \
	./flags/flag_n.c \
	./flags/flag_ee.c \
	./ressource/my_put_nbr_o.c \
	./ressource/my_isdigit.c \
	./ressource/my_power.c \
	./ressource/my_strtoint.c \
	./ressource/my_lenbase.c \
	./ressource/my_lenlong.c \
	./ressource/my_lenpointer.c \
	./ressource/my_reset.c \
	./ressource/my_change_flag.c \
	./ressource/my_countnbr.c \
	./ressource/my_whatcount.c \
	./ressource/my_put_nbr_x.c \
	./ressource/my_put_nbr_xx.c \
	./ressource/my_put_float.c \
	./ressource/my_put_nbr_u.c \
	./ressource/my_put_nbr_p.c \
	./ressource/add_zero.c \
	./ressource/dis_expo.c \
	./ressource/eedis_expoee.c \
	./ressource/calcul.c \
	./ressource/put_expo.c \
	./ressource/eexe_put.c \
	./ressource/my_ispadding.c

OBJ	= $(SRC:.c=.o)

CFLAGS = -I../my -I../../include -I../utility -O2

CC = epiclang

all:	$(LIBNAME)

$(LIBNAME):    $(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	cp $(LIBNAME) ../
	cp my_printf.h ../../include/

clean:
	rm -rf ./flags/*.o
	rm -rf ./ressource/*.o
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(LIBNAME)
	rm -rf ../$(LIBNAME)
	rm -rf ../../include/my_printf.h

re: fclean all
