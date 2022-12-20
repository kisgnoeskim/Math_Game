#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int random_1 = 0, random_2 = 0;
int answer, correct_answer;
char four[4] = { '+', '-', '*', '/' };
int op;

int random_number() {
	int num = 0;

	srand(time(NULL));
	random_1 = (rand() % 20) + 1;
	random_2 = (rand() % 20) + 1;

	if (random_2 > random_1) {
		num = random_2;
		random_2 = random_1;
		random_1 = num;
	}
	return random_1, random_2;
}

int main() {

	for (int i = 1; i <= 10; i++) {
		printf("\n");
		random_number(); //랜덤 숫자 a, b를 뽑기
		op = rand() % 4; //사칙연산 4개중에 하나 고르기 위해서

		printf("[%d/10] %d %c %d = ", i, random_1, four[op], random_2);
		scanf_s("%d", &answer);

		//정답을 뽑는 부분
		switch (op) {
			case 0:
				correct_answer = random_1 + random_2;
				break;
			case 1:
				correct_answer = random_1 - random_2;
				break;
			case 2:
				correct_answer = random_1 * random_2;
				break;
			case 3:
				correct_answer = floor(random_1 / random_2); //나머지 버리기
				break;
			default:
				break;
		}

		//답이 맞는지 확인하는 부분
		if (answer == correct_answer) {
			printf("Correct!");
		}
		else {
			printf("Wrong! Answer is (%d)", correct_answer);
		}
	}
}