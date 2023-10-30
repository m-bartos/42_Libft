NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isdigit.c ft_memmove.c ft_strlen.c ft_isprint.c ft_memset.c ft_strncmp.c ft_isalnum.c ft_memchr.c ft_strchr.c ft_strdup.c ft_strnstr.c ft_isalpha.c ft_memcmp.c ft_strlcat.c ft_strrchr.c ft_isascii.c ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

MY_OBJECTS = $(SOURCES:.c=.o)

MY_BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

all:	$(NAME)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

bonus: $(MY_BONUS_OBJECTS)
	ar rcs $(NAME) $(MY_BONUS_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)
	rm -f $(MY_BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
