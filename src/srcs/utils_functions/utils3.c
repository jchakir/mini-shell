/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:27:57 by adouib            #+#    #+#             */
/*   Updated: 2022/04/17 01:07:03 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser/parser.h"

void	localhelper2(int *dqstate, int sqstate)
{
	if (!(*dqstate) && !sqstate)
		(*dqstate) = 1;
	else
		(*dqstate) = 0;
}

void	localhelper3(int *sqstate, int dqstate)
{
	if (!(*sqstate) && !dqstate)
		(*sqstate) = 1;
	else
		(*sqstate) = 0;
}

int	another_helper(int *count, int whitespace)
{
	if (*count > 2 || whitespace != 0)
		return (0);
	(*count)++;
	return (1);
}

int	check_redir_helper(char *s, int i)
{
	if ((s[i] == '>' && s[i + 1] == '<') || (s[i] == '<' && s[i + 1] == '>') || \
		(s[i] == '<' && s[i + 1] == '|') || (s[i] == '>' && s[i + 1] == '|'))
		return (0);
	return (1);
}
