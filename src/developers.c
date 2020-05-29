/***********************************************************************
 * Git Hub: https://github.com/Bacagine/  *
 *                                                                     *
 * developers.c: Mostra os desenvolvedores da aplicação                *
 *                                                                     *
 * Desenvolvedores: Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                  Nome             <meu_email@algumacoisa.com>       *
 *                                                                     *
 * Data: dd/mm/aaaa                                                    *
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "developers.h" /* --> Biblioteca para poder usar a função
                               developers() */
#include "../include/my_stdio.h"

void developers(void){
    setlocale(LC_ALL, "Portuguese");
    
    fprintf(stdout, "*************************DESENVOLVEDORES*************************\n");    
    fprintf(stdout, "*                                                               *\n");
    fprintf(stdout, "* FATEC        -          Carapicuíba            -         2020 *\n");
    fprintf(stdout, "*---------------------------------------------------------------*\n");
    fprintf(stdout, "*                                                               *\n");
    fprintf(stdout, "* Gustavo Bacagine          <gustavo.bacagine@protonmail.com>   *\n");
    fprintf(stdout, "* Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com> *\n");
    fprintf(stdout, "* Caio Elias Emerick Regino <caioregino.147@gmail.com>          *\n");
    fprintf(stdout, "*                                                               *\n");
    fprintf(stdout, "* covid19 é uma aplicação que recebe e processa informações a   *\n");
    fprintf(stdout, "* respeito do numero de contagios por Covid-19 em um conjunto   *\n");
    fprintf(stdout, "* de paises num determinado periodo de tempo.                   *\n");
    fprintf(stdout, "*                                                               *\n");
    fprintf(stdout, "*****************************************************************\n");
}

