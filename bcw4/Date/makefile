all: date main lego
	
date:
	g++ -c Date.cpp -o Date.o
	
main:
	g++ -c main.cpp -o main.o
lego:
	g++ Date.o main.o -o main.out
clean:
	rm -rf *.o main.out
