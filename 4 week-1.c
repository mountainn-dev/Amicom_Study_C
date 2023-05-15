#include <stdio.h>
#include <string.h>

#define MAX 100
int main() {
	char ex1[] = "copy this and reverse it";
	int ex_length = strlen(ex1);
	char cpy[MAX];
	char* str2 = NULL;
	int j = 0;
	char* p_tok = strtok_s(ex1, " ",&str2);
	while (p_tok != NULL) {
		int length = strlen(p_tok);
		for (int i = length - 1; i >= 0; i--) { //등호 넣음 i가 0까지
			cpy[j] = p_tok[i];
			j++;
		}
		p_tok = strtok_s(NULL, " ", &str2);
		if (j == ex_length) { //=을 ==으로
			cpy[j] = '\0';
			break;
		}
		cpy[j] = ' ';
		j++;
	}
	printf("%s", cpy);
}

