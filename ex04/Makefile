.PHONY: all clean fclean re debug

NAME = ex04

SRC =  main.cpp

OBJ = $(SRC:%.cpp=build/%.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude

CXX = c++

DFLAG = -g

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

build/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

debug: CXXFLAGS += $(DFLAG)
debug:	fclean $(NAME)
		@echo "Debug_Build done"

clean:
	rm -rf build

fclean: clean
	rm -f $(NAME)
	rm -f *.txt
	rm -f *.replace

re: fclean all