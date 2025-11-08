FLAG = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = *.c
OBJECT = $(SOURCE:wildcard .c=.o)

all: $(NAME)

.PHONY: all, clean, fclean, re

$(NAME): $(OBJECT)
	@ar rc $(NAME) $(OBJECT)
	@echo "$(NAME) is created"
	@ranlib $(NAME)
	@echo "$(NAME) is ready"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJECT)
	@echo "OBJECT deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
