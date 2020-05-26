/************************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab01-2020-01                           *
 *                                                                                  *
 * covid19 é uma aplicação que recebe e processa informações a respeito do numero   *
 * de contagios por Covid-19 em um conjunto de paises num determinado periodo de    *
 * tempo.                                                                           *
 *                                                                                  *
 * main.c: Arquivo principal do programa covid19                                    *
 *                                                                                  *
 * Desenvolvido por: Gustavo Bacagine          <gustavo.bacagine@protonmail.com>    *
 *                   Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com>  *
 *                   Caio Elias Emerick Regino <caioregino.147@gmail.com>           *
 *                                                                                  *
 * Data: 14/05/2020                                                                 *
 * Data da última modificação: 24/05/2020                                           *
 ************************************************************************************/

#include <stdio.h>
#include <stdlib.h>                    // Usado para usar comandos do Sistema Operacional
#include "../include/covid19.h"       // Biblioteca criada pelo Profº Ciro
#include "../include/clear_buffer.h" // Usado para limpar o buffer do terminal
#include "../include/stdout.h"      // Biblioteca com a saída do programa

int main(int argc, char **argv){    
    if(argc == 1){ // Verifica se o usuário não digitou parametros
        setlocale(LC_ALL, ""); // Permite o uso de caracteres especiais
        int p, d; // Quantidade de Países, Quantidade de Dias
        int count, *num_contagions = NULL;
        int i, j; // Linha, Coluna
        
        scanf("%d", &p); // Lê a quanditade de países
              
        /* Caso o usuário digite um número menor ou
         * igual a zero é pedido para que digite outro
         * valor para p */
        while(p <= 0){
            system("clear");
            fprintf(stderr, "Erro! A quantidade de países deve ser maior 0\n");
            fprintf(stderr, "Por favor digite outro valor:\n");
            scanf("%d", &p);
        }
        /* Matriz de caracteres onde os nomes dos
         * países devem ser armazenados.*/
        char name_country[p][51];
        
        le_paises(p, name_country); // Até aqui tudo OK =)
        
        //scanf("%d", &d);

        //int mat_contagions[d][*num_contagions]; // Ainda não sei o que fazer aqui
        
        //le_contagios(p, d, mat_contagions);
        
        printf("\nO valor de p é = %d\nE o valor de d é = %d\n", p, d = 0);
        for(count = 0; count <= p; count++){
            printf("%s\n", name_country[count]);
        }
        getchar();
        /* Mostra as mensagens de saída do programa
         * Para mais informações veja a biblioteca
         * stdout.h */
        //output(); 
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
            else if((tux = fopen(TUX_LINUX, "r")) != NULL){
                while((c = fgetc(tux) != EOF)){
                    fputc(c, stdout);
                }
            fclose(tux);
            }
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
