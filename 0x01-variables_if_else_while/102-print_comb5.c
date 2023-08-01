#include<stdio.h>
/**
 * reduce - a fuction I created so as to reduce
 *          the number of lines in my main function.
 * @i: first number
 * @j: second number
 * @k: third number
 * @l: last number
 *
 * Return: nothing
 */
void reduce(int i, int j, int k, int l)
{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);
	if (!(i == '9' && j == '8' && k == '9' && l == '9'))
	{
		putchar(',');
		putchar(' ');
	}
}

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0 (success always)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((i == k) && (j >= l))
					{
						continue;
					}
					else if (i > k)
					{
						continue;
					}
					else
					{
						reduce(i, j, k, l);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
