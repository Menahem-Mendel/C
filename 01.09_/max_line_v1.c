/*
	вывод самой длинной строки в потоке
*/

#include <stdio.h>

#define MAXLENGTH 1000 // максимальная длина строки

int getstring(char[], int);
void copy(char[], char[]);

int main()
{
	int length,		// длина текущей строки
		max_string; // текущая максимальная длина

	char string[MAXLENGTH], // текущая введенная строка
		longest[MAXLENGTH]; // самая длинная строка из введенных

	max_string = 0;

	while ((length = getstring(string, MAXLENGTH)) > 0)
		if (length > max_string)
		{
			max_string = length;
			copy(longest, string);
		}

	if (max_string > 0)
		printf("%s", longest);
	return 0;
}

// считывает строку в string, возвращает ее длину
int getstring(char string[], int limit)
{
	int input,
		index;

	for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
		string[index] = input;

	if (input == '\n')
	{
		string[index] = input;
		++index;
	}

	string[index] = '\0';
	return index;
}

// копирует строку from в to. длина to считается достаточной
void copy(char to[], char from[])
{
	int index;

	index = 0;

	while ((to[index] = from[index]) != '\0')
		++index;
}
