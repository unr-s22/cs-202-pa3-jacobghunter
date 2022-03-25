PA3: main.o Account.o Money.o
	g++ -std=c++11 -o PA3 main.o Account.o Money.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp

Account.o: Account.cpp
	g++ -std=c++11 -c Account.cpp

clean: 
	rm *.o PA3