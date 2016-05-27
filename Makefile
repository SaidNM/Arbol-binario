a.out: arbol.o main.o
	gcc arbol.o main.o

arbol.o: arbol.c
	gcc -c -o arbol.o -Wall arbol.c
main.o: main.c
	gcc -c -o main.o -Wall  main.c

