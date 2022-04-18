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

//verifica se um arquivo foi aberto corretamente
void VerAber(FILE *abre){
    if (abre == NULL)
    {
        perror("FALHA DE ABERTURA: o arquivo não foi aberto corretamente!");
    }
}

int
main(int argc, char *argv[])
{
	 //recebe o nome de uma turma para armazenar os nomes dos alunos
     string Nturma;
     Nturma = get_string("Digite o nome da turma");

     FILE *turma;
     turma = fopen(Nturma, "a");
     
     //verifica se o arquivo foi aberto corretamente
     VerAber(turma);

     //Recebe uma matéria para armazenar as notas
     string Materia;
     Materia = get_string("Digite a componente: \n");

     //Abre um arquivo para armazenar as notas dos alunos por matéria
     FILE *materias;
     materias = fopen(Materia, "a");
     
     // verifica a abertura do arquivo
     VerAber(materias);
          
}
