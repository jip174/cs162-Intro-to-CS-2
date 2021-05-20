output: main.o menu.o barb.o blue.o character.o game.o validator.o harry.o medusa.o vampire.o
	g++ main.o menu.o barb.o blue.o character.o game.o validator.o harry.o medusa.o vampire.o -o output -g
main.o: main.cpp
	g++ -c main.cpp -g
menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp -g
barb.o: barb.cpp barb.hpp
	g++ -c barb.cpp -g
blue.o: blue.cpp blue.hpp
	g++ -c blue.cpp -g
validator.o: validator.cpp validator.hpp
	g++ -c validator.cpp -g
character.o: character.cpp character.hpp
	g++ -c character.cpp -g
game.o: game.cpp game.hpp
	g++ -c game.cpp -g
harry.o: harry.cpp harry.hpp
	g++ -c harry.cpp -g
medusa.o: medusa.cpp medusa.hpp
	g++ -c medusa.cpp -g
vampire.o: vampire.cpp vampire.hpp
	g++ -c vampire.cpp -g
clean:
	rm * .o output
