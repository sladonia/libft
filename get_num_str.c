/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sladonia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 18:32:45 by sladonia          #+#    #+#             */
/*   Updated: 2017/02/18 18:32:48 by sladonia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_str(char *arg)
{
	int i;
	int n;
	int f;

	n = 0;
	f = 1;
	i = -1;
	if (arg == NULL)
		return (0);
	while (arg[++i])
	{
		if (arg[i] == ' ')
			f = 1;
		else if (f)
		{
			n++;
			f = 0;
		}
	}
	return (n);
}