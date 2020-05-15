/* Git Hub: https://github.com/Bacagine/Modelos
 * 
 * buffer.h: Biblioteca com o prototipo da função clear_buffer
 * 
 * Biblioteca criada por Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Data: 30/11/2019
 * 
 */

#ifndef _CLEAR_BUFFER_H
#define _CLEAR_BUFFER_H

/* Função usada para evitar 
 * Buffer Overflow
 * 
 * Você pode se perguntar o motivo
 * para se usar uma função propia para
 * limpar o buffer do terminal ao invés
 * de usar uma função já pronta encontrada
 * na propia linguagem
 * 
 * Existem muitas funções que poderiamos
 * usar como: fflush(), setbuf(), etc...
 * 
 * O motivo para usar essa função está
 * no fato de que as funções listadas acima
 * não funcionam em todos os Sistemas Operacionais.
 * O fflush() funciona no Windows mas não funciona no
 * Linux e no MasOS; já o setbuf() funciona tanto no
 * Linux como no Windows, porém não funciona no MasOS.
 * 
 * Está função que usamos funciona em todos os
 * Sistemas Operacionais. Por isso creio que essa seja
 * a melhor opção a ser usada.
 * 
 * OBS: Essa função não foi 
 * desenvolvida por mim. Percebi 
 * que muitos programadores 
 * se utilizam dessa função e 
 * passei a usa-lá em meus programas */
void clear_buffer(void);

#endif // _CLEAR_BUFFER_H
