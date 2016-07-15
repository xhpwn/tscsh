tscsh: main.o linescraper.c
	gcc -o tscsh main.o linescraper.c -lm
main.o: main.c header1.h
	gcc -c main.c
linescraper.o: linescraper.c header1.h
	gcc -c linescraper.c
