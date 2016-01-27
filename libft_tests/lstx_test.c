#include "libft.h"

void	print_lst(t_list *list);

int		main()
{
	t_list	*list = NULL;
	char	*tmp;

	tmp = (char *) ft_memalloc(sizeof(*tmp) * BUFF_SIZE);
	tmp = "content 42";
	list = ft_lstnew(tmp, ft_strlen(tmp));
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
