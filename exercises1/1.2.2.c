#include <stdio.h>
#include <math.h>
 
int main(void)
{
  int n, insertion, merge;
  for(n=1; n<100; n++){
    insertion = 8 * (n * n);
    merge = 64 * n * log2(n);
  if(insertion <= merge){
    printf("%d \n", n);
  }
}
  return 0;
}