.PHONY: all clean fclean re debug

NAME = ex03

SRC = ${addsuffix .cpp, main HumanA HumanB Weapon}

HEADERS = include/Weapon.hpp \
          include/HumanA.hpp \
          include/HumanB.hpp

OBJ = $(SRC:%.cpp=build/%.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

CXX = c++



all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

build/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build

fclean: clean
	rm -f $(NAME)

re: fclean all