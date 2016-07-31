/*
* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
* +                                                                   +
* +    tscsh                                                          +
* +    @author Anubhav Saxena, http://saxena.xyz                      +
* +    @desc Custom shell layer                                       +
* +                                                                   +
* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

#include <stdio.h>

char linescraper() {

	int scraper = 0, binary = 0;
	char command[1000];
	char info[1000] = "info";
	scanf("%s", command);

	for (scraper = 0; scraper < 3; scraper++) {
		if (command[scraper] == info[scraper]) {
			binary++;
		}
	}

	if (binary == 4) {
		printf("T1 PASS.\n");
	}

	return 0;

} 
