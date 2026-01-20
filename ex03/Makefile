# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 12:06:00 by jvalkama          #+#    #+#              #
#    Updated: 2026/01/20 13:49:27 by jvalkama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=

SRCDIR			:=src
VPATH			:=$(SRCDIR)
SRCS			:=main.cpp

OBJDIR			:=obj
OBJS			:=$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

INC				:=inc
INCLUDES		:=-I $(INC)
HEADER			:=$(INC)/___.hpp

COMPILER		:=c++
CXXFLAGS		:=-Wall -Wextra -Werror -O3 -march=native -std=c++17

RM				:=rm -f


all:				$(NAME)

$(OBJDIR):
						mkdir -p $(OBJDIR)

$(NAME):			$(OBJS)
						@echo "linking $@"
						$(COMPILER) $(CXXFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o:		$(SRCDIR)/%.cpp $(HEADER) | $(OBJDIR)
						@echo "Compiling $<"
						$(COMPILER) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
						@echo "Cleaning object files"
						@$(RM) $(OBJS)

fclean:				clean
						@echo "Cleaning all"
						@$(RM) $(NAME)
						@$(RM) -rf $(OBJDIR)

re:					fclean all

.PHONY: all clean fclean re
