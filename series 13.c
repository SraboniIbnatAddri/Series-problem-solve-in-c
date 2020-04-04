//1 * 3 * 5 *.......* n

#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("Enter any number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        result=result*i;
    }
    printf("\n result= %d\n",result);
    getch();
}
