#include <stdio.h>
#include <math.h>
 
int main(void)
{
  int i, j, key, a[7];
  a[1] = 5;
  a[2] = 2;
  a[3] = 4;
  a[4] = 6;
  a[5] = 1;
  a[6] = 3;


  for(j=2; j<7; j++){
    key = a[j];
    i = j-1;
    while (i>0 && a[i]<key){
      a[i+1]=a[i];
      i=i-1;
    a[i+1]=key;
    }
}
for(int n=1; n<=6; n++){
  printf("%d", a[n]);
}
  return 0;
}