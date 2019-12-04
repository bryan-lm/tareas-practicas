dobles.o: dobles.c
	gcc dobles.c -c
main.o: main.c
	gcc main.c -c
a.out: main.o dobles.o
	gcc main.o dobles.o
run:a.out
	./a.out
clean: 
	rm -f main.o dobles.o
