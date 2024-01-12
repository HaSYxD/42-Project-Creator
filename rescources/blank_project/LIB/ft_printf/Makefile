NAME   = libftprintf.a
SRC    = ft_printf.c\
	 ft_putchar.c\
	 ft_putnbr.c\
	 ft_putstr.c\
	 ft_putunsnbr.c\
	 ft_puthexnbr.c\
	 ft_putptr.c

OBJS   = ${SRC:.c=.o}
CC     = cc
RM     = rm -f
CFLAGS = -Wall -Werror -Wextra -I./
.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}
all: ${NAME}
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
