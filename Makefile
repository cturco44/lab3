# MAKEFILE FOR LAB 3 STRING LIBRARY
test:
	g++ -std=c++17 -Wall -Wextra -Wconversion -O3 test_string.cpp -o strlib

fullsubmit:
	tar -czvf lab3.tar.gz String.h

clean:
	rm -f strlib

release: strlib