CC		= g++
OBJ		= ${shell find "./Objs" -name "*.o"}
SRCS	= $(shell find "./Srcs" -name "*cpp")
OBJS	= ${SRCS:.cpp=.o}
RM		= rm -f
NAME	= ./course.a
AR		= ar csr

.cpp.o :
	${CC} -c $< -o ${<:.cpp=.o}

$(NAME) : ${OBJS}
	@${AR} course.a ${OBJS}

all : ${NAME}

compile : all 
	${CC} ${NAME} && ./a.out

clean : 
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME} a.out

re : fclean all

.PHONY: all clean fclean re .c.o