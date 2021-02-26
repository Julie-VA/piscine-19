//00
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Hello";
	char str2[] = "HelLo";
	char str3[] = "Hello";
	char str4[] = "HelLo";
	int i;
	int j;

	i = ft_strcmp(str1, str2);
	j = strcmp(str3, str4);
	printf("%d\n%d", i, j);

	return (0);
}

//01
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Hello";
	char str2[] = "HelLo";
	char str3[] = "Hello";
	char str4[] = "HelLo";
	int i;
	int j;
	int size = 5;

	i = ft_strncmp(str1, str2, size);
	j = strncmp(str3, str4, size);
	printf("%d\n%d", i, j);

	return (0);
}

//02
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "les potes";
	char dest[] = "Coucou";
	char src2[] = "les potes";
	char dest2[] = "Coucou";
	
	ft_strcat(dest, src);
	strcat(dest2, src2);
	printf("%s\n%s", dest, dest2);

	return (0);
}

//03
#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "les potes";
	char dest[] = "Coucou";
	char src2[] = "les potes";
	char dest2[] = "Coucou";
	int size = 5;
	
	ft_strncat(dest, src, size);
	strncat(dest2, src2, size);
	printf("%s\n%s", dest, dest2);

	return (0);
}

//04
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "this is javatpoint with c and java";
	char to_find[] = "java";
	char str2[] = "this is javatpoint with c and java";
	char to_find2[] = "java";
	
	ft_strstr(str, to_find);
	strstr(str2, to_find2);
	printf("%s\n%s", str, str2);

	return (0);
}

//05
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "les potes";
	char dest[] = "Coucou";
	char src2[] = "les potes";
	char dest2[] = "Coucou";
	int size = 5;
	int i, j;
	
	i = ft_strlcat(dest, src, size);
	j = strlcat(dest2, src2, size);
	printf("%s, %d\n%s, %d", dest, i, dest2, j);

	return (0);
}
