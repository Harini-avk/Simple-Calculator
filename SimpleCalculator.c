#include <stdio.h>

int main()
{
    float num1,num2,resultnum;
    char operator;
    printf("please enter the operator (+,-,*,/):");
    scanf("%c",&operator);
    
    printf("\nenter the numbers:");
    scanf("%f%f",&num1,&num2);
    
    if (operator=='+')
    {
     resultnum=num1+num2;
     printf("sum of both the numbers is %0.2f+%0.2f=%0.2f",num1,num2,resultnum);
    }
    
    else if (operator=='-')
    {
     resultnum=num1-num2;
     printf("difference of both the numbers is %0.2f-%0.2f=%0.2f",num1,num2,resultnum);
    }
     else if (operator=='*')
    {
      resultnum=num1*num2;
      printf("the multiplication of both the numbers is %0.2f*%0.2f=%0.2f",num1,num2,resultnum);
    }
     else if (operator=='/')
    {
      resultnum=num1/num2;
      printf("the division of both the numbers is %0.2f/%0.2f=%0.2f",num1,num2,resultnum);
    }
    return 0;
}
