#include <stdio.h>
#include "../include/stdout.h"
#include "../include/covid19.h"

void output(int p, int d, char name_country[][TAM_MAX_NOME + 1]){
    setlocale(LC_ALL, "");
    
    int count;
    
    printf("\nO valor de p é = %d\nE o valor de d é = %d\n", p, d);
    for(count = 0; count <= p; count++){
        printf("%s", name_country[count]);
        //puts(name_country[count]);
    }
    /*    
    printf("Numero total de congagios por pais\n");
    for(count = 0; count < p; count++){
        printf("%s: %d\n", name_country[count]);
    }
    
    printf("Dia com maior numero de contagios por pais\n");
    for(count = 0; count < d; count++){
        printf("%s: %d (%d)\n", name_country[count], ,);
    }

    printf("Dia com maior numero de contagios\n");
    printf("%d: %d\n", );
    
    printf("Maior sequencia crescente de contagios por pais\n");
    for(count = 0; count < ; count++){
        printf("%s: %d\n", );
    }*/
    getchar();
}
