CC		= g++
SRCS	= $(shell find "./Src" -name "*cpp")
OBJS	= ${SRCS:.cpp=.o}
RM		= rm -f
NAME	= ./course.a
AR		= ar csr
# OBJS	= $(shell find "./Src" -name "*.o")

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