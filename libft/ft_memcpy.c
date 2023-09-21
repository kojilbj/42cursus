/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:58:48 by kojwatan          #+#    #+#             */
/*   Updated: 2023/09/21 13:05:45 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (s == NULL && d == NULL)
		return (NULL);
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include<string.h>
// #include<stdio.h>
// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];

//     // テストケース 1: 文字列をコピー
//     ft_memcpy(dest, src, strlen(src) + 1);
//     // memcpy(dest, src, strlen(src) + 1);
//     printf("Test Case 1: %s\n", dest);  // 期待される出力: "Hello, World!"

//     // テストケース 2: 一部のデータをコピー
//     char partialSrc[] = "Hello, World!";
//     char partialDest[] = "Goodbye, Cruel World!";
//     // ft_memcpy(partialDest + 8, partialSrc + 6, 6);
//     memcpy(partialDest + 8, partialSrc + 6, 6);
//     printf("Test Case 2: %s\n", partialDest);  // 期待される出力: "Goodbye, World!"

//     return (0);
// }