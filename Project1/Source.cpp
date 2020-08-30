#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main() {
	int a = 65, num, i, j;
	char x[1000];
	printf("Enter number: ");
	scanf("%d", &num);
	if (x > 0) {

		for (i = 0; i < num; i++) {
			for (j = 0; j <= i; j++) {
				x[i] = a;
				printf("%c ", x[i]);
				a++;
				if (a > 90) {
					a = 65;
				}
			}
			printf("\n");
		}
	}

	else printf("Error");
}