/* Git Hub: https://github.com/Bacagine/covid19
 * 
 * Copyright (C) 2020
 * 
 * my_stdio.h: Biblioteca com o prototipo das funções de entrada e saída do
 * programa covid19
 * 
 * Biblioteca criada por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Este programa é software livre; você pode redistribuí-lo e/ou modificá-lo
 * sob os termos da GNU General Public License conforme publicada pela Free
 * Software Foundation; quer a versão 2 da licença, ou (conforme você escolha)
 * qualquer versão posterior.
 * 
 * Este programa é distribuído com a esperança de que seja útil, mas SEM
 * QUALQUER GARANTIA; mesmo sem a garantia implícita de MERCANTIBILIDADE OU
 * ADEQUAÇÃO A UM DETERMINADO PROPÓSITO. Para mais detalhes, veja a
 * GNU General Public License.
 * 
 * Você deve ter recebido uma cópia da GNU General Public License juntamente
 * com este programa; caso contrário, veja <https://www.gnu,org/licenses/>
 * 
 * Data da última modificação: 27/02/2020
 */

#ifndef _MY_STDIO_H
#define _MY_STDIO_H

#include <stdlib.h>                      // Biblioteca usada para ultilizar comandos do Sistema Operacional
#include <locale.h>                     // Usado para acentuar as palavras
#include <string.h>                    // Usado para a manipulação de strings
#include "../include/covid19.h"       // Biblioteca criada pelo Profº Ciro
#include "../include/clear_buffer.h" // Usado para limpar o buffer do terminal

#define TUX "../.tux.txt" // It is a Easter Egg (this is top secret =) )
//#define TUX_LINUX "../share/covid19/tux.txt"
#define VERSION "covid19 20.05.27 (amd64)" // Versão da aplicação
#define HELP "Usage: covid19 [option]\n\
\ncovid19 é uma aplicação que recebe e processa informações a respeito do número\n\
de contagios por Covid-19 em um conjunto de países num determinado período de\n\
tempo.\n\
\n\
Argumentos:\n\
  -v, --version             Imprimir a versão e sai\n\
  -h, --help                Imprimir a ajuda (esta mensagem) e sair\n\
\t\tEssa aplicação contém poderes de super tux =)" /* Mensagem de ajuda
                                                    * para o usuário */

/* Função criada por Gustavo Bacagine
 * 
 * Essa função contém as váriaveis de
 * entrada do programa que serão digi-
 * tadas pelo usuário */
void input(void);

/* Função criada por Gustavo Bacagine 
 * 
 * Imprime a saída do programa conforme
 * Pedido no enunciado do trabalho 
 * 
 * Para mais informações veja o arquivo
 * README.md */
void output(int p, 
            int d, 
            char name_country[][TAM_MAX_NOME + 1], 
            int mat_contagions[][*]/*, int total_contagions_country*/); // Saida do programa

#endif
