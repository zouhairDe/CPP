#MAC and LINUX
# CC = c++
# NAME = ex00
# FLAGS = -Wall -Wextra -Werror -std=c++98

# SRCS = main.cpp
# OBJS = $(SRCS:.cpp=.o)

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# %.o: %.cpp
# 	$(CC) $(FLAGS) -c $< -o $@

# clean:
# 	rm -f $(OBJS)

# fclean: clean

# re: fclean all

# .PHONY: all clean fclean re


#WINDOWS
NAME = ex00
CC = g++
FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	del /F /Q $(OBJS)

fclean: clean
	del /F /Q $(NAME).exe

re: fclean all

.PHONY: all clean fclean re