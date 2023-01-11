CPPC = c++
CPPFLAGS = -wall -werror -std=c++98
SRCS = phonebook.cpp
PATH_OBJS = .objs

OBJS = $(addprefix $(PATH_OBJS)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = phonebook

all: $(NAME)

$(PATH_OBJS)/%.o: %.cpp Makefile
				 @mkdir -p $(PATH_OBJS)
				 $(CPPC) $(CPPCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		 $(CPPC) $(OBJS) -o $(NAME)

clean:
		$(RM) $(PATH_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re