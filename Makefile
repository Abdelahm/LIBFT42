FLAG = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBJECT = $(SOURCE:.c=.o)

all: $(NAME)

.PHONY: all, clean, fclean, re

$(NAME): $(OBJECT)
	@ar rc $(NAME) $(OBJECT)
	@echo "$(NAME) is created Sucessfully"
	@ranlib $(NAME)
	@echo "$(NAME) is indexed Sucessfully"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJECT)
	@echo "OBJECT files is deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) file is deleted"

re: fclean all
