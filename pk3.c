#include <stdio.h>

void main() {

	int summe = 785;
	int count200 = 0;
	int count50 = 0;
	int count10 = 0;
	int count5 = 0;

	while (summe >= 200) {

		summe -= 200;
		count200 ++;

	}


	while (summe >= 50) {

		summe -= 50;
		count50 ++;

	}


	while (summe >= 10) {

		summe -= 10;
		count10 ++;

	}

	while (summe >= 5) {

		summe -= 5;
		count5 ++;

	}

	printf("Es müssen %d 2-€ Münzen, %d 50-Cent Münzen, %d 10-Cent Münzen und %d 5-Cent Münzen eingeworfen werden.\n", count200, count50, count10, count5);

}
