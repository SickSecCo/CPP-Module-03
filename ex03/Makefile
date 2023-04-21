NAME = 			Now_It_s_Weird
FLAGS = 		-Wall -Werror -Wextra -std=c++98
COMPILE =		c++
FILE =			$(wildcard *.cpp)
RM =			rm -rf


all:
	$(COMPILE) $(FLAGS) $(FILE) -o $(NAME) -g

clean:
	$(RM) $(NAME)

fclean:	clean

re:	clean all
				
.PHONY:	all clean fclean re