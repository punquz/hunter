#include <stdio.h> 
  int main()
  { 
       int num,i,j,f=0; 
       char pz[1000][10000],s[100000]; 
       scanf("%d",&num); 
       for(i=0;i<num;i++) 
           scanf("%s",pz[i]); 
       for(i=0;pz[0][i];i++){ 
         for(j=1;pz[j][i];j++){ 
             if(pz[j][i]!=pz[j-1][i]){ 
                 printf("%s",s); 
                 f=1; 
                 break; 
             } 
         } 
         if(f==1) 
         break; 
         else 
         s[i]=pz[0][i]; 
     } 
     return 0; 
 } 
