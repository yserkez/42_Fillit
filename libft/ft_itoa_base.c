/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yserkez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:41:35 by yserkez           #+#    #+#             */
/*   Updated: 2018/10/30 11:42:08 by yserkez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	int		size;
	char	*str;
	int		neg;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = (n >= 0) ? ft_countdigits(n, base) : ft_countdigits(n, base) + 1;
	neg = (n >= 0) ? 0 : 1;
	if ((str = (char*)malloc(size + 1)) == NULL)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		n *= -1;
	while (n / base > 0 || n % base > 0)
	{
		size--;
		str[size] = (n % base < 10) ? (n % base) + '0' : (n % base - 10) + 'a';
		n /= base;
	}
	if (neg)
		str[--size] = '-';
	return (str);
}
