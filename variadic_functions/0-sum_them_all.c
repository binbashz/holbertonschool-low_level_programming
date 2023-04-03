#include<stdio.h>
#include<stdarg.h>
/**
  * sum_them_all - sum of n numbers.
  * @n:numbers of parameters.
  * Return: sum.
  *
  */
	int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list lista;

	va_start(lista, n);

	for (i = 0; i < n; i++)
{
	sum += va_arg(lista, int);
}
	va_end(lista);
	if (n == 0)
{
	return (0);
}
	return (sum);
}
