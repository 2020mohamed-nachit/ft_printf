NAME = libftprintf.a

OBJ = 	ft_hexa_lower.o ft_hexa_upper.o ft_put_unsigned.o\
		ft_putchar.o ft_putnbr.o ft_putstr.o\
		ft_put_pointer.o ft_after.o ft_printf.o \

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c ft_prinf.h
	gcc $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all