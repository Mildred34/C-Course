CC	= g++

NAME	= TSTACK

RM	= rm -f

CFLAGS	+= -std=c++17 -W -Wall -Wextra -Wfatal-errors 
CXXFLAGS += -std=c++17

SRC	=	stack_t.cpp
		

OBJS	= $(SRC:.cpp=.o) #

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(CXXFLAGS) $(CFLAGS) -o $(NAME) 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:re clean fclean all
