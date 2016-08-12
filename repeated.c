#include <stdio.h> 
   
 int main() 
 { 
   int pz[100], n,i,j; 
   
   printf("Enter the number of elements\n"); 
   scanf("%d", &n); 
   
   printf("Enter the elements\n", n); 
   
   for (i = 0; i < n; i++) 
     scanf("%d", &pz[i]); 
 	 
 	 for ( i = 0 ; i < n ; i++ ) 
      { 
 		for ( j = 0 ; j < n ; i++ ) 
 		{
 			if(pz[i]==pz[j]) 
 			printf("\n %d",pz[i]); 
 			break; 
 		} 
 	  
 	 break; 
 	 } 
 	  
 	 return 0; 
 	  
 } 

