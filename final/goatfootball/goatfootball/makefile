output: main.o ball.o menu.o barry.o defender.o field.o footballgame.o validator.o jerry.o jim.o player.o randy.o space.o
	g++ main.o ball.o menu.o barry.o defender.o field.o footballgame.o validator.o jerry.o jim.o player.o randy.o space.o -o output -g
main.o: main.cpp
	g++ -std=c++11 -c main.cpp -g
ball.o: ball.cpp ball.hpp
	g++ -std=c++11 -c ball.cpp -g
menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -c menu.cpp -g
barry.o: barry.cpp barry.hpp
	g++ -std=c++11 -c barry.cpp -g
defender.o: defender.cpp defender.hpp
	g++ -std=c++11 -c defender.cpp -g
validator.o: validator.cpp validator.hpp
	g++ -std=c++11 -c validator.cpp -g
field.o: field.cpp field.hpp
	g++ -std=c++11 -c field.cpp -g
footballgame.o: footballgame.cpp footballgame.hpp
	g++ -std=c++11 -c footballgame.cpp -g
jerry.o: jerry.cpp jerry.hpp
	g++ -std=c++11 -c jerry.cpp -g
jim.o: jim.cpp jim.hpp
	g++ -std=c++11 -c jim.cpp -g
player.o: player.cpp player.hpp
	g++ -std=c++11 -c player.cpp -g
randy.o: randy.cpp randy.hpp
	g++ -std=c++11 -c randy.cpp -g
space.o: space.cpp space.hpp
	g++ -std=c++11 -c space.cpp -g
clean:
	rm *.o output
