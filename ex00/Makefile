NAME := Animal

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

HEADERS :=  Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp

OBJS_FOLDER := objs/
SRCS := main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp


# OBJS := $(SRCS:.cpp=.o)
OBJS := $(patsubst %.cpp, $(OBJS_FOLDER)%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)
	./$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS_FOLDER):
	mkdir -p $(OBJS_FOLDER)

$(OBJS_FOLDER)%.o: %.cpp | $(OBJS_FOLDER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
