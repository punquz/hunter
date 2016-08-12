#include <stdio.h> 
#include <math.h> 
#include <limits.h> 
#define DIGITS_TO_REMOVE 3
int pz(int* cup, int begin, int end, int previous, int max)
{ 
     int i; 
     int min = begin; 
 
 
     for (i = begin; i <= end; ++i){ 
         if (cup[min] > cup[i]){ 
             min = i; 
         } 
     } 
 
 
     return previous * pow(10, max - end + 1) + (max > end ? pz(cup, min + 1, end + 1, cup[min], max) : cup[min]); 
 } 
 
 
 int main()
 { 
     int cup[(const int)ceil(log10(INT_MAX))]; 
     int bar = 24635; // Assumed to be larger than pow(10, DIGITS_TO_REMOVE) - 1 
     int size = ceil(log10(bar)); 
     int i; 
     int min = size - DIGITS_TO_REMOVE; 

 


     for (i = 1; bar > 0; bar /= 10, ++i){ 
         cup[size - i] = bar % 10; 
 
 
         if (i >= DIGITS_TO_REMOVE && cup[size - i] <= cup[min]){ 
             min = size - i; 
         } 
     } 
 
 
     printf("%d", pz(cup, min + 1, DIGITS_TO_REMOVE + 1, cup[min], size - 1)); 
     return 0; 
 } 
