#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa em linguagem C que imprimam na tela a string s na
ordem inversa utilizando ponteiros.
char s[10] = "abcde";
char* cptr;
// Seu código começa aqui */

int main(){
    char s[10] = "abcde";
    char *cptr=NULL;
    cptr=&s;//atribui ao ponteiro o endereço s[0]
    for(int i=0; i<4; i++){
        cptr++;//vou avançando posições na memoria até chegar no final do vetor
    }
    for(int i=0; i<5; i++){
        printf("%c -",*cptr);//escrevo a posição final depois decremento uma posição na memoria até chegar s[0]
        cptr--;
    }
    return 0;
}