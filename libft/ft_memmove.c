#include <stdio.h>
#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *)src;
	d = (char *)dst;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		i = 1;
		while (i < (int)len + 1)
		{
			d[len - i] = s[len - i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

// #include<string.h>

// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];

//     // テストケース 1: オーバーラップなしのコピー
//     // ft_memmove(dest, src, strlen(src) + 1);
//     memmove(dest, src, strlen(src) + 1);
//     printf("Test Case 1: %s\n", dest);  // 期待される出力: "Hello, World!"

//     // テストケース 2: src と dest がオーバーラップ
//     memmove(src + 3, src, strlen(src) + 1);
//     // ft_memmove(src + 3, src, strlen(src) + 1);
//     printf("Test Case 2: %s\n", src + 3);  // 期待される出力: "lo, World!"

//     return (0);
// }