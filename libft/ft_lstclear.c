/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:15:53 by zhlim             #+#    #+#             */
/*   Updated: 2022/10/12 15:43:59 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && del)
	{
		while (*lst && del)
		{
			ft_lstdelone(*lst, del);
			*lst = (*lst)->next;
		}
	}
}

/*void	del(void *p)
{
	char	*ptr;

	ptr = p;
	while (*ptr)
	{
		*ptr = '1';
		ptr++;
	}
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	*ptr;
	char	s1[] = "hello";
	char	s2[] = "world";

	a.content = s1;
	b.content = s2;
	a.next = &b;
	ptr = &a;

	printf("%s, %s\n", (char *)a.content, (char *)b.content);
	ft_lstclear(&ptr, del);
	printf("%s, %s\n", (char *)a.content, (char *)b.content);
}*/