CPPC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
NAME=Brain
SRC=main.cpp 
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CPPC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all