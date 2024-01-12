CPP			:= c++
CFLAGS		:= -g -Wall -Wextra -Werror -Wshadow -std=c++98
OBJFLAGS 	:= -c

NAME		:= DiamondTrap

SRCS_F		:= 	main \
				ClapTrap \
				ScavTrap \
				FragTrap \
				DiamondTrap

SRCS		:= $(addsuffix .cpp, $(SRCS_F))
OBJ			:= $(addsuffix .o, $(SRCS_F))

all: 		$(NAME)

%.o: %.cpp
				$(CPP) $(CPPFLAGS) $(OBJFLAGS) $< -o $@

$(NAME): 	$(OBJ)
				$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
				@rm -f $(OBJ)

fclean:		clean
				@rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re