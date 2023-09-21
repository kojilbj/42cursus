#include<unistd.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	str = s;
	i = 0;
	if (n == 0)
		return ;
	while (i < (int)n)
	{
		str[i] = 0;
		i++;
	}
}

// #include<string.h>
// #include<stdio.h>
// int main() {
//     char buffer[20];

//     // テストケース 1: バッファをゼロで埋める
//     strcpy(buffer, "Hello, World!");
//     ft_bzero(buffer, sizeof(buffer));
//     printf("Test Case 1: %s\n", buffer);  // 期待される出力: 空文字列

//     // テストケース 2: バッファの一部をゼロで埋める
//     strcpy(buffer, "Hello, World!");
//     ft_bzero(buffer, 2);
//     printf("Test Case 2: %s\n", buffer);  // 期待される出力: "Hello,\0\0\0\0\0orld!"

//     return 0;
// }