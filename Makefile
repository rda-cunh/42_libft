	/* insert 42 header */

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o

all: $(OBJS)
	cc main.c $(OBJS)

%.o: %.c
	cc -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all
