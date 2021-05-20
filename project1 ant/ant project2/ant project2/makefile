output: main.o menu.o ant.o validator.o board.o
	g++ main.o menu.o ant.o validator.o board.o - o output
	main.o : main.cpp
	g++ - c main.cpp
	menu.o : menu.cpp menu.hpp
	g++ - c menu.cpp
	ant.o : ant.cpp ant.hpp
	g++ - c ant.cpp
	validator.o : validator.cpp validator.hpp
	g++ c validator.cpp
	board.o : board.cpp board.hpp
	g++ c board.cpp
	clean :
		rm *.o output