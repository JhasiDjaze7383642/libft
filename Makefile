NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlen.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_split.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_itoa.c \
	  ft_strtrim.c \
	  ft_strchr.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_strcpy.c \
	  case_type.c \
	  compare_string.c \
	  ft_free.c \
	  get_next_line.c \
	  file_utils.c

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJET = ${SRC:.c=.o}

BONUS_OBJET = ${BONUS:.c=.o}

AR = ar -rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJET)
	 $(AR) $(NAME) $(OBJET)

all: ${NAME}

bonus: ${BONUS_OBJET} ${NAME}
	$(AR) $(NAME) $(BONUS_OBJET)
	@touch bonus

clean:
	rm -f $(OBJET) $(BONUS_OBJET)
	@rm -f bonus

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean
