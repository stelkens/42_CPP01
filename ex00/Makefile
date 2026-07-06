.PHONY: all clean fclean re debug

NAME = ex00

SRC = ${addsuffix .cpp, main newZombie randomChump Zombie}

OBJ = $(SRC:%.cpp = %.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all