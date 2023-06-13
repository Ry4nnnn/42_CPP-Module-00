# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: welim <welim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 21:15:17 by welim             #+#    #+#              #
#    Updated: 2023/06/13 13:17:37 by welim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

RM = rm -rf

SRCS_DIR = src/

OBJS_DIR = obj/

SRCS = $(wildcard $(SRCS_DIR)*.cpp)

OBJS = $(addprefix $(OBJS_DIR), $(notdir $(SRCS:.cpp=.o)))

all:	$(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@mkdir -p $(@D)
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re