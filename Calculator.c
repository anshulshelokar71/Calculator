#include <stdio.h>
#include <math.h>
struct num
{
    float i, j;
} num;

int read()
{
    printf("Enter two numbers:");
    scanf("%f %f", &num.i, &num.j);
}
float add()
{
    return num.i + num.j;
}

float sub()
{
    return num.i - num.j;
}
float multiply()
{
    return num.i * num.j;
}
float div()
{
    return num.i / num.j;
}

int exponent(){
    return pow(num.i,num.j);
}

int main()
{
    int n,i = 1;
    while (i)
    {
    
    printf("********OPERATIONS*********\n");
    printf("0.Enter 0 to read the numbers\n1.Enter 1 for addition\n2.Enter 2 for subtraction\n3.Enter 3 for multiplication\n4.Enter 4 for division\n5.Enter 5 for exponent\n");
    scanf("%d", &n);
    
        switch (n)
        {
        case 0:
            read();
            break;
        case 1:
            printf("%f\n", add());
            break;
        case 2:
            printf("%f\n", sub());
            break;
        case 3:
            printf("%f\n", multiply());
            break;
        case 4:
            printf("%f\n", div());
            break;
        case 5:
           printf("%d\n",exponent());
           break;
        case 6:
             i = 0;
            break;
        }
    }
    return 0;
}