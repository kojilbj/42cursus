#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	space_left;
	size_t	i;

	if (dstsize == 0 && dest == 0)
		return ft_strlen((char *)src);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	space_left = dstsize - dest_len - 1;
	i = 0;
	while (src[i] != '\0' && i < space_left)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (src_len > space_left)
		return (dest_len + src_len);
	else
		return (dest_len + i);
}

// #include<stdio.h>
// #include<string.h>

// int main() {
//     char dest[20] = "Hello, ";
//     const char *src1 = "World!";
//     const char *src2 = "OpenAI's GPT-3.5";

//     // テストケース 1: src1 を dest に追加
//     size_t result1 = ft_strlcat(dest, src1, sizeof(dest));
//     // size_t result1 = strlcat(dest, src1, sizeof(dest));
//     printf("Test Case 1: Result=%zu, Concatenated String=%s\n", result1, dest);
//     // 期待される出力: Result=13, Concatenated String="Hello, World!"

//     // テストケース 2: src2 を dest に追加（サイズオーバー）
//     size_t result2 = ft_strlcat(dest, src2, sizeof(dest));
//     // size_t result2 = strlcat(dest, src2, sizeof(dest));
//     printf("Test Case 2: Result=%zu, Concatenated String=%s\n", result2, dest);
//     // 期待される出力: Result=24, Concatenated String="Hello, World!OpenAI's"

//     return 0;
// }