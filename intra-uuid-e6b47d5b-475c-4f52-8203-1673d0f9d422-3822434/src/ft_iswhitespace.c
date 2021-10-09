/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iswhitespace.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/09 19:08:57 by mikuiper      #+#    #+#                 */
/*   Updated: 2021/10/09 19:08:57 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\n' || 
	c == '\f')
	{
		return (1);
	}
	return (0);
}