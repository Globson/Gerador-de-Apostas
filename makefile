all: Main.c Sources/Aleatorio.c
	gcc Main.c -o EXEC Sources/Aleatorio.c

run: EXEC
	./EXEC

rm: EXEC
	rm EXEC
