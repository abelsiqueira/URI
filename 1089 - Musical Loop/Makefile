all: compile run purge

compile:
	g++ -o main main.cpp -ggdb -lm -lcrypt -O2 -pipe -ansi -DONLINE_JUDGE

run:
	./runtests.sh

purge:
	rm -f main *.out
