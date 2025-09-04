
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float F, x, a, b, c, x1,x2, px;
    int n;
    
    printf("x1: ");
    scanf("%f",&x1);
    printf("x2: ");
    scanf("%f",&x2);
    printf("px: ");
    scanf("%f",&px);
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);
    
    x=x1;
    n=0;
    printf("\n\t Results : \n");
    
    while(x<x2){
        n=n+1;
        if((x>(c+b))&&(a!=0)){
            F=sqrt(x+a+b*b)/cos(x);
        }
        else if (x>c+b&&a==0){
            F=cos(x)/(log(a)+log(b));
        }
        else F=(a+b+x)/(x*x);
    
    
    printf("%i: x=%.3f\t F= %.3f \n",n,x,F);
    x=x+px;
    }
    getch();
    
    return 0;
}