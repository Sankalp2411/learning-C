#include <stdio.h>
int main()
{
    int number1,number2,result,operation;
    printf("enter first number\n");
    scanf("%d\n",&number1);
    printf("enter second number\n");
    scanf("%d\n",&number2);
    printf("OPERATIONS\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    printf("enter operation\n");
    scanf("%d\n"&operation);
    if opertion == 1
    {
        result = number1 + number2;
        printf("addition of %d and %d is %d",number1,number2,result);
    }
    else if operator == 2
    {
        result = number1 - number2;
        printf("substraction of %d and %d is %d",number1,number2,result);
    }
    else if operator == 3
    {
        result = number1 * number2;
        printf("multiplication of %d and %d is %d",number1,number2,result);
    }
    else if operator == 4
    {
        result = number1 / number2;
        printf("division of %d and %d is %d",number1,number2,result);
    }
    else
    printf("wrong choice");
}