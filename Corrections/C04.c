//00
#include <stdio.h>

int main()
{
	char str[] = "Hello";
	int i;

	i = ft_strlen(str);
	printf("%d", i);

	return (0);
}

//01
int main()
{
	char str[] = "Hello";

	ft_putstr(str);

	return (0);
}

//02
#include <stdio.h>

int main()
{
	ft_putnbr(80);

	return (0);
}

//	-2147483648, 2147483647

//03
#include <stdio.h>

int main()
{
	char str[] = "   	++-+--9851e25";

	ft_atoi(str);
	printf("%s", str);

	return (0);
}

//04
#include <stdio.h>

int main()
{
	char base[] = "01";

	ft_putnbr_base(42, base);

	return (0);
}

//	-2147483648, 2147483647