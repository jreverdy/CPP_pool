CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = 	main.cpp			\
		getType.cpp			\
		convertChar.cpp		\
		convertInt.cpp		\
		convertFloat.cpp	\
		convertDouble.cpp	\

HEADER = main.hpp	\

PATH_OBJS = .objs

OBJS = $(addprefix $(PATH_OBJS)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = Serialize

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