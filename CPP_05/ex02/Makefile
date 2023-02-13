CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = 	main.cpp					\
		Bureaucrat.cpp				\
		Form.cpp					\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp		\
		PresenditialPardonForm.cpp	\

HEADER = Bureaucrat.hpp				\
		 Form.hpp					\
		 ShrubberyCreationForm.hpp	\
         RobotomyRequestForm.hpp	\
         PresenditialPardonForm.hpp	\

PATH_OBJS = .objs

OBJS = $(addprefix $(PATH_OBJS)/, $(SRCS:.cpp=.o))

RM = rm -rf

NAME = 28B

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