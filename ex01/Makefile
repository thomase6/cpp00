NAME = phonebook

#ingredients 

SRCS = 	main.cpp \
		Contact.cpp \
		PhoneBook.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
ODIR = obj/
OBJS = $(SRCS:%.cpp=$(ODIR)%.o)

#utensils

RM = rm -f
MAKEFLAGS = --no-print-directory
DIR_DUP = mkdir -p $(@D)

#recipe

all: $(NAME)

$(ODIR)%.o: %.cpp
			@$(DIR_DUP)
			@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		 @$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)
		@rm -rf $(ODIR)

fclean:	clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re