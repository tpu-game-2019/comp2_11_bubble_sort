#include <stdio.h>

int main(int argc, char* argv[])
{
	char str[7];
	int number[100];
	int i, j,n, count = 0;
	int temp;

	while (fgets(str, sizeof(str), stdin)) {
		number[count] = atoi(str);
		count++;
	}

	for (n = 0; n < count; n++) {
		printf("%d", number[n]);
		if (n == count - 1)
			putchar('\n');
		else
			putchar(' ');
	}

	for (i = 0; i < count; i++) {
		for (j = count - 1; j > 0; j--) {
			if (number[j] < number[j - 1]) {
				temp = number[j]; number[j] = number[j - 1]; number[j - 1] = temp;
				for (n = 0; n < count; n++) {
					printf("%d", number[n]);
					if (n == count - 1)
						putchar('\n');
					else
						putchar(' ');
				}
			}
		}
	}

	return 0;
}
