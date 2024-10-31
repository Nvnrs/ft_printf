SRC = ./libft_custom/cft_dec_to_hex.c \
	./libft_custom/cft_length_nbr.c \
	./libft_custom/cft_putnbr_fd.c \
	./treatments/treats_char.c \
	./treatments/treats_integer.c \
	./format.c \
	./ft_printf.c \
	./ft_printf.c \

CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
EXEC = a.out

%.o: %.c
		gcc $(CFLAGS) -c $< -o $@

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)

test : $(OBJ)
		gcc $(OBJ) -o $(EXEC)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
