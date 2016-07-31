#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PW "test"

int main() {

	int looper = 0;
	char command[1000], *commandptr = command;

	while (looper == 0) {
		printf("tscsh@AnubhavSaxena: > ");
		scanf("%s", command);
		if (strcmp(command, PW, 4) == 0) {
			// break; TODO
		}
		system(command);
	}

	return 0;

}
