all: Main.c Sources/Aleatorio.c
	clang Main.c -o EXEC Sources/Aleatorio.c

run: EXEC
	./EXEC

rm: EXEC
	rm EXEC 
