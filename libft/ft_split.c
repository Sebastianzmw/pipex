/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:50:07 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/12 17:35:23 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	my_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s != '\0')
	{
		while (*s && *s != c)
			s++;
		count++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static size_t	my_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static char	*my_strndup(const char *s, size_t n)
{
	char	*p_strndup;
	size_t	i;

	p_strndup = malloc(sizeof(char) * (n + 1));
	if (!p_strndup)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p_strndup[i] = s[i];
		i++;
	}
	p_strndup[i] = '\0';
	return (p_strndup);
}

static void	my_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	total_len;
	size_t	word_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	total_len = my_word_count(s, c);
	split = malloc(sizeof(char *) * (total_len + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < total_len)
	{
		while (*s && *s == c)
			s++;
		word_len = my_word_len(s, c);
		split[i] = my_strndup(s, word_len);
		if (!split[i])
			return (my_free(split), NULL);
		s = s + word_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}

/* int	main()
{
	char	str[] = "   i'm vengence i'm BATMAN";
	char	**result = ft_split(str, ' ');

	int	i = 0;
	while (result[i] != NULL)
	{
		printf("result : %s\n", result[i]);
		i++;
	}
	printf("%s\n", result[i]);
	my_free(result);
	return (0);
} */