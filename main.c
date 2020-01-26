#include <stdio.h>

int main(void)
{

	int i, j, tmp;

	char str[7];
	int number[100];
	int count=0;
	
	while (fgets(str, sizeof(str), stdin)) {
		number[count] = atoi(str);
		count++;
	}

	for (i = 0; i < count; i++) {
		printf("%d", number[i]);
		if (i == count - 1)
			putchar('\n');
		else
			putchar(' ');
	}

	for (i = 0; i < count; ++i) {
		for (j = i + 1; j < count; ++j) {
			if (number[i] > number[j]) {
				tmp = number[i];
				number[i] = number[j];
				number[j] = tmp;
			}
		}
	}

	return 0;
}
