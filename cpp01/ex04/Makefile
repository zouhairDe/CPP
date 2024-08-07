CPPC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp
OBJ=$(SRC:.cpp=.o)

NAME=NotALoser

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

.PHONY: all clean fclean re