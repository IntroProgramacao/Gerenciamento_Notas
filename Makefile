all: gerenciador
gerenciador: gerenciador.c
	gcc -ggdb -std=c99 -Wall -Werror -Wformat=0 -o gerenciador gerenciador.c -lcs50 -lm
