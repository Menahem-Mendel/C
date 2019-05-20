/*
	вывод самой длинной строки в потоке
*/

#include <stdio.h>

#define MAXSTRING 1000 // максимальная длина строки

int getline(char[], int);
void copy(char[], char[]);

int main()
{
	int length,				// длина текущей строки
		max_string;			// текущая максимальная длина
	char string[MAXSTRING], // текущая введенная строка
		longest[MAXSTRING]; //самая длинная строка из введенных

	max_string = 0;

	while ((length = getline(string, MAXSTRING)) > 0)
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
int getline(char string[], int limit)
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

	while ((longest[index] = string[index]) != '\0')
		++index;
}
