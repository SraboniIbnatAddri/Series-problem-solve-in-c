//2 + 4 + 6 +.......+N

#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nsum = %d\n",sum);
    getch();
}
