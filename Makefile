FLAGS	= -W{all,extra}
LIBS	= ##-lncurses
SRCS	= putc.c operators.c main.c

all:
	gcc $(SRCS) $(FLAGS)
