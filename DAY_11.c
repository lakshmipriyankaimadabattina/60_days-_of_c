
#include <stdio.h>
int main() 
{
    int a,b,c;
  
  printf("Enter numbers:");
  scanf("%d %d %d",&a,&b,&c);

  if ((a>=b)&&(a>=c)) {
    if (b>=c) {
      printf("\nDesc : %d %d %d",a,b,c);
      printf("\nAsc : %d %d %d",c,b,a);
    } else {
      printf("\nDesc : %d %d %d",a,c,b);
      printf("\nAsc : %d %d %d",b,c,a);
    }
  } else if ((b>=a)&&(b>=c)) {
     if (a>=c) {
        printf("\nDesc : %d %d %d",b,a,c);
     }
  } else {
    if (b>=a) {
      printf("\nDesc : %d %d %d",c,b,a);
      printf("\nAsc : %d %d %d",a,b,c);
    } else {
      printf("\nDesc : %d %d %d",c,a,b);
      printf("\nAsc : %d %d %d",b,a,c);
    }
  }

}
/*ascending order and descending order
if else
DAY_11*/