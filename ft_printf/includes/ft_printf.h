/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:16:52 by kojwatan          #+#    #+#             */
/*   Updated: 2023/10/10 18:18:43 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

int     print_c(int c);
int     print_d(int nbr);
int     print_p(void *address);
int     print_s(const char *str);
int     print_u(unsigned int nbr);
int     print_x_cap(unsigned int nbr);
int     print_x(unsigned int nbr);
int     decide_fomat(char c, va_list *arg);
int     ft_printf(const char *str, ...);
int     digit_deci_to_hexa(size_t nbr);

#endif
