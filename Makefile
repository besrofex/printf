NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra 
SRC = ft_printf.c ft_print_format.c ft_print_char.c ft_print_digit.c ft_print_hex.c ft_print_ptr.c ft_print_str.c ft_print_unsigned.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean 