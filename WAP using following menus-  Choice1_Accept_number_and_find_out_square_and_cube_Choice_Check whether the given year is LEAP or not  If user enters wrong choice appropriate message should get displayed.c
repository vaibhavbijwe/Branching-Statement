#include<stdio.h>
void main()
{
    char ar;
    int a,b;
    printf("Enter The Operator - + : \t");
    scanf("%c",&ar);
    printf("Enter a Two No");
    scanf("%d\n %d",&a,&b);
    switch (ar)
    {
    case '+':
        a=a+b;
        printf("Addition of two no is \t %d",a);
        break;
    
    case '-':
        a=a-b;
        printf("Addition of two no is \t %d",a);
        break;
    
    default:
        printf("Only Addition and Substraction");
        break;
    }
}