NAME	= course.a
CC		= g++
RM		= rm -f
SRCS	= $(shell find "./srcs" -name "*cpp")
OBJS	= ${SRCS:.c=.o}
AR		= ar csr

.cpp.o :
	${CC} ${CFLAGS} -cpp $< -o ${<:.cpp=.o}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .cpp.o