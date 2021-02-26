//00
#include <stdio.h>

int main()
{
	char str1[] = "Salut";
	char str2[] = "Hello";
	char str3[] = "Salut";
	char str4[] = "Hello";

	ft_strcpy(str1, str2);
	strcpy(str3, str4);
	printf("%d\n%d", str1, str3);

	return (0);
}

//01
#include <stdio.h>

int main()
{
	char str1[] = "Salut";
	char str2[] = "Hello";
	char str3[] = "Salut";
	char str4[] = "Hello";
	int size = 4;

	ft_strcpy(str1, str2, size);
	strcpy(str3, str4, size);
	printf("%d\n%d", str1, str3);

	return (0);
}

//02
#include <stdio.h>

int main()
{
	char str[] = "hello";
	int i;
	
	i = ft_str_is_alpha(str);
	printf("%d\n%d", i);

	return (0);
}
