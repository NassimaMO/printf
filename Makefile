NAME			= libftprintf.a

CFLAGS			= -Wall -Wextra -Werror -c

CC				= gcc

SRCS			= ft_printf.c ft_putnbr_base.c ft_putnbr.c ft_putstr.c ft_strlen.c

OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
	ar crs $@ $(OBJS)

%.o:			%.c ft_printf.h
	$(CC) $(CFLAGS) $< -o $@

clean:	
	rm -rf $(OBJS)

fclean:			clean
	rm -f $(NAME)

re:				fclean all

.PHONY: fclean clean re all