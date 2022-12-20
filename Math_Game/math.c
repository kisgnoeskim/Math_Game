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
		random_number(); //���� ���� a, b�� �̱�
		op = rand() % 4; //��Ģ���� 4���߿� �ϳ� ���� ���ؼ�

		printf("[%d/10] %d %c %d = ", i, random_1, four[op], random_2);
		scanf_s("%d", &answer);

		//������ �̴� �κ�
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
				correct_answer = floor(random_1 / random_2); //������ ������
				break;
			default:
				break;
		}

		//���� �´��� Ȯ���ϴ� �κ�
		if (answer == correct_answer) {
			printf("Correct!");
		}
		else {
			printf("Wrong! Answer is (%d)", correct_answer);
		}
	}
}