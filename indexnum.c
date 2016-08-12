#include<stdio.h>
int main()
{
    int i,j,n,a[100];
    printf("enter the no of element\n ");
    scanf("%d",&n);
    printf("enter the array elements in sorted manner\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
        if(a[j]==j)
             printf("%d",a[j]);
             
    }
    return 0;
}
