NAME = c-polymorphism

SRCS = $(shell find src -name '.ccls-cache' -type d -prune -o -type f -name '*.c' -print)
HEADERS = $(shell find inc -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)

CC = clang
CFLAGS = -Wall -Wextra -Werror -Iinc

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o "$@"

clean:
	$(RM) $(NAME)