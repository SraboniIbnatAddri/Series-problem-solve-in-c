//1 3 5............n
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
      printf(" %d",i);
    }
    getch();
}
