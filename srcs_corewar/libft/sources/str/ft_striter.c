/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <agregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 01:44:06 by agregoir          #+#    #+#             */
/*   Updated: 2017/10/07 18:03:40 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s && f)
		while (*(s + i))
		{
			f(s + i);
			i++;
		}
}
