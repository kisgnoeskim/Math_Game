#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	for (int i = 1; i <= 10; i++) {

	}
	return 0;

}

int random_number() {

	srand(time(NULL));
	int random_1 = (rand() % 20) + 1;
	int random_2 = (rand() % 20) + 1;

	return random_1, random_2;
}