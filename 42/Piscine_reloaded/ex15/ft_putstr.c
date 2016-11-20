/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:34:13 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/19 15:02:10 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putstr(char c);

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count += 1;
	}
	ft_putchar('\n');
}
