#include <stdio.h> 
#include<string.h> 
int main() 
{ 
    char pz[100]; 
    int i,p; 
    scanf("%s",pz); 
    p=strlen(pz)-1; 
    for(i=p;i>=0;i--) 
    printf("%c",pz[i]); 
    return 0; 
} 
