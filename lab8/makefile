
output: main.o menu.o ss.o validator.o  
	g++ main.o menu.o ss.o validator.o -std=c++11 -o output -g
main.o: main.cpp
	g++ -std=c++11 -c main.cpp -g
menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -c menu.cpp -g
ss.o: ss.cpp ss.hpp
	g++ -std=c++11 -c ss.cpp -g
validator.o: validator.cpp validator.hpp
	g++ -std=c++11 -c validator.cpp -g
clean:
	rm *.o output
