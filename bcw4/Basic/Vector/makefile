all: vector main lego
	
vector:
	g++ -c Vector.cpp -o Vector.o
	
main:
	g++ -c main.cpp -o main.o
lego:
	g++ Vector.o main.o -o main.out
clean:
	rm -rf *.o main.out
