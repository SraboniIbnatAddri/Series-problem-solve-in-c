//1^2 * 2^2 * 3^2 *.......* n^2

#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        result = i*i;
    }
    printf("\n result= %d\n",result);
    getch();
}

