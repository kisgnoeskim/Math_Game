#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int random_1 = 0, random_2 = 0;
int answer, correct_answer;
char four[4] = { '+', '-', '*', '/' };
int op;

int main() {

	for (int i = 1; i <= 10; i++) {
		random_number(); //���� ���� a, b�� �̱�
		op = rand() % 4; //��Ģ���� 4���߿� �ϳ� ���� ���ؼ�

		printf("[%d/10] %d %c %d = ", i, random_1, four[op], random_2);
		scanf_s("%d", &answer);

		switch (op) {
			case 1:
				correct_answer = random_1 + random_2;
				break;
			case 2:
				correct_answer = random_1 - random_2;
				break;
			case 3:
				correct_answer = random_1 * random_2;
				break;
			case 4:
				correct_answer = floor(random_1 / random_2); //������ ������
				break;
			default:
		}

		if (answer == correct_answer) {
			printf
		}
	}

	return 0;

}

int random_number() {

	srand(time(NULL));
	random_1 = (rand() % 20) + 1;
	random_2 = (rand() % 20) + 1;

	return random_1, random_2;
}