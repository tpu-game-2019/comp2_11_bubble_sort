#include <stdio.h>
#include <stdlib.h>
#define ArrayMax 100
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
	count = 0;
	int MinIndex = 0;
	for (size_t i = 0; i < IndexMax; i++)
	{
		printf("%d", Array[i]);
		if (i+1 < IndexMax)
			printf(" ");
		else
			printf("\n");
	}
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
			for (size_t i = 0; i < IndexMax; i++)
			{
				printf("%d", Array[i]);
				if (i+1 < IndexMax)
					printf(" ");
				else
					printf("\n");
			}
		}
	}
#pragma endregion

	return 0;
}
