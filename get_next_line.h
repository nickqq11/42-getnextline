/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:22:09 by nhuang            #+#    #+#             */
/*   Updated: 2023/11/27 16:53:39 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char		*get_next_line(int fd);
static int	ft_strlen(const char *str);
static char	*ft_substr(char const *s, unsigned int start, size_t len);
static int	ft_strchr(const char *s, int i);
static char	ft_strdup(const char *s);
static char	ft_strjoin(const char *s1, const char *s2);

#endif
