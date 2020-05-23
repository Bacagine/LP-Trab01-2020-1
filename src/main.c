/************************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                           *
 *                                                                                  *
 * covid19 é uma aplicação que recebe e processa informações a respeito do numero   *
 * de contagios por Covid-19 em um conjunto de paises num determinado periodo de    *
 * tempo.                                                                           *
 *                                                                                  *
 * main.c: Arquivo principal do programa covid19                                    *
 *                                                                                  *
 * Desenvolvido por: Gustavo Bacagine          <gustavo.bacagine@protonmail.com>    *
 *                   Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com>  *
 *                   Caio Elias Emerick Regino <caioregino.147@gmail.com>           *
 *                                                                                  *
 * Data: 14/05/2020                                                                 *
 * Data da última modificação: 20/05/2020                                           *
 ************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "../include/clear_buffer.h"
#include "../include/covid19.h"

int main(void){
    int p, d, count, i, j;
    
    scanf("%d", &p);
    
    char name_country[p][51];
    
    le_paises(p, name_country);
    
    scanf("%d", &d);
    
    int num_contagions[d][];
    
    le_contagios(p, d, num_contagions);
    
    printf("O valor de p é = %d\nE o valor de d é = %d\n", p, d);
    for(count = 0; count < p; count++){
        printf("%s\n", name_country[count]);
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

    return 0;
}

// COMENTARIOS INÚTEIS
    /* usado para testar o Makefile
    char foo[5] = "Olá";
    char bar[9] = "Mundo!!!";
    
    system("clear");
    
    printf("%s %s\n", foo, bar);
    
    getchar();*/
