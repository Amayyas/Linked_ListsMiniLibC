##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## linked lists
##


NAME =	linked_lists

SRCS =	src/add/add_node_end.c	\
		src/add/add_node_start.c	\
		src/create/create_node.c	\
		src/delete/delete_at.c	\
		src/delete/delete_back.c	\
		src/delete/delete_front.c	\
		src/delete/delete_node_by_data.c	\
		src/delete/delete_node_by_index.c	\
		src/find/find_node_by_data.c	\
		src/find/find_node_by_index.c	\
		src/free/free_list.c	\
		src/list/list_length.c	\
		src/push/push_back.c	\
		src/push/push_front.c	\
		src/show/show_list.c	\
		src/sort/sort_list.c	\
		src/main.c

OBJS =	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f lib/my/libmy.a
	rm -f lib/libmy.a
	rm -f libmy.a
	rm -f a.out

re: fclean all
