# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusujio <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 14:47:13 by gusujio           #+#    #+#              #
#    Updated: 2020/02/17 14:33:27 by ddratini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =\
	ft_isprint.c\
	ft_memccpy.c\
	ft_putchar_fd.c\
	ft_strcat.c\
	ft_striteri.c\
	ft_strncmp.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_itoa2.c\
	ft_memchr.c\
	ft_putendl.c\
	ft_strchr.c\
	ft_strjoin.c\
	ft_strncpy.c\
	ft_tolower.c\
	ft_atoi.c\
	ft_lstadd.c\
	ft_memcmp.c\
	ft_putendl_fd.c\
	ft_strclr.c\
	ft_strjoin2.c\
	ft_strnequ.c\
	ft_toupper.c\
	ft_bzero.c\
	ft_lstdel.c\
	ft_memcpy.c\
	ft_putnbr.c\
	ft_strcmp.c\
	ft_strlcat.c\
	ft_strnew.c\
	ft_unletter.c\
	ft_degree.c\
	ft_lstdelone.c\
	ft_memdel.c\
	ft_putnbr_fd.c\
	ft_strcpy.c\
	ft_strlen.c\
	ft_strnstr.c\
	ft_isalnum.c\
	ft_lstiter.c\
	ft_memmove.c\
	ft_putstr.c\
	ft_strdel.c\
	ft_strlen2.c\
	ft_strrchr.c\
	ft_isalpha.c\
	ft_lstmap.c\
	ft_memset.c\
	ft_putstr_fd.c\
	ft_strdup.c\
	ft_strmap.c\
	ft_strsplit.c\
	ft_isascii.c\
	ft_lstnew.c\
	ft_mod.c\
	ft_root.c\
	ft_strequ.c\
	ft_strmapi.c\
	ft_strstr.c\
	ft_isdigit.c\
	ft_memalloc.c\
	ft_putchar.c\
	ft_splitt.c\
	ft_striter.c\
	ft_strncat.c\
	ft_strsub.c\
	bonus.c\
	ft_mult2.c\
	ft_multi.c\
	ft_printf.c\
	ft_revers.c\
	obr.c\
	obr2.c\
	obr3.c\
	tip_f.c\
	tip_ff.c\
	tip_i_d.c\
	tip_o.c\
	tip_p.c\
	tip_s_c.c\
	tip_u.c\
	tip_x.c\
	ft_lenint.c\
	ft_lenint2.c\
	ft_strjoin1.c\
	ft_strjoin3.c\
	ft_strlen3.c\
	get_next_line.c\
	ft_strcount.c\
	ft_atoiar.c\
	ft_cleanmem.c\
	ft_strndup.c

OBJ = $(subst .c,.o,$(SRC))

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): %.o: %.c
	@gcc -o $@ -c $<
clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
