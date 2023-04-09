#include<stdio.h>

int is369Number(int);
int is3MultipleNumber(int);

int main() {
	int count = 0;
	int a, b;
	printf("입력: \n");
	scanf_s("%d %d", &a, &b);
	for (int i = a; i < b; i++) {
		if (is369Number(i)) {
			count++;
		}
		if (is3MultipleNumber(i)) {
			count++;
		}
	}
	printf("출력:\n%d", count);
}



int is369Number(int n) { //3,6,9를 포함하는수 정의
	int flag = 0;
	if ((n - 3) % 10 == 0 || (n - 6) % 10 == 0 || (n - 9) % 10 == 0) { // 일의자리가 3,6,9 인지 확인
		flag = 1;
	}
	int tmp = n / 30;
	if (flag != 1 && tmp > 0 && tmp <= 3) { // 십의자리가 3,6,9 인지 확인
		flag = 1;
	}

	return flag;
}
int is3MultipleNumber(int n) {  // 3의배수 정의
	int flag = 0;
	if (n % 3 == 0)
		flag = 1;
	return flag;
}
