colas.o: colas.c
	gcc colas.c -c
main.o: main.c
	gcc main.c -c
a.out: main.o colas.o
	gcc main.o colas.o
run:a.out
	./a.out
clean: 
	rm -f main.o colas.o
