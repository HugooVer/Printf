NAME = libftprintf.a

CC = cc
CFLAGS += -Wall 
CFLAGS += -Wextra 
CFLAGS += -Werror

AR = ar rc
RM = rm -f

SRCS += ft_memchr.c
SRCS += ft_printc.c
SRCS += ft_printdi.c
SRCS += ft_printf.c
SRCS += ft_printp.c
SRCS += ft_prints.c
SRCS += ft_printu.c
SRCS += ft_printx.c
SRCS += ft_printX.c
SRCS += ft_strlen.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $^ -o $@

clean:
	${RM} ${OBJS} ${BONUS_OBJS} 

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
