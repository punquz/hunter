#include <stdio.h>
 
int main()
{
  int pz[100], n, x, y, temp;
  int s1[100];
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (x = 0; x < n; x++)
    scanf("%d", &pz[x]);
 
  for (x = 0 ; x < ( n - 1 ); x++)
  {
    for (y = 0 ; y< (n - x - 1); y++)
    {
      if (pz[y] < pz[y+1]) /* For decreasing order use < */
      {
        temp       = pz[y];
        pz[y]   = pz[y+1];
        pz[y+1] = temp;
      }
    }
  }
 
  printf("largest possible number:\n");
 
 for ( x = 0 ; x < n ; x++ )
     printf("%d", pz[x]);
 
    
 
  return 0;
}
