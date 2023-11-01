/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:35:19 by bschmid           #+#    #+#             */
/*   Updated: 2023/10/26 10:35:21 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	avl_spc;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	avl_spc = dstsize - dst_len - 1;
	if (dstsize <= dst_len)
	{
		return (dst_len + src_len);
	}
	while (src_len < avl_spc)
	{
		dst[dst_len++] = *src++;
		avl_spc--;
	}
	dst[dst_len] = '\0';
	return (dst_len + src_len);
}
