#include<stdio.h>
void main()
{
    char ch;
    int a,b,y;
    printf("Enter a Choice no 1 or 2 \t");
    scanf("%c",&ch);

    switch (ch)
    {
    case '1':
        printf("Enter a no \t ");
        scanf("%d",&a);
        printf("Square root of Entered No %d \t \n",a=a*a);
        printf("Cube Root of Entered No %d \t",a=a*3);
        break;
    case '2':
        printf("Enter the Year \t");
        scanf("%d",&y);
        if((y%400==0) || ((y%4==0) && (y%100!=0)))
        {
            printf("\nThis is Leap Year",y);
        }
        else
        {
            printf("\nIt is Not leap Year",y);
        }
        break;
    default:
            printf("Incorrect Choice");
        break;
    }


}
