#include <stdio.h>
#include <math.h>
 
int main(void)
{
  double y1, y2;
  int hoge = 0;
  for(int n=1; n<100; n++){
    y1 = 100 * (n * n);
    y2 = pow(2.0, n);
  if(y1 > y2){
    hoge = n;
  }
}
  printf("%d \n", hoge);
  return 0;
}