#MAC and LINUX
CC = c++
NAME = Array
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Array.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Array.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


#WINDOWS
# NAME = Array
# CC = g++
# FLAGS = -Wall -Wextra -Werror

# SRCS = main.cpp Array.cpp
# OBJS = $(SRCS:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# %.o: %.cpp Array.hpp
# 	$(CC) $(FLAGS) -c $< -o $@

# clean:
# 	del /F /Q $(OBJS)

# fclean: clean
# 	del /F /Q $(NAME).exe

# re: fclean all

# .PHONY: all clean fclean re