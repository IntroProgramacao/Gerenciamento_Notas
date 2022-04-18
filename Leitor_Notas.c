#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Leitor_Notas.h"
//Executa a leitura das notas dos alunos, em float, e retorna um array de inteiros contendo as notas

//converte os valores em inteiros de 0 a 100
void converte(float recebe[4], int notas[4]){
    //trunca na 2ª casa
    for (int i = 0; i < 4; i++)
    {
        if (recebe[i] >= 1 && recebe[i] <= 10){

            notas[i] = recebe[i] * 10;

        }else{

            notas[i] = recebe[i] * 100;

        }
    }
}

void inicio(int notas[4]){
    float recebe[4];
    for (int i = 0; i < 4; i++)
    {
        recebe[i] = get_float("%iº Nota: \n", i+1);
        //verifica se foi digitado o valor corretamente
        if (recebe[i] > 10)
        {
            printf("Valor inválido:\n");
            printf("Digite apenas valores <= 10, utilizando (.) invés de (,)");
            recebe[i] = get_float("%iº Nota: \n", i+1);
        }
        
        //verifica se as notas estão corretas
        if (i == 3)
        {
            int men;
            do{
                printf("Digite o numero correspondente a ordem da nota para alterar o valor\n");
                printf ("0 para concluir");

                for (int j = 0; j < 4; j++)
                {
                    printf("%iº nota: %.2f\n",j, recebe[i]);
                }
            
                //menu de alteração
                men = get_int("Opção: ");
                printf("\n");
                system("cls");
            }while(men != 0);
        }
        
    }
    converte(recebe, notas);
}