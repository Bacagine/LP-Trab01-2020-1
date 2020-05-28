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
#include "../include/my_stdio.h" /* Biblioteca com as funções 
                                  * de entrada e saida do 
                                  * programa */

int main(int argc, char **argv){    
    // Verifica se o usuário não digitou parametros
    if(argc == 1){
        input(); // Para entender essa função veja a biblioteca my_stdio.h
    }
    // Verifica se o usuário digitou argumentos
    else if(argc == 2){
        /* O if entende 0 como falso; a função strcmp retorna 0 
         * caso duas strings sejam iguais. Por isso colocamos a negação
         * da função para que ela nos retornasse o valor 1 */
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
                return 1;
            }
        }
    }
    // Verifica se a função main recebe mais de 2 argumentos
    else if(argc > 2){
        fprintf(stderr, "Erro! Você digitou mais de um argumento!\n");
        return 1;
    }
    return 0;
}
