#include <stdio.h>
int main()
{ long i,n,f;
printf("enter number to find factorial : ");
	scanf("%d",&n);
	f=i=1;
	
	for(i=1;i<=n;i++)
	{ f=f*i;
	}
	printf("the factorial of %d is %d",n,f);
}
