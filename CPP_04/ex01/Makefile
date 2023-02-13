CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS = 	main.cpp		\
		Animal.cpp		\
		Dog.cpp			\
		Cat.cpp			\
		WrongAnimal.cpp \
		WrongCat.cpp	\
		Brain.cpp		\

HEADER = Animal.hpp			\
		 Dog.hpp			\
		 Cat.hpp			\
		 WrongAnimal.hpp	\
		 WrongCat.hpp		\
		 Brain.hpp			\

PATH_OBJS = .objs

OBJS = $(addprefix $(PATH_OBJS)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = Brain

all: $(NAME)

$(PATH_OBJS)/%.o: %.cpp $(HEADER) Makefile
				 @mkdir -p $(PATH_OBJS)
				 $(CPPC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		 $(CPPC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(PATH_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re