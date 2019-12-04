pilas.o: pilas.c
	gcc pilas.c -c
main.o: main.c
	gcc main.c -c
a.out: main.o pilas.o
	gcc main.o pilas.o
run:a.out
	./a.out
clean: 
	rm -f main.o pilas.o
