#include <stdio.h>

int main() {

    double A , B , C , sort ;
    scanf("%lf %lf %lf",&A ,&B ,&C);
    if (A < B)
    {
        sort = A ;
        A = B ;
        B = sort ;
    }
 if (A<C)
 {
     sort = A ;
     A = C ;
     C = sort ;
 }
 if(B < C)
 {
     sort = B ;
     B = C ;
     C = sort ;
 }
 if (A>=B+C)
 {
     printf("NAO FORMA TRIANGULO\n");
 }
  else if (A*A == B*B+C*C)
 {
     printf("TRIANGULO RETANGULO\n");
 }
  else if (A*A > B*B+C*C)
 {
     printf("TRIANGULO OBTUSANGULO\n");
 }
  else if (A*A < B*B+C*C)
 {
     printf("TRIANGULO ACUTANGULO\n");
 }
 if (A==B && B==C)
 {
     printf("TRIANGULO EQUILATERO\n");
 }
  else if (A==B || B==C || A==C)
 {
     printf("TRIANGULO ISOSCELES\n");
 }

    return 0;
}
