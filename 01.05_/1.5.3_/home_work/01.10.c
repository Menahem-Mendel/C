/*
	напишите программу для копрования входного потока в выходной с заменой знаков табуляции на \t, 
	символов возврата назад на \b, 
	а обратных косых черт на \\. 
	это сделает табуляции и символы возврата легко читаемыми в потоке
*/

#include <stdio.h>

int main()
{
	int input;

	while ((input = getchar()) != EOF)
		switch (input)
		{
		case '\t':
			printf("\\t");
			break;
		case '\b':
			printf("\\b");
			break;
		case '\\':
			printf("\\\\");
			break;
		default:
			putchar(input);
			break;
		}
	return 0;
}
