/************************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                           *
 *                                                                                  *
 * covid19 é uma aplicação que recebe e processa informações a respeito do numero   *
 * de contagios por Covid-19 em um conjunto de paises num determinado periodo de    *
 * tempo.                                                                           *
 *                                                                                  *
 * covid19.h: Arquivo com o desenvolvimento do prototipos das funções               *
 * encontradas na biblioteca covid19.h                                              *
 *                                                                                  *
 * Desenvolvido por: Gustavo Bacagine <gustavo.bacagine@protonmail.com>             *
 *                   Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com>  *
 *                   Caio Elias Emerick Regino <caioregino.147@gmail.com>           *
 *                                                                                  *                                                
 * Data de início: 14/05/2020                                                       *
 * Data da última modificação: 18/05/2020                                           *
 ************************************************************************************/

#include <stdio.h>
#include "../include/clear_buffer.h"
#include "../include/covid19.h"

void 
le_paises(int num_countrys, 
          char name_country[][TAM_MAX_NOME + 1]){
    for(int count = 0; count < num_countrys; count++){
        scanf("%s", name_country[count]);
        clear_buffer();
    }
}

void 
le_contagios(int num_countrys, 
             int num_days, 
             int mat_contagions[][*]){
    for(int i = 0; i < num_countrys; i++){
        for(int j = 0; j < num_days; j++){
            scanf("%d", &num_contagions[count]);
        }
    }
}
/*
int 
total_contagios_pais(int num_days, 
                     int mat_total_contagions[][*], 
                     int index_contagion){
    
    
    return;
}

void 
dia_maior_contagio_pais(int num_days,
                        int mat_contagions[][*], 
                        int index_contagion, 
                        int *contagion_day, 
                        int *max_contagion_number){
    
}

void 
dia_maior_contagio(int num_countrys, 
                   int num_days, 
                   int mat_contagions[][*], 
                   int *contagion_day, 
                   int *max_contagion_number){
    
}

int 
maior_sequencia_crescente(int num_days, 
                          int mat_contagions[][*], 
                          int index_contagion){
    
    
    return;
}
*/
