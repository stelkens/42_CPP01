.PHONY: all clean fclean re debug

NAME = ex05

SRC = ${addsuffix .cpp, main Harl}

OBJ = $(SRC:%.cpp=build/%.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

build/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build

fclean: clean
	rm -f $(NAME)

re: fclean all