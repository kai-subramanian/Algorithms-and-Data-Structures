#include <stdio.h>
int main()
{
int ptr = 5, n=5;
ptr = malloc(n * sizeof(int));
printf("%d", ptr);
return 0;
}

