#include <stdio.h>

int main()
{
    int n, x, y, z, res;
    int contador = 0;
    
    scanf("%i", &n);
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    
    if (n >= x + y + z)
		printf("3");
	else if (n >= x+y || n >= x+z || n >= y+z)
		printf("2");
	else if(n >= x || n >= y || n >= z)
		printf("1");
	else
		printf("0");
return 0;
}

