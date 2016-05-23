all: point car main lego
	
point:
	g++ -c Point.cpp -o Point.o
car:
	g++ -c Car.cpp -o Car.o
main:
	g++ -c main.cpp -o main.o
lego:
	g++ Point.o Car.o main.o -o main.out
clean:
	rm -rf *.o main.out
