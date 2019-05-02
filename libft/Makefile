NAME=libft.a

SRCS=*.c

OBJECTS=*.o

INCLUDES=./

all: $(NAME)

$(NAME): 
	gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

bin:
	gcc -Wall -Wextra -Werror $(SRCS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all