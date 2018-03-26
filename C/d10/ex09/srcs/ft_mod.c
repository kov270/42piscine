/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:13:32 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/13 12:13:34 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_dope.h"

char		*ft_mod(int l, int r, int *out)
{
	if (r == 0)
		return ("Stop : modulo by zero");
	*out = l % r;
	return (NULL);
}
