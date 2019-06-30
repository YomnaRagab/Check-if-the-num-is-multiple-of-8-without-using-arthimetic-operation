/*Author:Yomna Ragab*/
/* Check if the num is multiple of 8 without using arthimetic operation */
// 8 =0b1000
// 16=0b10000
//if the number is multiple of 8 the first 3 digits will be zero
#include <stdio.h>
void main(void)
{
  int num;
  printf("Enter the number ");
  scanf("%d",&num);

  if ((num&0b111)==0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

}
