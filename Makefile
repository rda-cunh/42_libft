# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 17:53:40 by rda-cunh          #+#    #+#              #
#    Updated: 2023/11/12 01:53:06 by rda-cunh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = $(wildcard ft_*.c)
OBJS = $(CFILES:.c=.o)
CC = cc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc
NAME = libft.a

all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $(NAME) $^

bonus: $(OBJS)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
