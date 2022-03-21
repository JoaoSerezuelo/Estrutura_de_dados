#include <stdio.h>
#include <stdlib.h>

/*Crie um programa para manipular vetores com ponteiros. O seu programa
deve implementar uma função chamada inverte_vetor, que recebe como
parâmetro dois vetores V1 e V2, ambos de tamanho N. A função deve copiar
os elementos de V1 para V2 na ordem inversa. Ou seja, se a função receber
V1 = {1,2,3,4,5}, a função deve copiar os elementos para V2 na seguinte
ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar o maior
valor encontrado em V1. A função deve obedecer ao seguinte protótipo: int
inverte_vetor(int *v1, int *v2, int n).*/

int inverte_vetor(int *v1, int *v2, int n){
    int maior=0,j;
    for(int i=n,j=0 ;i>=0; i--,j++ ){
        if(j==0){
            maior=v1[j];
        }
        if(maior<v1[j]){
            maior=v1[j];
        }
        v2[j]=v1[i]; //inverti os elementos do vetor 1 no vetor 2
        printf("v2[%i] = %i \n",j, v2[j]);
    }
    return maior; // retornei o maior numero do vetor

}

int main()
{
    int *v1, *v2, n;
    printf("tamanho do vetor: ");
    scanf("%i",&n);//lê o tamanho do vetor que o usuario vai querer para criar os dois vetores
    v1= malloc (n*sizeof(int));
    v2= malloc (n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("\nV1[%i] = ",i);
        scanf("%i",&v1[i]);//leitura do vetor v1
    }
    printf("\n********************************\n");
    printf("o maior numero do vetor e: %i",inverte_vetor(v1,v2,n-1));
    free(v1);
    free(v2);
    return 0;
} 