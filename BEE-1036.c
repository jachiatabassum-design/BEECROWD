#include <stdio.h>
 #include <math.h>
int main() {

    double a , b ,c , y , x , delta  ;
    scanf("%lf %lf %lf",&a,&b,&c) ;
    delta =  (b*b) - (4 * a * c) ;
    if ( a == 0 || delta<0  )
    {
        printf("Impossivel calcular\n") ;
    }
    else
{
    delta = sqrt( (b*b) - (4 * a * c)) ;
     y = (-b - delta)/ (2 * a) ;
    x = (-b + delta) / (2 * a) ;
    printf("R1 = %.5lf\n",x) ;
    printf("R2 = %.5lf\n",y) ;
}
    return 0;
}
