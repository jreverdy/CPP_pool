CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = 	Phonebook.cpp	\
		Contact.cpp		\
		main.cpp		\

HEADER = Contact.hpp	\
		 Phonebook.hpp	\

PATH_OBJS = .objs

OBJS = $(addprefix $(PATH_OBJS)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = phonebook

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