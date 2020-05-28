/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                         *
 *                                                                                *
 * Copyright (C) 2020                                                             *
 *                                                                                *
 * main.c: Arquivo principal do programa covid19                                  *
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
 * Data: 14/05/2020                                                               *
 * Data da última modificação: 26/05/2020                                         *
 **********************************************************************************/

#include <stdio.h>
#include "../include/my_stdio.h"

int main(int argc, char **argv){    
    if(argc == 1){ // Verifica se o usuário não digitou parametros
        input();
//         setlocale(LC_ALL, ""); // Permite o uso de caracteres especiais
//         int p, d; // Quantidade de Países, Quantidade de Dias
//         
//         scanf("%d", &p); // Lê a quanditade de países
//                 
//        /* Caso o usuário digite um número menor ou
//         * igual a zero é pedido para que digite outro
//         * valor para p */
//         while(p <= 0){
//             system("clear");
//             fprintf(stderr, "Erro! A quantidade de países deve ser maior 0\n");
//             fprintf(stderr, "Por favor digite outro valor:\n");
//             scanf("%d", &p);
//         }
//         /* Matriz de caracteres onde os nomes dos
//         * países devem ser armazenados.*/
//         char name_country[p][51];
//         
//         clear_buffer(); // Limpa o buffer do terminal
//         
//         le_paises(p, name_country);
//         
//         scanf("%d", &d);
//         
//         int mat_contagions[p][d];
//         
//         // Lê a quantidade de contagios para cada país
//         le_contagios(p, d, mat_contagions);
//         
//         clear_buffer();
//         
//     //     for(int count = 0; count < p; count++){
//     //         total_contagios_pais(d, mat_contagions, count);
//     //     }
//         int total_contagions_country;
//         
//         /* Usado para testar se as 
//         * váriaveis estão sendo 
//         * recebidas corretamente */
//         printf("\nO valor de p é = %d\nE o valor de d é = %d\n", p, d);
//         for(int count = 0; count < p; count++){
//             printf("%s\n", name_country[count]);
//             //puts(name_country[count]);
//         }
//         
//         printf("\nOs contagios por cada país são:\n");
//         for(int i = 0; i < p; i++){
//             for(int j = 0; j < d; j++){
//                 printf("%d ", mat_contagions[i][j]);
//             }
//             printf("\n");
//         }
//         
//         printf("\nNumero total de congagios por pais\n");
//         for(int count = 0; count < p; count++){
//             total_contagions_country = total_contagios_pais(d, mat_contagions, count);
//             printf("%s: %d\n", name_country[count], total_contagions_country);
//         }
    }
    else if(argc == 2){ // Verifica se o usuário digitou argumentos
        if((!strcmp(argv[1], "-v")) || (!strcmp(argv[1], "--version"))){
            puts(VERSION); // Mostra a versão da aplicação e sai
        }
        else if((!strcmp(argv[1], "-h")) || (!strcmp(argv[1], "--help"))){
            puts(VERSION); // Mostra a versão da aplicação
            puts(HELP);   // Mostra a ajuda para o usuário e sai
        }
        else if(argc == 2 && !strcmp(argv[1], "--tux")){ // Easter Egg
            FILE *tux; // Declara um ponteiro do tipo FILE
            char c; // Caracteres
            if((tux = fopen(TUX, "r")) != NULL){ // Verifica se o arquivo ../.tux.txt existe
                while((c = fgetc(tux)) != EOF){ // Percorre o arquivo até o final da linha
                    fputc(c, stdout); // Mostra o conteudo do arquivo .tux.txt no terminal
                }
                fclose(tux); // Fecha o arquivo ../.tux.txt
            }
            else if((tux = fopen(TUX, "r")) == NULL){
                printf(" ______________\n"
                       "/              \\\n"
                       "|              |\n"
                       "| Olá Mundo!!! |\n"
                       "|              |\n"
                       "\\              /\n"
                       " --------------\n"
                       "   \\\n"
                       "    \\\n"
                       "        .--.\n"
                       "       |o_o |\n"
                       "       |:_/ |\n"
                       "      //   \\ \\\n"
                       "     (|     | )\n"
                       "    /'\\_   _/`\\\n"
                       "    \\___)=(___/\n");
            }
/*            else if((tux = fopen(TUX_LINUX, "r")) == NULL){ 
                while((c = fgetc(tux) != EOF)){
                    fputc(c, stdout);
                }
                fclose(tux);
            }*/
            else{
                fprintf(stderr, "Erro ao abrir o arquivo tux.txt");
            }
        }
    }
    else if(argc > 2){ // Verifica se a função main recebe mais de 2 argumentos
        fprintf(stderr, "Erro! Você digitou mais de um argumento!\n");
    }
    return 0;
}
