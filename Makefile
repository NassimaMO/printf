NAME			= libftprintf.a

LIBFT			=	libft/libft.a

CFLAGS			= -Wall -Wextra -Werror -c

CC				= gcc

SRCS			= ft_printf.c ft_putnbr_base.c

OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		${LIBFT} $(OBJS)
	ar crs $@ $(OBJS)

${LIBFT}:
	make -C libft

libftclean:
	make clean -C libft

libftfclean:
	make fclean -C libft

%.o:			%.c ft_printf.h
	$(CC) $(CFLAGS) $< -o $@

clean:	libftclean
	rm -rf $(OBJS)

fclean:			clean libftfclean
	rm -f $(NAME)

re:				fclean all

.PHONY: fclean clean re all