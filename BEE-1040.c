#include <stdio.h>

int main() {

   float N1 , N2 , N3 , N4 , a , p ,t ;
   scanf("%f %f %f %f",&N1 , &N2 , &N3 , &N4) ;
   a = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) /  10.0 ;
   printf("Media: %.1f\n",a) ;

   if(a>=7.0)
   {
     printf("Aluno aprovado.\n") ;
   }
   else if(a<5.0)
   {
      printf("Aluno reprovado.\n") ;
   }
    else if(a>=5.0 && a<=6.9)
   {
       printf("Aluno em exame.\n") ;
     scanf("%f",&p) ;
    printf("Nota do exame: %.1f\n",p) ;
   t = (a+p)/2.0 ;
      if(t>=5.0)
   {
       printf("Aluno aprovado.\n") ;
   }
   else
   {
       printf("Aluno reprovado.\n") ;
   }
   printf("Media final: %.1f\n",t) ;
   }


    return 0;
}
