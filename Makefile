NAME	= course.a
CC		= g++
RM		= rm -f
SRCS	= $(shell find "./srcs" -name "*cpp")
OBJS	= ${SRCS:.c=.o}
AR		= ar csr

# .cpp.o :
# 	${CC} ${CFLAGS} -cpp $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
	${AR} course.a ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean #DON'T DO THIS
	${RM} ${NAME} 

re: fclean all

.PHONY: all clean fclean re .cpp.o
