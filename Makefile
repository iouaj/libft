NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha ft_isdigt ft_isalnum ft_isacii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
OBJ = $(addsuffix .o, $(FILES))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re