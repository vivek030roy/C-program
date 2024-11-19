#include<stdio.h>
int main()
{
    int a[5][5],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
        {
            printf("enter elemenrts:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("\n[%d]",a[i][j]);
    }
    }
return 0;

}