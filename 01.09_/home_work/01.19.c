/*
	напишите функцию reverse(s), которая переписывает свой строковый аргумент s в обратном порядке. 
	Воспользуйтесь ею для написания программы, 
	которая бы выполняла такое обращение над каждой строкой входного потока по очереди.
*/

#include <stdio.h>

#define MAXSTRING 1000

int getstring(char[], int);
void reverse(char[], int);

int main()
{
	int length;
	char string[MAXSTRING];

	while ((length = getstring(string, MAXSTRING)) > 0)
	{
		reverse(string, length);
		printf("%s", string);
	}
	return 0;
}

int getstring(char string[], int limit)
{
	int input,
		index;

	for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
		string[index] = input;

	if (input == '\n')
		string[index++] = input;

	string[index] = '\0';
	return index;
}

void reverse(char string[], int limit)
{
	int temp,
		i_from,
		i_to;

	for (i_from = 0, i_to = limit - 2; i_from < i_to; ++i_from, --i_to) // limit - \0 - \n
	{
		temp = string[i_from];
		string[i_from] = string[i_to];
		string[i_to] = temp;
	}
}
