/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:45:28 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/14 14:52:07 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	ft_memdel(void **ap)
{
	int i;

	i = 0;
	while ((ap)[i] != 0)
		free((ap)[i]);
	ap = NULL;
	//return (**ap);
}
