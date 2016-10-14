#include <stdio.h>

int main()
{
	const char* str1 = "OPTION-1";
	const char* str2 = NULL;

	printf("%s\n", str1 ? : "OPTION-2");
	printf("%s\n", str2 ? : "OPTION-3");

	return 0;
}
