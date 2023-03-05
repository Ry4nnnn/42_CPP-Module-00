# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welim <welim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 20:38:49 by welim             #+#    #+#              #
#    Updated: 2023/03/05 23:15:35 by welim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

CPP		= c++

SRC 	= megaphone.cpp

OBJS	= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
			$(CPP) $(FLAGS) $(OBJS) -o $@

%.o:		%.cpp
		$(CPP) $(FLAGS) -c $< -o $@

clean:
		@rm $(OBJS)

fclean:		clean
		@rm $(NAME)

re:			fclean all
