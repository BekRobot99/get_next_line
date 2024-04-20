/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:56:56 by abekri            #+#    #+#             */
/*   Updated: 2024/04/20 01:58:23 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	while (*(s + i) != '\0' && *(s + i) != c)
		i++;
	if (s[i] == '\0' && s[i] != c)
		return (0);
	return ((char *)(s + i + 1));
}

char	*ft_strjoin(char *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	free(s1);
	return (result);
}

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dup;
	size_t	i;

	size = 1;
	while (s1[size - 1] != '\0')
		size++;
	dup = malloc(size);
	i = 0;
	while (i < size && dup != NULL)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	substr[len] = 0;
	while (len--)
		substr[len] = s[start + len];
	return (substr);
}
