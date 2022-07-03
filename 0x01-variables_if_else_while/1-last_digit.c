#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Task 1 print the last digit of the number stored in the varriable n
 * Return (0)
*/

int main(void)
{
int n;
char last[] = "last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%s %d is %d and is", last, n, n % 10);
if (n % 10 > 5)
{
printf("greatet than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
