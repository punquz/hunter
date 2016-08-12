#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a[100],i,k=0,n;
    printf("enter the number of elements\n");
    scanf("%d/n",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
        
             k=k^a[i];
            
            
        }
        printf("the unique number is k=%d",k);
        

    return 0;
}

