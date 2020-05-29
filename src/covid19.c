/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                         *  
 *                                                                                *  
 * Copyright (C) 2020                                                             *
 *                                                                                *
 * covid19.h: Arquivo com o desenvolvimento do prototipos das funções             *
 * encontradas na biblioteca covid19.h                                            *
 *                                                                                *
 * covid19 é uma aplicação que recebe e processa informações a respeito do numero *
 * de contagios por Covid-19 em um conjunto de paises num determinado periodo de  *
 * tempo.                                                                         *
 *                                                                                *
 * Desenvolvedores: Gustavo Bacagine          <gustavo.bacagine@protonmail.com>   *
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
 * Data de início: 14/05/2020                                                     *
 * Data da última modificação: 28/05/2020                                         *
 **********************************************************************************/

#include <stdio.h>
#include "../include/my_stdio.h" /* Biblioteca com as funções 
                                  * de entrada e saida do 
                                  * programa */

void 
le_paises(int num_countrys, 
          char name_country[][TAM_MAX_NOME + 1]){
    setlocale(LC_ALL, ""); // Permite o uso de caracteres especias
    
    /* Lê os países digitados pelo usuário e salva em
     * uma matriz de caracteres */
    for(int count = 0; count < num_countrys; count++){
        scanf(" %50[^\n]", name_country[count]); /* Permite que o programa 
                                                  * aceite nomes com espaço */
    }
}

void 
le_contagios(int num_countrys, 
             int num_days, 
             int mat_contagions[num_countrys][num_days]){
    /* Lê os contágios digitados pelo usuário e salva
     * em uma matriz */
    for(int i = 0; i < num_countrys; i++){
        for(int j = 0; j < num_days; j++){
            scanf("%d", &mat_contagions[i][j]);
        }
    }
}

// DEU RUIM AQUI
int 
total_contagios_pais(int num_days, 
                     int mat_total_contagions_pais[][num_days], 
                     int index_contagion){
    /* Variável que guarda o
     * total de contágios */
    int total_contagions_coutry;
    
    /* Soma a quantidade de contagios digi-
     * tada pelo usuário para cada país */
    for(int i = 0; i <= index_contagion; i++){
        /* Atribui zero toda vez 
         * que entra aqui */
        total_contagions_coutry = 0;
        for(int j = 0; j < num_days; j++){
            // Soma o total de contágios de cada país
            total_contagions_coutry += mat_total_contagions_pais[i][j];
        }
    }
    /* Retorna o total de 
     * contágios para cada país */
    return total_contagions_coutry;
}

void 
dia_maior_contagio_pais(int num_days,
                        int mat_contagions[][num_days],
                        int index_contagion,
                        int *max_contagion_day_country,
                        int *max_contagion_number_country){
    // Verifica qual é o maior número    
    for(int i = 0; i <= index_contagion; i++){
        *max_contagion_number_country = 0;
        *max_contagion_day_country = 0;
        for(int j = 0; j < num_days; j++){
            if(i == 0 && j == 0){
                *max_contagion_number_country = mat_contagions[0][0];
                *max_contagion_day_country = j + 1;
            }
            else if(mat_contagions[i][j] >= *max_contagion_number_country){
                *max_contagion_number_country = mat_contagions[i][j];
                *max_contagion_day_country = j + 1;
            }
            /*else if(mat_contagions[i][j] <= *max_contagion_number_country){
                *max_contagion_number_country = mat_contagions[i][j];
                *max_contagion_day_country = mat_contagions[i][j];
            }*/
        }
    }
} // Até aqui tudo OK =)

/* NUNCA MAIS ALTERE ESTÁ FUNÇÃO
 * O PROBLEMA NÃO ESTÁ AQUI
 * MAS SIM NA FUNÇÃO -> total_contagios_pais */
void 
dia_maior_contagio(int num_countrys, 
                   int num_days, 
                   int mat_contagions[num_countrys][num_days], 
                   int *max_contagion_day, 
                   int *max_contagion_number){
    
    *max_contagion_number = 0;
    *max_contagion_day = 0;
    int soma_maior = 0;
    int day = 0;
    
    for(int j = 0; j < num_days; j++){
        *max_contagion_day = j+1;
        *max_contagion_number= 0;
        for(int i = 0; i < num_countrys; i++){
            *max_contagion_number += mat_contagions[i][j];
            if(*max_contagion_number > soma_maior){
                soma_maior = *max_contagion_number;
                day = *max_contagion_day;
            }
        }
    }
    
    *max_contagion_number = soma_maior;
    *max_contagion_day = day;
    
}

int 
maior_sequencia_crescente(int num_days, 
                          int mat_contagions[][num_days], 
                          int index_contagion){
    
    int vet_maior[num_days], maior = 0;
    
    for(int i = 0; i < index_contagion; i++){
        maior = 0;
        for(int j = 0; j < num_days; j++){
            vet_maior[j] = mat_contagions[i][j];
            if(mat_contagions[i][j] > mat_contagions[i][j + 1]){
                if(vet_maior[j] > mat_contagions[i][j]){
                    maior = vet_maior[j];
                }
            }
        }
    }
    
    return maior;
}

/* COMENTARIOS INÚTEIS
    if(i == 0 && j == 0){
        *max_contagion_number = mat_contagions[0][0];
        *max_contagion_day = j + 1;
    }
    else if(mat_contagions[i][j] >= *max_contagion_number){
        *max_contagion_day = j + 1;
        *max_contagion_number += mat_contagions[i][j];
    }
*/
/*
    //int maior;
    for(int j = 0; j < num_days; j++){
        // *max_contagion_number = 0;
        // maior = 0;
        // *max_contagion_day = 0;
        // *max_contagion_day = j;
        for(int i = 0; i < num_countrys; i++){
            if(i == 0 && j == 0){
                *max_contagion_number = mat_contagions[0][0];
                *max_contagion_day = j;
            }
            else if(mat_contagions[0][0] >= mat_contagions[i][j]){
                *max_contagion_number += mat_contagions[i][j];
                *max_contagion_day = j;
                //maior = *max_contagion_number;
                //if(maior < *max_contagion_number){}
            }
        }
    }
    // Usado para testes (LEMBRE-SE DE 
    // PAGAR ANTES DE ENTREGAR PARA 
    // O CIRO!!!)
    //printf("%d", maior); */

/* COMENTÁRIO TOPISSIMO!!!
    
    for(int j = 0; j < num_days; j++){
        *max_contagion_day = 1;
        for(int i = 0; i < num_countrys; i++){
        *max_contagion_number = 0;
            if(i == 0 && j == 0){
                printf("\nEntrei no if, valor de number: %d valor de day: %d", *max_contagion_number, *max_contagion_day);
                *max_contagion_number = mat_contagions[i][j];
                *max_contagion_day = j+1;
                printf("\nSaindo do if, valor de number: %d valor de day: %d", *max_contagion_number, *max_contagion_day);
            }
            else if(mat_contagions[i][j] >= *max_contagion_number){
                printf("\nEntrei no else if, valor de number: %d valor de day: %d", *max_contagion_number, *max_contagion_day);
                *max_contagion_number += mat_contagions[i][j];
                *max_contagion_day = j+1;
                printf("\nSaindo no else if, valor de number: %d valor de day: %d", *max_contagion_number, *max_contagion_day);
            }
        }
    } */

    /*
    *max_contagion_number = 0;
    for(int j = 0; j < num_days; j++){
        for(int i = 0; i < num_countrys; i++){
            *max_contagion_number += mat_contagions[i][j];
            *max_contagion_day = j;
        }
    }*/
