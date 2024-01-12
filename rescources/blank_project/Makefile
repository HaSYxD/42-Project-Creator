NAME	= 
SRC		= src/main.c
OBJS	= $(SRC:.c=.o)
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra
LIBFT		= -LLIB/libft -lft
LIBPRINTF	= -LLIB/ft_printf -lftprintf
LIBMLX		= -LLIB/mlx -lmlx -lXext -lX11 -lm
$(NAME): ${OBJS}
	cd LIB/libft;make
	cd LIB/ft_printf;make
	cd LIB/mlx;./configure
	${CC} ${OBJS} -o ${NAME}
all: ${NAME}
clean:
	cd LIB/libft;make clean
	cd LIB/ft_printf;make clean
	${RM} ${OBJS}
fclean: clean
	cd LIB/libft;make fclean
	cd LIB/ft_printf;make fclean
	cd LIB/mlx;./configure clean
	${RM} ${NAME}
re: fclean all
