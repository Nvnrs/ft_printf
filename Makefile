SRC = ./libft_custom/cft_dec_to_hex.c \
	./libft_custom/cft_length_nbr.c \
	./libft_custom/cft_putnbr_UL_fd.c \
	./treatments/treats_char.c \
	./treatments/treats_integer.c \
	./format.c \
	./ft_printf.c \

CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
EXEC = a.out
OBJ = $(SRC:.c=.o)
LIBFT = ./libft/libft.a
		
all :$(LIBFT) $(NAME)

$(LIBFT) :
	$(MAKE) -C ./libft/

libft_clean :
	$(MAKE) clean -C ./libft/

libft_fclean :
	$(MAKE) fclean -C ./libft/

%.o: %.c
		gcc $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)

test : $(OBJ) $(LIBFT)
		gcc $(OBJ) main.c $(LIBFT) -o $(EXEC)

clean : libft_clean
		rm -rf $(OBJ)

fclean : clean libft_fclean
		rm -rf $(NAME)

re : fclean all

.PHONY : clean