// #include<unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s2 || *s1) && n > 0)
	{
		if (*s2 != *s1)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include<stdio.h>

// int main(void) {
//     char str1[] = "apple";
//     char str2[] = "applesauce";

//     int result = ft_strncmp(str1, str2, 6);

//     if (result < 0) {
//         printf("%s comes before %s\n", str1, str2);
//     } else if (result > 0) {
//         printf("%s comes before %s\n", str2, str1);
//     } else {
//         printf("%s and %s are equal\n", str1, str2);
//     }

//     return (0);
// }