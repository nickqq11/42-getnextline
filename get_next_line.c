/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:22:05 by nhuang            #+#    #+#             */
/*   Updated: 2023/11/20 18:09:50 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	get_next_line(int fd)
{
	char		*theline;
	char		*buffer;
	static char	*anchor;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	theline = reader(fd, buffer, anchor);
	if (!theline)
		return (NULL);
	
	
}
