NAME = fragTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp FragTrap.cpp main.cpp

HEADERS = ClapTrap.hpp FragTrap.hpp

OBJ = $(SRC:.cpp=.o)

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
