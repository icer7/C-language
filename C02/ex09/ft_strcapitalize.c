/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:48:22 by rysato            #+#    #+#             */
/*   Updated: 2020/08/08 15:48:24 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_transform_char(char *c, bool to_upper)
{
	if (!to_upper)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
		}
	}
	else
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
	}
}

bool	is_char_alphabet(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool	is_char_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

void	ft_strcapitalize_delegate(char *box, bool *in_word, bool *skip_word)
{
	bool first_letter;

	first_letter = false;
	if (!*in_word)
	{
		if (is_char_numeric(*box))
			*skip_word = true;
		else if (is_char_alphabet(*box) && !*skip_word)
		{
			*in_word = true;
			first_letter = true;
		}
	}
	ft_transform_char(box, false);
	if (*in_word)
		ft_transform_char(box, first_letter);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	*box;
	bool	in_word;
	bool	skip_word;

	index = 0;
	in_word = false;
	skip_word = false;
	while (true)
	{
		box = &str[index];
		if (*box == '\0')
			break ;
		ft_strcapitalize_delegate(box, &in_word, &skip_word);
		if (!(is_char_alphabet(*box) || is_char_numeric(*box)))
		{
			in_word = false;
			skip_word = false;
		}
		index++;
	}
	return (str);
}
