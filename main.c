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

	for (i = 0; i < count; ++i) {
		for (j = i + 1; j < count; ++j) {
			if (number[i] > number[j]) {
				tmp = number[i];
				number[i] = number[j];
				number[j] = tmp;
			}
		}
		for(i = 0; i < count; ++i)
			printf("%d\n", number[i]);
	}

	for (i = 0; i < count; ++i)
		printf("%d\n", number[i]);

	printf("\n");

	return 0;
}
