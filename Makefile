# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdelahm <abdelahm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/10 15:11:36 by abdelahm          #+#    #+#              #
#    Updated: 2025/11/16 13:57:32 by abdelahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror
NAME = libft.a
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isprint.c ft_memset.c ft_bzero.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
OBJECT = $(SOURCE:.c=.o)

all: $(NAME)

.PHONY: all, clean, fclean, re

$(NAME): $(OBJECT)
	@ar rc $(NAME) $(OBJECT)
	@echo "$(NAME) is created Sucessfully"
	@ranlib $(NAME)
	@echo "$(NAME) is indexed Sucessfully"

%.o: %.c
	@cc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJECT)
	@echo "OBJECT files is deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) file is deleted"

re: fclean all
