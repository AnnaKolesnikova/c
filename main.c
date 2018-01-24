#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



int main()
{
	char x[100];
	char *ptr;
	int n, i, j;

	printf("\nVvedite stroku: ");
	fgets(x, 100, stdin);

	n = strlen(x);
    printf("%s", x);

	ptr = (char*)malloc((n + 1) * sizeof(char)); //for char string +1 symbol more for symbol of string end 

	if (!ptr)
	{
		printf("\nNet mesta!!!\n");
		exit(1);
	}
	for (j = 0, i = n; i >= 0; i--, j++)
	{
		ptr[j] = x[i];
	}

	ptr[j] = '\0';
	puts(ptr);

	free(ptr);

	printf("\n\n\nThe end!!!\n");
	getchar();
	return 0;
}