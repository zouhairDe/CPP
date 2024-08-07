CPPC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp Harl.cpp
OBJ=$(SRC:.cpp=.o)

NAME=HarlFilter

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp Harl.hpp
	$(CPPC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re