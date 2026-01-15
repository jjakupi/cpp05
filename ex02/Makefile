NAME = aform
SRCS = Bureaucrat.cpp main.cpp  AForm.cpp   RobotomyRequestForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJDIR = obj
OBJS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCS))

RM = rm -rf

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
