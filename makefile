
all: lab5

lab5: lab5.o
	g++ -lm -o lab5 lab5.o

lab5.o: lab5.cpp
	g++ -O -c lab5.cpp

clean:
	rm -f lab5 *.o
