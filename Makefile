NAME = libft.a

SRC = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memcmp \
		ft_memcpy ft_memset ft_strlen ft_strlcpy ft_strlcat ft_strncmp ft_tolower ft_toupper \
		ft_substr ft_strdup ft_strnstr ft_strjoin ft_strchr ft_strtrim ft_strmapi ft_striteri \
		ft_split ft_putstr_fd ft_putnbr_fd ft_putendl_fd ft_putchar_fd ft_memmove ft_memchr ft_itoa \
		ft_strtrim ft_strrchr ft_strtrim ft_split


CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
AR	= ar rcs

all:		$(NAME)

$(NAME): $(SRC:=.o)
			@$(AR) $(NAME) $(SRC:=.o)

clean:
			@$(RM)	$(SRC:=.o)

fclean:		clean
			@$(RM) -f $(NAME)

re:			fclean all
