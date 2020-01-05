#include <stdio.h>
#include <stdlib.h>
#define ArrayMax 100
void showArray(int Array[],int IndexMax)
{
	for (size_t i = 0; i < IndexMax; i++)
		{
			printf("%d", Array[i]);
			if (i+1 < IndexMax)
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
	int MinIndex = 0;
	showArray(Array, IndexMax);
	for (int j = 0; j < IndexMax; j++)
	{
		int Min = Array[j];
		for (size_t i = j; i < IndexMax; i++)
		{
			if (Min > Array[i])
			{
				Min = Array[i];
				MinIndex = i;
			}
		}
		while (MinIndex > 0 && Array[MinIndex] < Array[MinIndex - 1])
		{
			int tmp = Array[MinIndex];
			Array[MinIndex] = Array[MinIndex - 1];
			Array[MinIndex - 1] = tmp;
			MinIndex--;
			showArray(Array, IndexMax);
		}
	}
#pragma endregion

	return 0;
}
