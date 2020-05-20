/************************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                           *
 *                                                                                  *
 * main.c: Arquivo principal do programa covid19                                    *
 *                                                                                  *
 * Desenvolvido por: Gustavo Bacagine          <gustavo.bacagine@protonmail.com>    *
 *                   Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com>  *
 *                   Caio Elias Emerick Regino <caioregino.147@gmail.com>           *
 *                                                                                  *
 * Data: 14/05/2020                                                                 *
 * Data da última modificação: 14/05/2020                                           *
 ************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "../include/clear_buffer.h"
#include "../include/covid19.h"

int main(void){
    /* usado para testar o Makefile
    char foo[5] = "Olá";
    char bar[9] = "Mundo!!!";
    
    system("clear");
    
    printf("%s %s\n", foo, bar);
    
    getchar();
    */
    
    int p, d, count;
    
    scanf("%d", &p);
    
    char name_country[p][51];
    
    for(count = 0; count < p; count++){
        scanf("%s", name_country[count++]);
        clear_buffer();
    }
    
    scanf("%d", &d);
    clear_buffer();
    
    
    /*printf("Numero total de congagios por pais\n");
    for(count = 0; count < p; count++){
        printf("%s: %d\n", );
    }
    
    scanf("%d", %d);
    printf("Dia com maior numero de contagios por pais\n");
    for(count = 0; count < d; count++){
        printf("%s: %d (%d)\n", );
    }

    printf("Dia com maior numero de contagios\n");
    printf("%d: %d\n", );
    
    printf("Maior sequencia crescente de contagios por pais\n");
    for(count = 0; count < ; count++){
        printf("%s: %d\n", );
    }*/

    return 0;
}

