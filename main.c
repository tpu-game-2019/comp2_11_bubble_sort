#include <stdio.h>
#include <stdlib.h>
#define ArrayMax 100
void showArray(int Array[], int IndexMax)
{
	for (size_t i = 0; i < IndexMax; i++)
	{
		printf("%d", Array[i]);
		if (i + 1 < IndexMax)
			printf(" ");
		else
			printf("\n");
	}
}
int main(int argc, char *argv[])
{
	char str[7];
	int Array[ArrayMax] = {};
	int count = 0;
	while (fgets(str, sizeof(str), stdin))
	{
		Array[count] = atoi(str);
		count++;
	}

#pragma region
	int IndexMax = count;
	count--;
	int MinIndex = 0;
	showArray(Array, IndexMax);
	for (size_t i = 0; i < IndexMax; i++)
	{
		for (int j = IndexMax-1; j > 0; j--)
		{
			if(Array[j] < Array[j - 1])
			{
				int tmp = Array[j];
				Array[j] = Array[j - 1];
				Array[j - 1] = tmp;
				//count--;
				showArray(Array, IndexMax);
			}
		}
	}
#pragma endregion

	return 0;
}
