#include<stdio.h>

int is369Number(int);
int is3MultipleNumber(int);

int main() {
	int count = 0;
	int a, b;
	printf("�Է�: \n");
	scanf_s("%d %d", &a, &b);
	for (int i = a; i < b; i++) {
		if (is369Number(i)) {
			count++;
		}
		if (is3MultipleNumber(i)) {
			count++;
		}
	}
	printf("���:\n%d", count);
}



int is369Number(int n) { //3,6,9�� �����ϴ¼� ����
	int flag = 0;
	if ((n - 3) % 10 == 0 || (n - 6) % 10 == 0 || (n - 9) % 10 == 0) { // �����ڸ��� 3,6,9 ���� Ȯ��
		flag = 1;
	}
	int tmp = n / 30;
	if (flag != 1 && tmp > 0 && tmp <= 3) { // �����ڸ��� 3,6,9 ���� Ȯ��
		flag = 1;
	}

	return flag;
}
int is3MultipleNumber(int n) {  // 3�ǹ�� ����
	int flag = 0;
	if (n % 3 == 0)
		flag = 1;
	return flag;
}
