all: gerenciador Leitor_Notas
gerenciador: gerenciador.c Leitor_Notas.c Leitor_Notas.h
	gcc -ggdb -std=c17 -Wall -Werror -Wformat=0 -o gerenciador Leitor_Notas.h gerenciador.c Leitor_Notas.c -lcs50 -lm