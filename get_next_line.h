/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:57:05 by abekri            #+#    #+#             */
/*   Updated: 2024/04/20 01:11:23 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *s1);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*get_next_line(int fd);

#endif
