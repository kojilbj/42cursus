CC = cc
CFLAGS = -Wextra -Wall -Werror -g -fsanitize=address

SRCS = ./server.c ./client.c
OBJS = $(SRCS:.c=.o)
NAME = server client

all: server client

server: $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) server.o -o server -L./libft -lft

client: $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) client.c -o client -L./libft -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C ./libft clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C ./libft fclean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
