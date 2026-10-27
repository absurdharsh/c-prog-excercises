#include <stdio.h>
int main ()
{
	int i=1,d,n,bin=0;
	printf("Enter number:");
	scanf("%d", &n);
	while (n>0)
	{
		d = n%2;
		n = n/2;
		bin  =  bin + d * i;
		i = i*10;
	}
	printf("bin = %d", bin);
	return 0;
}
