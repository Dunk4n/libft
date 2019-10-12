# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niduches <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 14:45:08 by niduches          #+#    #+#              #
#    Updated: 2019/10/11 09:51:37 by niduches         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= 	gcc

SRC		=	ft_atoi.c				\
			ft_isalpha.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_calloc.c				\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_bzero.c				\
			ft_itoa.c				\
			ft_memccpy.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_memmove.c			\
			ft_putstr_fd.c			\
			ft_putnbr_fd.c			\
			ft_strchr.c				\
			ft_strdup.c				\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strlen.c				\
			ft_memset.c				\
			ft_strncmp.c			\
			ft_strmapi.c			\
			ft_strrchr.c			\
			ft_strnstr.c			\
			ft_strtrim.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_split.c				\
			ft_substr.c				\
			ft_strlcpy.c			\

SRCB	=	ft_atoi.c				\
			ft_isalpha.c			\
			ft_isalnum.c			\
			ft_isascii.c			\
			ft_calloc.c				\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_bzero.c				\
			ft_itoa.c				\
			ft_memccpy.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_memmove.c			\
			ft_putstr_fd.c			\
			ft_putnbr_fd.c			\
			ft_strchr.c				\
			ft_strdup.c				\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strlen.c				\
			ft_memset.c				\
			ft_strncmp.c			\
			ft_strmapi.c			\
			ft_strrchr.c			\
			ft_strnstr.c			\
			ft_strtrim.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_split.c				\
			ft_substr.c				\
			ft_strlcpy.c			\
			ft_lstdelone.c			\
			ft_lstadd_front.c		\
			ft_lstadd_back.c		\
			ft_lstclear.c			\
			ft_lstiter.c			\
			ft_lstlast.c			\
			ft_lstnew.c				\
			ft_lstsize.c			\
			ft_lstmap.c				\
			ft_is_prime.c			\
			ft_pow.c				\
			ft_revstr.c				\
			ft_strcat.c				\
			ft_strncat.c			\
			ft_strcmp.c				\
			ft_strcpy.c				\
			ft_strncpy.c			\
			ft_find_prime_sup.c		\

OBJ		=	$(SRC:%.c=%.o)

CFLAGS	+=	-Wall -Wextra -Werror

NAME	=	libft.a

all:	$(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(SRCB:%.c=%.o)

fclean: clean
	rm -f $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(SRCB:%.c=%.o)
	ar rc $(NAME) $(SRCB:%.c=%.o)

re:	fclean $(NAME)

.PHONY: all clean fclean re
