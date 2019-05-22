// #include <stdio.h>
// #define MAXLINE 1000
// #define COLUMNS 8

// void detab(char *);
// void copy(char *, char *);

// int main()
// {
// 	int input, index, position = 0;
// 	char string[MAXLINE];

// 	for (index = 0; index < MAXLINE - 1; index++)
// 		string[index] = 0;

// 	for (index = 0; (input = getchar()) != EOF; index++)
// 		string[index] = input;

// 	detab(string);
// 	printf("%s", string);

// 	return 0;
// }

// void detab(char str[])
// {
// 	char new_string[MAXLINE];
// 	int position = 0, index1, index2;

// 	for (index1 = 0; index1 < MAXLINE - 1; index1++)
// 		new_string[index1] = 0;

// 	for (index1 = 0; str[index1] != '\0'; index1++, index2++)
// 	{
// 		if (str[index1] == '\n')
// 		{
// 			new_string[index2] = str[index1];
// 			position = 0;
// 		}
// 		else if (str[index1] == '\t')
// 		{
// 			for (int tab_length = COLUMNS - (position % COLUMNS), index2 = 0; tab_length > 0; tab_length--, index2++)
// 				new_string[index2] = '_';
// 			index2--;

// 			position = 0;
// 		}
// 		else
// 		{
// 			new_string[index2] = str[index1];
// 			++position;
// 		}
// 	}

// 	copy(str, new_string);
// }

// void copy(char to[], char from[])
// {
// 	for (int index = 0; to[index] != '\0'; ++index) // проверить
// 		to[index] = 0;

// 	for (int index = 0; (to[index] = from[index]) != '\0'; ++index)
// 		;
// }

/*
	напишите прорамму detab, 
	которая бы заменяла символы табуляции во входном потоке соответствующим количеством пробелов до следующегей границы табуляции. 
	предположим, 
	что табуляция имеет фиксированную ширину n столбцов. 
	следует ли сделать n переменной или символическим параметром
*/

#include <stdio.h>

#define MAXSTRING 1000
#define TABCOLUMNS 7

int getstring(char[], int);

int main()
{
	int length;
	char string[MAXSTRING];

	while ((length = getstring(string, MAXSTRING)) > 0)
	{
		printf("%s", string);
	}
	return 0;
}

int getstring(char string[], int limit)
{
	int input,
		index,
		c_spaces,
		position;

	position = c_spaces = 0;
	// 	123456789
	//

	for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
	{
		if (input == '\t')
		{
			c_spaces = TABCOLUMNS - (position % TABCOLUMNS);
			position = 0;

			while (c_spaces >= 0)
			{
				string[index++] = '_';
				--c_spaces;
			}
			index--;
		}
		else
		{
			string[index] = input;

			position++;
		}
	}

	if (input == '\n')
		string[index++] = input;

	string[index] = '\0';
	return index;
}
