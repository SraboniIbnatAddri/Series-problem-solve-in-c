//1 + 1/2 +.......+ 1/n

#include<stdio.h>
int main()
{
    double n,i,sum=0;

    printf("Enter any number: ");
    scanf("%lf",&n);


    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
        if(i==1)
        {
            printf("\n1 +");
        }
        else if(i==n)
        {
            printf("1/%.2lf)",i);
        }
        else{
            printf("(1/%.2lf)",i);
        }
    }
    printf("\nsum: %.2lf\n",sum);
    getch();
}
