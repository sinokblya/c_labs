#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,x,res;
    printf("Enter a ->");
    scanf("%f",&a);
    printf("Enter b ->");
    scanf("%f",&b);
    printf("Enter x !=0 ->");
    scanf("%f",&x);
    if (x==0)
        {
            printf("x=0\n");
            return 0;
        }
    else if ((a * b)<x)
        res = a*b/x;
    else if ((a*b-x<0.000001))
        {
            printf("a * b = x \n");
            return 0;
        }
    else 
        res = a*b-x;

    printf("Result: %f\n", res);
    return 0;
}


