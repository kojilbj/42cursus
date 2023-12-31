/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_deci_to_hexa.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:05:49 by kojwatan          #+#    #+#             */
/*   Updated: 2023/10/10 18:05:50 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digit_deci_to_hexa(size_t nbr)
{
	int	digit;

	digit = 0;
	while (nbr > 0)
	{
		digit++;
		nbr /= 16;
	}
	return (digit);
}
