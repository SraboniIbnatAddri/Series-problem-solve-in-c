//1.5 + 3.5 + 5.5 +.......+N

#include<stdio.h>
int main()
{
    float n,i,sum=0;

    printf("Enter any number: ");
    scanf("%f",&n);

    for(i=1.5;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%.2f\n",sum);
    getch();
}
