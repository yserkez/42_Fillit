/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserkez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:15:29 by yserkez           #+#    #+#             */
/*   Updated: 2018/09/14 15:10:46 by yserkez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(char *str)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}
