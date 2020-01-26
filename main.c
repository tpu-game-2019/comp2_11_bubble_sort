#include <stdio.h>

int main(int argc, char* argv[])
{
	char str[7];
	int number[100];
	int i, j, count = 0;

	while (fgets(str, sizeof(str), stdin)) {
		number[count] = atoi(str);
		count++;
	}

	//表示
	for (i = 0; i < count; i++) {
		printf("%d", number[i]);
		if (i == count - 1)
			putchar('\n');
		else
			putchar(' ');
	}

	int swap;

	for (i = 0; i < count; i++) {
		for (j = count - 1; j > 0; j--) {
			if (number[j] < number[j - 1]) {
				//交換
				swap = number[j];
				number[j] = number[j - 1];
				number[j - 1] = swap;
				//表示
				for (i = 0; i < count; i++) {
					printf("%d", number[i]);
					if (i == count - 1)
						putchar('\n');
					else
						putchar(' ');
				}
			}
		}
	}

	return 0;
}
