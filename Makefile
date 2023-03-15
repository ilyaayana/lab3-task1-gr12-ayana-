bin/labrabota3_1: obj/main.o obj/server.o
	gcc -o bin/labrabota3_1 obj/main.o obj/server.o

obj/server.o: src/server.c
	gcc -c src/server.c -o obj/server.o

obj/main.o: src/main.c
	gcc -c src/main.c -o obj/main.o


