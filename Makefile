all: ./a.out

compRun:
	g++ -std=c++11 main.cpp Transport.cpp -o r.out

compTest:
	g++ -std=c++11 test.cpp Transport.cpp -o a.out

test: clean compTest; ./a.out

run: clean compRun; ./r.out

clean:
	rm -f *.out
