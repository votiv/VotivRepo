#include "libft.h"

void	print_lst(t_list *list);

int		main()
{
	t_list	*list = NULL;
	char	*tmp;
	int		size;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = "content 42";
	size = ft_strlen(tmp) * (int) sizeof(*tmp);
	list = ft_lstnew(tmp, size);
	printf("one\n");
	printf("cont: %s\n", (char *) list->content);
	print_lst(list);
	printf("two\n");
	return 0;
}

void	print_lst(t_list *list)
{
	t_list	*head;

	head = list;
	while (head->next != NULL)
	{
		printf("%s\n", (char *) head->content);
		head = head->next;
	}
}
