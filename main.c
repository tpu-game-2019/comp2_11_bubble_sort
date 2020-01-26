#include <stdio.h>

int main(int argc, char* argv[])
{
	char str[7];
	int data[100];
	int i, j, count = 0;
	int temp;

	while (fgets(str, sizeof(str), stdin)) {
		data[count] = atoi(str);
		count++;
	}

	for (i = 0; i < count; i++) {
		printf("%d", data[i]);
		if (i == count - 1)
			putchar('\n');
		else
			putchar(' ');
	}
		for (i = 0; i < count; i++) {
			for (j = count - 1; j > 0; j--) {
				if (data[j] < data[j - 1]) {
					temp = data[j];
					data[j] = data[j - 1];
					data[j - 1] = temp;

					for (i = 0; i < count; i++) {
						printf("%d", data[i]);
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
		
