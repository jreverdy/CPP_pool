CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = 	main.cpp		\
		Weapon.cpp		\
		HumanA.cpp		\
		HumanB.cpp		\

HEADER = 	Weapon.hpp	\
			HumanA.hpp	\
			HumanB.hpp	\

PATH_OBJS = .objs

OBJS = $(addprefix $(PATH_OBJS)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = weapon

all: $(NAME)

$(PATH_OBJS)/%.o: %.cpp Makefile $(HEADER)
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