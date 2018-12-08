/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 10:55:07 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/28 15:57:46 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (s1 && s2)
		while (*s1 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
	if ((*s1 - *s2) == 0)
		return (1);
	else
		return (0);
}