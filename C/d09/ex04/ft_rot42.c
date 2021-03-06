/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:01:22 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/13 23:19:59 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	g_let_me_check[94] =
{
	'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
	'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', '{', '|', '}', '~', '!', '"', '#', '$', '%', '&', '\'',
	'(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6',
	'7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E',
	'F', 'G', 'H', 'I', 'J'

};

char		*ft_rot42(char *str)
{
	char *c;

	c = str;
	while (*c)
	{
		if (*c >= '!' && *c <= '~')
			*c = g_let_me_check[*c - '!'];
		++c;
	}
	return (str);
}
