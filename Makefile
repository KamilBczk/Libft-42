# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 11:36:26 by kbiczyk           #+#    #+#              #
#    Updated: 2021/09/14 20:16:24 by kamilbiczyk      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# All files
SRC =	ft_atoi.c \
		ft_split.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlcat.c \
		ft_strtrim.c \
		ft_strlcpy.c \
		ft_strrchr.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c

OBJS_DIR = objs/
OBJS = ${SRC:.c=.o}
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

# All bonus files
SRCB =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c 

OBJSB = ${SRCB:.c=.o}
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

# Name of the exec file
NAME = libft.a

# Flags compile
FLAGS = -Wall -Wextra -Werror

# Delete
RM = rm -f

$(OBJS_DIR)%.o:	%.c libft.h
				@mkdir -p $(OBJS_DIR)
				@echo "Compiling: $<"
				@clang $(CC_FLAGS) -c $< -o $@

$(NAME):	$(OBJECTS_PREFIXED)
			@ar r $(NAME) $(OBJECTS_PREFIXED)
			@echo "Libft Done !"

all: $(NAME)

bonus: $(SRCB)

clean:
			rm -rf $(OBJS_DIR)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

bonus:		$(OBJECTS_BONUS_PREFIXED)
			@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
			@echo "Libft Bonus Done !"