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
 * Data da última modificação: 26/05/2020                                         *
 **********************************************************************************/

#include <stdio.h>
#include "../include/my_stdio.h"

void 
le_paises(int num_countrys, 
          char name_country[][TAM_MAX_NOME + 1]){
    setlocale(LC_ALL, "");
    
    /* Lê os países digitados pelo usuário e salva em
     * uma matriz de caracteres */
    for(int count = 0; count < num_countrys; count++){
        scanf(" %50[^\n]", name_country[count]);
        //fgets(name_country[count], TAM_MAX_NOME + 1, stdin);
        //gets(name_country);
    }
}

void 
le_contagios(int num_countrys, 
             int num_days, 
             int mat_contagions[num_countrys][num_days]){
    setlocale(LC_ALL, "");
    
    for(int i = 0; i < num_countrys; i++){
        for(int j = 0; j < num_days; j++){
            scanf("%d", &mat_contagions[i][j]);
        }
    }
}

int 
total_contagios_pais(int num_days, 
                     int mat_total_contagions_pais[][num_days], 
                     int index_contagion){
    
    int total_contagions_coutry = 0; /* Variável que guarda o 
                                      * total de contágios */
    
    /* Soma a quantidade de contagios digi-
     * tada pelo usuário */
    for(int i = 0; i <= index_contagion; i++){
        total_contagions_coutry = 0;
        for(int j = 0; j < num_days; j++){
            total_contagions_coutry += mat_total_contagions_pais[i][j];
        }
    }
    
    return total_contagions_coutry; // Retorna o total de contagios
}

/*
void 
dia_maior_contagio_pais(int num_days,
                        int mat_contagions[][num_days],
                        int index_contagion,
                        int *contagion_day,
                        int *max_contagion_number){
    //setlocale(LC_ALL, "");
    for(int i = 0; i < index_contagion; i++){
        for(int j = 0; j < num_days; j++){
            if(){
                
            }
        }
    }
}

void 
dia_maior_contagio(int num_countrys, 
                   int num_days, 
                   int mat_contagions[num_countrys][num_days], 
                   int *contagion_day, 
                   int *max_contagion_number){
    //setlocale(LC_ALL, "");
    
}

int 
maior_sequencia_crescente(int num_days, 
                          int mat_contagions[][*], 
                          int index_contagion){
    setlocale(LC_ALL, "");
    
    
    return;
}
*/
