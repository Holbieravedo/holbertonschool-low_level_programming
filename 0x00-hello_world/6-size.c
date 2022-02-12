#include<stdio.h>

/**
 * main - init
 * Return: Always 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", zizeof(char));
printf("Size of an int: %zu byte(s)\n", zizeof(int));
printf("Size of a long int: %zu byte(s)\n", zizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", zizeof(long long int));
printf("Size of a float: %zu byte(s)\n", zizeof(float));
return (0);
}
