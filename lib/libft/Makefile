CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
HEADER = libft.h

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
        ft_strlen.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strcmp.c ft_strlcpy.c ft_strlcat.c \
        ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c \
        ft_atoi.c ft_calloc.c ft_strdup.c \
        ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_error.c \
        ft_strmapi.c ft_striteri.c ft_itoa.c \

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \

OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)
OBJDIR = obj/

OBJS = $(OBJ:%.o=$(OBJDIR)%.o)
BOBJS = $(BOBJ:%.o=$(OBJDIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	@echo "Libft Done !"

$(OBJDIR)%.o: %.c $(HEADER)
	@mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: all $(BOBJS)
	ar -rc $(NAME) $(BOBJS)

.PHONY: all clean fclean re bonus