NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c help_parse.c nbrecurs.c parse_dict.c parse_input.c stuff.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
