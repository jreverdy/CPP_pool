CPPC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = 	main.cpp					\
		Bureaucrat.cpp				\
		AForm.cpp					\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp		\
		PresidentialPardonForm.cpp	\

HEADER = Bureaucrat.hpp				\
		 AForm.hpp					\
		 ShrubberyCreationForm.hpp	\
         RobotomyRequestForm.hpp	\
		 PresidentialPardonForm.hpp	\

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