all: point main lego
	
point:
	g++ -c Point.cpp -o Point.o
	
main:
	g++ -c main.cpp -o main.o
lego:
	g++ Point.o main.o -o main.out
clean:
	rm -rf *.o main.out
