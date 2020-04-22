/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unletter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:52:18 by gusujio           #+#    #+#             */
/*   Updated: 2019/09/12 17:32:07 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unletter(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 97)
			return (ft_tolower(c));
		return (ft_toupper(c));
	}
	return (0);
}
