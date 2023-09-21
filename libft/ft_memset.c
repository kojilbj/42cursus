#include<unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*str;

	str = b;
	i = 0;
	while (i < (int)len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}


// #include <stdio.h>
// #include<string.h>
// int main() {
//     char buffer[20];

//     // テストケース 1: バッファをゼロで埋める
//     ft_memset(buffer, 0, sizeof(buffer));
//     // memset(buffer, 0, sizeof(buffer));
//     printf("Test Case 1: %s\n", buffer);  // 期待される出力: 空文字列

//     // テストケース 2: バッファを 'A' で埋める
//     ft_memset(buffer, 'A', sizeof(buffer));
//     // memset(buffer, 'A', sizeof(buffer));
//     printf("Test Case 2: %s\n", buffer);  // 期待される出力: "AAAAAAAAAAAAAAAAAAAA"

//     return 0;
// }