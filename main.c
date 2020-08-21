#include <stdio.h>
int main(void) {
  float l1, l2, h, sum, difference, percent;
  printf("Enter L1 :");
  scanf("%f",&l1);
  printf("Enter L2 :");
  scanf("%f",&l2);
  printf("Enter Hight :");
  scanf("%f",&h);
  difference = l2 - l1;                 // คำนวนหาผลต่าง
  percent = difference / l1 * 100;      //คำนวนหาเปอร์เซ็นของผลต่าง
  if(percent>40 || percent == 40){      // กำหนดเงื่อนไขกรณีมากกว่า 40 % ให้คำนวนตามสูตร
    sum = 0.5 * h * l1 + l2;
    printf("L2 Less than L1 %.2f Percent\n",percent);
    printf("Area = %.2f",sum);
  }
  else{
    if(percent<40 && l1 != l2){
    printf("can't calculate becouse L2 Less than  L1 %.2f Percent",percent);
    }
    else{
      if(l2==l1){
      printf("can't calculate becouse L2 = L1");
      }
    }
  }
  return 0;
}