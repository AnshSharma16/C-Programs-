# include <stdio.h>
int main()
{  int n , i;
printf("enter a number of your choice to see the factors : ");
scanf("%d",&n);
printf("factor of %d are :",n);
for (i=1;i<=n;++i)
  {if(n%i==0)
      {printf("%d,",i);}
  
  }
}
