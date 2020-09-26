#include <stdio.h>
int main(void) {
printf("Menu\n");
printf("1. Add + \n");
printf("2. Subtract (-) \n");
printf("3. Multiply (*) \n");
printf("4. Divide (/) \n");
printf("5. Modulo (%) \n");
float number1,number2;
int Calculate,div,mod,mod1;
printf("Enter Number 1 : ",number1);
scanf("%f",&number1);
printf("Enter Number 2 : ",number2);
scanf("%f",&number2);
printf("Select Choice : ",Calculate);
scanf("%d",&Calculate);
switch(Calculate){
  case 1 :
  printf("Answer is : %.3f + %.3f =%.3f ",number1,number2,number1+number2);break;
  case 2 :
  printf("Answer is : %.3f - %.3f =%.3f ",number1,number2,number1-number2);break;
  case 3 :
  printf("Answer is : %.3f * %.3f =%.3f ",number1,number2,number1*number2);break;
  case 4 :
  number2+= 1;
  div=(int)number2;
  number2-=1;
    switch(div){
    case 1 :
    printf("Divide by Zero!!! ");break;
     default: printf("Answer is : %.3f / %.3f =%.3f ",number1,number2,number1/number2);break;
    }
  break;
case 5:
mod = (int)number1;
mod1 =(int)number2;
printf("Answer is : %.3f %% %.3f =%d ",number1,number2,mod%mod1);break;
}
  return 0;
}