#include<unistd.h>

static size_t	ft_length(char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	length;
	int			i;

	i = 0;
	length = ft_length(dest);
	if(dstsize == 0 || dstsize <= length)
		return (dstsize += ft_length((char *)src));
	while (src[i] && (int)dstsize - (int)length - 1 > i)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (length + i);
}

#include<stdio.h>
#include<string.h>

int main() {
    char dest[20] = "Hello, ";
    const char *src1 = "World!";
    const char *src2 = "OpenAI's GPT-3.5";

    // テストケース 1: src1 を dest に追加
    size_t result1 = ft_strlcat(dest, src1, sizeof(dest));
    // size_t result1 = strlcat(dest, src1, sizeof(dest));
    printf("Test Case 1: Result=%zu, Concatenated String=%s\n", result1, dest);
    // 期待される出力: Result=13, Concatenated String="Hello, World!"

    // テストケース 2: src2 を dest に追加（サイズオーバー）
    size_t result2 = ft_strlcat(dest, src2, sizeof(dest));
    // size_t result2 = strlcat(dest, src2, sizeof(dest));
    printf("Test Case 2: Result=%zu, Concatenated String=%s\n", result2, dest);
    // 期待される出力: Result=24, Concatenated String="Hello, World!OpenAI's"

    return 0;
}