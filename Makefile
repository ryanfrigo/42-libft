# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/02 13:07:54 by rfrigo            #+#    #+#              #
#    Updated: 2018/12/01 13:53:32 by rfrigo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
FLAGS 		= -Wall -Werror -Wextra -c -I./includes
FILES 		= ./*.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(FILES)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
