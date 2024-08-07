CPPC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
NAME=violence
SRC=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp %.hpp
	$(CPPC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all