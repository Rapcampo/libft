/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapcampo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:13:33 by rapcampo          #+#    #+#             */
/*   Updated: 2023/10/05 18:05:03 by rapcampo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dst;

	i = 0;
	while (s[i++])
		;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return ((void *) 0);
	i = 0;
	while (s[i++])
		dst[i] = s[i];
	dst[i] = '\0';
	return (dst);
}
