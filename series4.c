//2 4 6............n
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i*2)
    {
      printf(" %d",i);
    }
    getch();
}
