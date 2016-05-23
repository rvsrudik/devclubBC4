all: complex main lego
	
complex:
	g++ -c Complex.cpp -o Complex.o
	
main:
	g++ -c main.cpp -o main.o
lego:
	g++ Complex.o main.o -o main.out
clean:
	rm -rf *.o main.out
