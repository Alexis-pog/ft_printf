NAME =  libftprintf.a

INC =   *.h

OBJECT_FILES = *.o


all: annoncement $(NAME) 

SRC1 = ft_printf.c \
		ft_d_i_u.c \
		ft_c_s.c \
		ft_x_X.c

		

$(NAME):
	@gcc -Wall -Wextra -Werror  -c $(SRC1)
	@ar -r $(NAME) $(OBJECT_FILES)
	@echo "done !!"

clean: deleting
	@rm -rf $(OBJECT_FILES)
	@echo "done !!"

fclean:	deleting clean 
	@rm -rf $(NAME)

re: fclean deleting all
	
annoncement :
		@echo "creating library..."

deleting :
	@echo "deleting files..."

save: fclean 
	@git add *.c libft.h Makefile
	@git commit -m autosave
	@git push