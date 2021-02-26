//00
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_iterative_factorial(10);
	printf("%d", i);
}

//01
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_recursive_factorial(-1);
	printf("%d", i);
}

//02
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_iterative_power(3, 5);
	printf("%d", i);
}

//03
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_recursive_power(-4, 3);
	printf("%d", i);
}

//04
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_fibonacci(9);
	printf("%d", i);
}

//05
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_sqrt(1999878400);
	printf("%d", i);
}

//06
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_is_prime(13);
	printf("%d", i);
}

//331999, 479001599

//07
#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_find_next_prime(9);
	printf("%d", i);
}

//331999, 479001599

//08
int main()
{
	int i = 0;
	i = ft_ten_queens_puzzle();
	printf("%d", i);
	return (0);
}
