/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupcase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scollon <scollon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:07:36 by scollon           #+#    #+#             */
/*   Updated: 2015/11/24 17:08:21 by scollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupcase(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}