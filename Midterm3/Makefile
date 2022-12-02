all: main.out

main.out: main.cpp Card.cpp Deck.cpp Hand.cpp
	g++ main.cpp Card.cpp Deck.cpp Hand.cpp -o main.out --std=c++11

clean:
	rm *.o main.out