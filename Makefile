
NAME		=	SantaKoalaus

SRC		=  	main.cpp \
			Box.cpp \
			ConveyorBeltPePeNoel.cpp \
			Elf.cpp \
			GiftPaper.cpp \
			LittlePony.cpp \
			MyUnitTests.cpp \
			Object.cpp \
			TablePePeNoel.cpp \
			Teddy.cpp \
			Toy.cpp \
			Wrap.cpp

OBJ		=	$(SRC:.cpp=.o)

CXXFLAGS	+= 	-W -Wall -Werror -Wextra

RM		= 	rm -f

CC		= 	g++

%.o: %.cpp
		@printf "[\033[0;32mdone\033[0m] % 33s\n" $<
		@$(CC) -c -o $@ $< $(CXXFLAGS)

all:		$(NAME)

$(NAME):	$(OBJ)
		@$(CC) $(OBJ) -o $(NAME)
		@echo -e "`cat asciiart`"

clean:
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(OBJ)
		@$(RM) $(OBJ)

fclean:		clean
		@$(RM) $(NAME)
		@printf "[\033[0;31mdeleted\033[0m] % 30s\n" $(NAME)

re:		fclean all

bin:		re clean

.PHONY:		all clean fclean re bin
