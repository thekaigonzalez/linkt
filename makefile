all:
	g++ head.cpp -c
	g++ main.cpp head.o -o hello-file 
