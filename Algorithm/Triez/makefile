CC	= g++

NAME	= SORT_VECTOR

RM	= rm -f

CFLAGS	+= -std=c++17 -W -Wall -Wextra -Wfatal-errors 
CXXFLAGS += -std=c++17

SRC	=	Generer_Sort.cpp \
		Predicat_Sort.cpp \
		main.cpp
		

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
