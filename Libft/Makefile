# Vari/alias that define the files that will be compilled together
RM = rm -f 
SRCS =ft_isalnum.c ft_itoa.c ft_memset.c ft_strlcpy.c ft_substr.c ft_isalpha.c \
			ft_memchr.c ft_split.c ft_strlen.c ft_tolower.c ft_atoi.c ft_isascii.c \
			ft_memcmp.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_bzero.c ft_isdigit.c \
			ft_memcpy.c ft_strjoin.c ft_strrchr.c ft_calloc.c ft_isprint.c \
			ft_memmove.c ft_strlcat.c ft_strtrim.c

#ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
#ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_substr.c \
#		ft_strjoin.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_atoi.c \
#		ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c \
#		ft_putnbr_fd.c ft_strncmp.c ft_strtrim.c ft_strdup.c ft_strchr.c \
#		ft_calloc.c ft_memchr.c ft_strrchr.c ft_strmapi.c ft_striteri.c ft_memcmp.c \
#		ft_strnstr.c ft_split.c
# OBJS = Object files $(source: .c INPUT = .o OUTPUT) because when compiling a static library you need .o files.
OBJS = ${SRCS:.c=.o}
NAME = libft.a
#Name is the name of the file. .a is static library.
# all is the basic rule of makefile whenever there's no rule input.(make )
all: ${NAME}
#Name calls the objects and then compiles (ar rc) calling the name of the file and objects to compile.
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
#Delete the .o files
clean:
	${RM} ${OBJS}
#Delete the .o file with clean + remove .a file with $NAME.
fclean: clean
	${RM} ${NAME}
#Clean everything (.o & .a)
re: fclean all
#To not allow overlap of rules
.PHONY: re fclean clean all


