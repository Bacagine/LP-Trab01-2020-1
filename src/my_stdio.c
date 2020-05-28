/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                         *
 *                                                                                *
 * Copyright (C) 2020                                                             *
 *                                                                                *
 * stdout.c: Arquivo com o desenvolvimento das funções da biblioteca stdout.h     *
 *                                                                                *
 * covid19 é uma aplicação que recebe e processa informações a respeito do numero *
 * de contagios por Covid-19 em um conjunto de paises num determinado periodo de  *
 * tempo.                                                                         *
 *                                                                                *
 * Desenvolvidores: Gustavo Bacagine          <gustavo.bacagine@protonmail.com>   *
 *                  Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com> *
 *                  Caio Elias Emerick Regino <caioregino.147@gmail.com>          *
 *                                                                                *
 * Este programa é software livre; você pode redistribuí-lo e/ou modificá-lo      *
 * sob os termos da GNU General Public License conforme publicada pela Free       *
 * Software Foundation; quer a versão 2 da licença, ou (conforme você escolha)    *
 * qualquer versão posterior.                                                     *
 *                                                                                *
 * Este programa é distribuído com a esperança de que seja útil, mas SEM          *
 * QUALQUER GARANTIA; mesmo sem a garantia implícita de MERCANTIBILIDADE OU       *
 * ADEQUAÇÃO A UM DETERMINADO PROPÓSITO. Para mais detalhes, veja a               *
 * GNU General Public License.                                                    *
 *                                                                                *
 * Você deve ter recebido uma cópia da GNU General Public License juntamente      *
 * com este programa; caso contrário, veja <https://www.gnu,org/licenses/>        *
 *                                                                                *
 * Data:                                                                          *
 * Data da última modificação: 27/05/2020                                         *
 **********************************************************************************/

#include <stdio.h>
#include "../include/my_stdio.h"

void input(void){
    setlocale(LC_ALL, ""); // Permite o uso de caracteres especiais
    int p, d; // Quantidade de Países, Quantidade de Dias
    
    scanf("%d", &p); // Lê a quanditade de países
            
    /* Caso o usuário digite um número menor ou
     * igual a zero é pedido para que digite outro
     * valor para p */
    while(p <= 0){
        clear_screen();
        fprintf(stderr, "Erro! A quantidade de países deve ser maior 0\n");
        fprintf(stderr, "Por favor digite outro valor:\n");
        scanf("%d", &p);
    }
    
    /* Matriz de caracteres onde os nomes dos
     * países devem ser armazenados.*/
    char name_country[p][51]; // Declara uma matriz de países
    
    clear_buffer(); // Limpa o buffer do terminal
    
    le_paises(p, name_country);
    
    scanf("%d", &d); // Lê a quantidade de países
    
    int mat_contagions[p][d]; // Declara uma matriz de contagios
    
    // Lê a quantidade de contagios para cada país
    le_contagios(p, d, mat_contagions);
    
    clear_buffer();
    
    /* Mostra as mensagens de saída do programa
     * Para mais informações veja a biblioteca
     * stdout.h */
    output(p, d, name_country, mat_contagions);
}

void output(int p, 
            int d, 
            char name_country[][TAM_MAX_NOME + 1], 
            int mat_contagions[p][d]){
    setlocale(LC_ALL, "");
        
    int total_contagions_country;
    int max_contagion_day_country;
    int max_contagion_number;
    
    printf("\nNumero total de congagios por pais\n");
    for(int count = 0; count < p; count++){
        total_contagions_country = total_contagios_pais(d, mat_contagions, count);
        printf("%s: %d\n", name_country[count], total_contagions_country);
    } // Até aqui tudo OK =)
    
    
    printf("\nDia com maior numero de contagios por pais\n");
    for(int count = 0; count < p; count++){
        dia_maior_contagio_pais(d, mat_contagions, count, &max_contagion_day_country, &max_contagion_number);
        printf("%s: %d (%d)\n", name_country[count], max_contagion_day_country, max_contagion_number);
    }
    
    /*
    printf("\nDia com maior numero de contagios\n");
    printf("%d: %d\n", );
    
    printf("\nMaior sequencia crescente de contagios por pais\n");
    for(count = 0; count < ; count++){
        printf("%s: %d\n", );
    }
    */
    getchar();
}

/* Usado para testar se as 
 * váriaveis estão sendo 
 * recebidas corretamente */
/*
printf("\nO valor de p é = %d\nE o valor de d é = %d\n", p, d);
for(int count = 0; count < p; count++){
    printf("%s\n", name_country[count]);
    //puts(name_country[count]);
}

printf("\nOs contagios por cada país são:\n");
for(int i = 0; i < p; i++){
    for(int j = 0; j < d; j++){
        printf("%d ", mat_contagions[i][j]);
    }
    printf("\n");
}
*/
