#WINDOWS
# NAME = MutantStack
# CC = g++
# FLAGS = -Wall -Wextra -Werror -std=c++98 -D_GNU_SOURCE

# SRCS = main.cpp MutantStack.cpp
# OBJS = $(SRCS:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# %.o: %.cpp MutantStack.hpp
# 	$(CC) $(FLAGS) -c $< -o $@

# clean:
# 	del /F /Q $(OBJS)

# fclean: clean
# 	del /F /Q $(NAME).exe

# re: fclean all

# .PHONY: all clean fclean re

#LINUX
NAME = MutantStack
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp MutantStack.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re