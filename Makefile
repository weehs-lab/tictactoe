NAME	= tictactoe
CXX		= g++
CXXFLAGS= -Wall -Wextra -Werror -O3
RM		= rm -f

SRC		= tictactoe.cpp main.cpp
OBJS	= $(SRC:.cpp=.o)
HEADER	= tictactoe.h

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY:all clean fclean re
