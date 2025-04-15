SRCS			:=	main.cpp Zombie.cpp zombieHorde.cpp
OBJS			:= $(SRCS:.cpp=.o)
CC				:= c++
RM				:= rm -f
CXXFLAGS		:= -Wall -Wextra -Werror -std=c++98
NAME			:= ZombieHorde

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

				
.PHONY:			all clean fclean re bonus
# .SILENT: