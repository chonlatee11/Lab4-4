#include <stdio.h>
int main(void) {
  float l1, l2, h, suml, sum, difference, percent;
  printf("Enter L1 :");
  scanf("%f",&l1);
  printf("Enter L2 :");
  scanf("%f",&l2);
  printf("Enter Hight :");
  scanf("%f",&h);
  difference = l2 - l1;                 //  คำนวนหาผลต่างของ L2,L1
  percent = difference / l1 * 100;      //  คำนวนหาเปอร์เซ็นของผลต่างของ L2,L1
  if(percent>40 || percent == 40){ // กำหนดเงื่อนไขกรณีผลต่างมากกว่า 40 % หรือ = 40 %
    suml = l1 + l2;                     // หาค่าผลรวมของด้าน
    sum = 0.5 * h * suml;               // คำนวนตามสูตร
    printf("L2 more than L1 %.2f Percent\n",percent);//แสดงผลค่าความต่างของด้านเป็นเปอร์เซ็น
    printf("Area = %.2f",sum);  //แสดงผลกำรคำนวน
  }
  else{
    if(percent<40 && l1 != l2){       // กำหนดเงื่อนไขกรณีน้อยกว่า 40 % และ l1,l2 ไม่เท่ากัน
    printf("can't calculate becouse L2 Less than  L1 %.2f Percent",percent);//แสดงผล
    }
    else{
      if(l2==l1){ //กำหนดเงื่อนไขกรณีl2,l1 เท่ากัน
      printf("can't calculate becouse L2 = L1"); // แสดงผล
      }
    }
  }
  return 0;
}