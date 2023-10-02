CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS_DIR =	src/ \
			libft/

HEAD = includes/libftprintf.h \
			includes/libft.h

OBJS = $(SRCS_DIR:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re