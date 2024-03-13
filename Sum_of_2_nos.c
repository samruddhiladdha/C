#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter value of a: \n");
    scanf("%d",&a);

    printf("Enter value of b: \n");
    scanf("%d", &b);

    sum = a+b;
    printf("Sum is %d", sum);

    /*
    Without using 3rd variable 
    printf("Sum is %d",a+b);
    */  

    return 0;
}
