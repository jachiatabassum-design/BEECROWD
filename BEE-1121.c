#include <stdio.h>

int main() {

    float N ;
    scanf("%f",&N) ;
    int total = (int)(N * 100 + 0.5) ;
    printf("NOTAS:\n") ;
    printf("%d nota(s) de R$ 100.00\n",total / 10000) ;
    total %= 10000 ;
     printf("%d nota(s) de R$ 50.00\n",total / 5000) ;
    total %= 5000 ;
     printf("%d nota(s) de R$ 20.00\n",total / 2000) ;
    total %= 2000 ;
     printf("%d nota(s) de R$ 10.00\n",total / 1000) ;
    total %= 1000 ;
     printf("%d nota(s) de R$ 5.00\n",total / 500) ;
    total %= 500 ;
     printf("%d nota(s) de R$ 2.00\n",total / 200) ;
    total %= 200 ;
    printf("MOEDAS:\n") ;
     printf("%d moeda(s) de R$ 1.00\n",total / 100) ;
    total %= 100 ;
     printf("%d moeda(s) de R$ 0.50\n",total / 50) ;
    total %= 50 ;
     printf("%d moeda(s) de R$ 0.25\n",total / 25) ;
    total %= 25 ;
     printf("%d moeda(s) de R$ 0.10\n",total / 10) ;
    total %= 10 ;
     printf("%d moeda(s) de R$ 0.05\n",total / 5) ;
    total %= 5 ;
     printf("%d moeda(s) de R$ 0.01\n",total / 1) ;
    return 0;
}
