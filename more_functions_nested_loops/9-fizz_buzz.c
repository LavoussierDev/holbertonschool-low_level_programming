#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
		/* mult, mulf;*/

	for (x = 1; 1 < 100; x++)
	{
	/*	mult = '0' + (x * 3);
		mulf = '0' + (x * 5);*/

		if (x > 9)
		{
			putchar('0' + (x / 10));
		}
/*		if (x == mult)
		{
			printf("Fizz");
		}
		if (x == mulf)
		{
			printf("Buzz");
		}
		else if (x == mult && x == mulf)
		{
			printf("FizzBuzz");
		}*/
		else
		{
			putchar('0' + (x % 10));
		}
	}
}
