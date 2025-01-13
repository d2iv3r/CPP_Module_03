NAME = scavTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS = ClapTrap.hpp ScavTrap.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
