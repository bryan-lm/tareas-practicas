circulares.o: circulares.c
	gcc circulares.c -c
main.o: main.c
	gcc main.c -c
a.out: main.o circulares.o
	gcc main.o circulares.o
run:a.out
	./a.out
clean: 
	rm -f main.o circulares.o
