NAME = libft.a

SRC = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_substr ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum\
ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup\
ft_strjoin ft_strtrim ft_strmapi ft_striteri ft_itoa ft_split\

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
