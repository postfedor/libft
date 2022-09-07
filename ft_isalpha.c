/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalfredi <dalfredi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:16:44 by dalfredi          #+#    #+#             */
/*   Updated: 2021/10/16 19:16:44 by dalfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((('a' <= c) && (c <= 'z'))
		|| (('A' <= c) && (c <= 'Z')))
		return (1);
	return (0);
}