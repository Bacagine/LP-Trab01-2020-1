/************************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                           *
 *                                                                                  *
 * Aqui deverá vir uma breve explicação sobre a aplicação                           *
 *                                                                                  *
 * clear_buffer.c: arquivo com o desenvolvimento do prototipo da função             *
 * clear_buffer da biblioteca buffer.h                                              *
 *                                                                                  *
 * OBS: Essa função não foi desenvolvida por mim. Percebi que muitos                *
 * programadores se utilizam dessa função e passei a usa-lá em meus programas       *
 *                                                                                  *
 * Versão: (aqui deve vir a versão da sua aplicação. Ex.: 1.0)                      *
 *                                                                                  *
 * Desenvolvedores: Gustavo Bacagine           <gustavobacagine@gmail.com>          *
 *                  Lucas Pereira de Matos     <lucas.pereira.matos.000@gmail.com>  *
 *                  Caio Elias Emerick Regino  <caioregino.147@gmail.com>           *
 *                                                                                  *
 * Data de inicio: 30/11/2019                                                       *
 ************************************************************************************/

#include <stdio.h>
#include "clear_buffer.h"

void clear_buffer(void){    
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}
