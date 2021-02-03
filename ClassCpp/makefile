calistir: derle 
	

derle: main.o islem.o
	g++ ./lib/main.o ./lib/islem.o -o ./bin/main

main.o:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o

islem.o:
	g++ -I "./include"  -c ./src/islem.cpp -o ./lib/islem.o 
