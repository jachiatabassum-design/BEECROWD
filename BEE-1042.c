#include <stdio.h>

int main() {

    int a , b , c ;
    scanf("%d %d %d",&a,&b,&c) ;
     int orig_a=a ;
     int orig_b=b ;
     int orig_c=c ;
     int temp ;
     if(a>b)
     {
         temp = a ; a=b ; b=temp ;

     }
     if(a>c)
     {
         temp = a ; a=c ; c=temp ;

     }
     if(b>c)
     {
         temp = b ; b=c ; c=temp ;

     }
     printf("%d\n%d\n%d\n",a,b,c) ;
     printf("\n") ;
     printf("%d\n%d\n%d\n", orig_a , orig_b , orig_c) ;


    return 0;
}
