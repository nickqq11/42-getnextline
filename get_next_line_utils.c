/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:21:57 by nhuang            #+#    #+#             */
/*   Updated: 2023/11/02 15:57:44 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *get_next_line(int fd)
{
	char	*readline;
	char	*buffer;
	static char	*toread;

	if((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
}