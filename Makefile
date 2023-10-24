LIB_NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_isprint.c ft_memset.c ft_strncmp.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strdup.c ft_strnstr.c ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_strrchr.c ft_isascii.c ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_toupper.c

MY_OBJECTS = $(SOURCES:.c=.o)

all:	$(LIB_NAME)
	
/%.o: /%.c
	$(CC) $(CFLAGS) -I -c $< -o $@

$(LIB_NAME): $(MY_OBJECTS)
	ar rcs $(LIB_NAME) $(MY_OBJECTS)
	
clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
