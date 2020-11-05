#include <stdio.h>
float A,B,ans=1;
float power(float a,int b) {
  int i;
  for(i=1;i<=b;i++) {
  ans *= a;
}
  return ans;
}
int main(void) {
  do {
    printf("Enter Basenumber : ");
    scanf("%f",&A);
    printf("Enter Powernumber : ");
    scanf("%f",&B);
    int X= B;
    if(B!=X || B<0) {
      B = -1;
      printf("can't do this !!!\n\n");
  }
}while(B<0);
power(A,B);
printf("\n%f\n" ,ans);
return 0;
}
