#WINDOWS
# NAME = easyfind
# CC = g++
# FLAGS = -Wall -Wextra -Werror -std=c++98

# SRCS = main.cpp
# OBJS = $(SRCS:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# %.o: %.cpp easyfind.hpp
# 	$(CC) $(FLAGS) -c $< -o $@

# clean:
# 	del /F /Q $(OBJS)

# fclean: clean
# 	del /F /Q $(NAME).exe

# re: fclean all

# .PHONY: all clean fclean re

# LINUX
NAME = easyfind
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp easyfind.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re