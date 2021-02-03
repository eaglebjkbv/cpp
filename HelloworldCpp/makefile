CC=g++

CFLAGS=-c -Wall
LIBDIR=./lib/
IDIR=./include
SRCDIR=./src/

calistir: program
	#rm ./lib/*.o
	#clear
	./bin/program

program: main.o deneme.o
	$(CC) $(LIBDIR)main.o  $(LIBDIR)deneme.o -o ./bin/program
#   g++ ./lib/main.o ./lib/deneme.o -o ./bin/program

%.o:$(SRCDIR)%.cpp
	$(CC) $(CFLAGS) -I $(IDIR) $^ -o $(LIBDIR)$@
#   g++ -c -Wall ./src/main.cpp -o ./lib/main.o
#deneme.o:./src/deneme.cpp
#	$(CC) $(CFLAGS) $^ -o ./lib/$@
#   g++ -c -Wall ./src/deneme.cpp -o ./lib/deneme.o

