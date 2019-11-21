#include<stdio.h>

int main()
{
    double a,b,max;
    printf("a= ");
    scanf("%lf",&a);
    printf("b= ");
    scanf("%lf",&b);
    
    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("最大值为：%f\n",max);
    
    return 0;
}
