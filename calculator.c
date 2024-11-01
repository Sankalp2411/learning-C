#include <stdio.h>
int main()
{
    int a,b,result;
    char c;
    prinitf("use 'A' for addition, 'S' for substraction, 'M' for multiplication, 'D' for division");
    scanf("%d %c %d",&a,&c,&b);
    if (c == 'A' )
    {
        printf("%d%c%d=%d",a,c,b,a+b);
    }
    else if (c == 'S')
    {
        printf("%d%c%d=%d",a,c,b,a-b);
    }
    else if (c == 'M')
    {
        printf("%d%c%d=%d",a,c,b,a*b);
    }
    else if (c == 'D')
    {
        printf("%d%c%d=%d",a,c,b,a/b);
    }
    else
    {
        printf("wrong choice");
    }
}