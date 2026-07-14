.PHONY: all clean fclean re debug

NAME = ex03

SRC = ${addprefix src/, main.cpp\
						HumanA.cpp\
						HumanB.cpp\
						Weapon.cpp}

HEADERS =  ${addprefix include/,	Weapon.hpp \
          							HumanA.hpp \
         							HumanB.hpp}

OBJ = $(SRC:src/%.cpp=build/%.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

CXX = c++

DFLAG = -g

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

build/%.o: src/%.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

debug: CXXFLAGS += $(DFLAG)
debug:	fclean $(NAME)
		@echo "Debug_Build done"

clean:
	rm -rf build

fclean: clean
	rm -f $(NAME)

re: fclean all