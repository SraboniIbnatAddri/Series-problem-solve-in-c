//1^3 * 2^3 * 3^3 *.......* n^3

#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        result = result * i*i*i;
    }
    printf("\n result= %d\n",result);
    getch();
}
