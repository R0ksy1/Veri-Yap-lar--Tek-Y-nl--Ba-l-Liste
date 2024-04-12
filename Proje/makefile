 Tum:derle bagla calistir 
 
 derle:
	g++ -g -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -g -c -I "./include" ./src/Sayi.cpp -o ./lib/Sayi.o
	g++ -g -c -I "./include" ./src/Basamak.cpp -o ./lib/Basamak.o
	g++ -g -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++	-g -c -I "./include" ./src/SayilarListesi.cpp -o ./lib/SayilarListesi.o

bagla:
	g++ -g ./lib/Sayi.o ./lib/Basamak.o ./lib/Dugum.o ./lib/SayilarListesi.o ./lib/main.o -o ./bin/program
calistir:
	./bin/program
	