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
 * Data da última modificação: 26/05/2020                                         *
 **********************************************************************************/

#include <stdio.h>
#include "../include/stdout.h"
#include "../include/covid19.h"

void output(int p, int d, char name_country[][TAM_MAX_NOME + 1], int mat_contagions[p][d]){
    setlocale(LC_ALL, "");
    
    /* Usado para testar se as 
     * váriaveis estão sendo 
     * recebidas corretamente */
    
    int count, i, j;
    
    printf("\nO valor de p é = %d\nE o valor de d é = %d\n", p, d);
    for(count = 0; count < p; count++){
        printf("%s", name_country[count]);
        //puts(name_country[count]);
    }
    printf("\nOs contagios por cada país são:\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < d; j++){
            printf("%d ", mat_contagions[i][j]);
        }
        printf("\n");
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
