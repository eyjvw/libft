# === Variables de base ===
NAME = libft.a
SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_atoi.c ft_memset.c \
		  ft_bzero.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strlcpy.c \
		  ft_strlcat.c ft_strdup.c ft_putendl_fd.c ft_calloc.c ft_memchr.c ft_strjoin.c \
		  ft_substr.c ft_strncmp.c ft_strnstr.c ft_split.c ft_strtrim.c ft_itoa.c ft_striteri.c \
		  ft_memcpy.c ft_memcmp.c ft_strmapi.c ft_memmove.c ft_strrchr.c
BONUS_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f
CC = cc

# === Couleurs ===
GREEN = \033[0;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RED = \033[0;31m
CYAN = \033[0;36m
RESET = \033[0m

# === Règles ===
all: $(NAME)
	@echo "$(GREEN)✅ Compilation terminée: $(NAME)$(RESET)"

$(NAME): $(OBJECTS)
	@echo "$(BLUE)📦 Création de la bibliothèque...$(RESET)"
	@$(AR) $(NAME) $(OBJECTS)
	@echo "$(CYAN)📚 $(NAME) créé avec succès.$(RESET)"

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	@echo "$(BLUE)📦 Création de la bibliothèque avec les bonus...$(RESET)"
	@$(AR) $(NAME) $(OBJECTS) $(BONUS_OBJECTS)
	@echo "$(CYAN)📚 $(NAME) avec bonus créé avec succès.$(RESET)"

%.o: %.c libft.h
	@echo "$(YELLOW)🔧 Compilation de $<...$(RESET)"
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@echo "$(RED)🧹 Suppression des fichiers objets...$(RESET)"
	@$(RM) $(OBJECTS) $(BONUS_OBJECTS)
	@echo "$(RED)✔️ Clean terminé.$(RESET)"

fclean: clean
	@echo "$(RED)🧨 Suppression de la bibliothèque...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(RED)✔️ Fclean terminé.$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus
