ackerman: ackerman.cpp
	clang++ -Wall -Werror -std=c++17 -g -o ackerman ackerman.cpp

clean:
	rm -f *.o ackerman *~
