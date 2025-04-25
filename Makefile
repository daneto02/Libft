# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daneto <daneto@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 00:02:55 by daneto            #+#    #+#              #
#    Updated: 2025/04/25 19:05:09 by daneto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
COMPRESS = ar rcs
COMPILE = $(CC) $(CFLAGS) -c

SRCS = ft_bzero.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
       ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
       ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_split.c ft_strmapi.c \
       ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_striteri.c \
       ft_strtrim.c ft_substr.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_itoa.c ft_putchar_fd.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMPRESS) $(NAME) $(OBJS)
	@echo "Library $(NAME) created!"

%.o: %.c
	$(COMPILE) $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "Cleaned object files."

fclean: clean
	@$(RM) $(NAME)
	@echo "All cleaned up: $(NAME)!"

re: fclean all

.PHONY: all clean fclean re