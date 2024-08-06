CPPC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
NAME=zombie
SRC=Zombie.cpp main.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CPPC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re