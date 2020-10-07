#include <stdio.h>

int main( ) {
  int q,n,i,j;
  printf("How many rows you want in pyramid?");
  scanf("%d",&q);

  n=q+1;

  for (i=1; i<n; i++)
  {
    for (j=1; j<(2*n-1); j++)
    {
      if (j>=n-(i-1) && j<=n+(i-1))
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }

    }
    printf("\n");
  }
  return 0;
}
