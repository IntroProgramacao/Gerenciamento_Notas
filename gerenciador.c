/****************************************************************************************************
Conteúdo:
-->Corpo principal do projeto.

Bibliotecas:
-->cs50.h

Referências:
*CC50(fundação estudar)
Autor: Lucasitron
****************************************************************************************************/
#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_MAT 25
#define MAX_NAM 50



int
main(int argc, char *argv[])
{
	 //recebe o nome de uma turma para armazenar os nomes dos alunos
     char Nturma[15];
     Nturma = get_string("Digite o nome da turma");

     FILE *turma;
     turma = fopen(Nturma, "a");
     
     //quando a variavel do tipo FILE  contém valor nulo houve um erro de abertura
     if (materias == NULL)
     {
         printf("ERRO!\nFalha de abertura");
         return 1;
     }

     //Recebe uma matéria para armazenar as notas
     char Materia[MAX_MAT];
     Materia = get_string("Digite a componente: \n");

     //Abre um arquivo para armazenar as notas dos alunos por matéria
     FILE *materias;
     materias = fopen(Materia, "a");
     //quando a variavel do tipo FILE  contém valor nulo houve um erro de abertura
     if (materias == NULL)
     {
         printf("ERRO!\nFalha de abertura");
         return 2;
     }

          
}
