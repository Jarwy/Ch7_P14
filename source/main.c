 #include<stdio.h>
 #include<stdlib.h>
int main(void)
{
	FILE *fptr;
	char ch;
	int counter = 0;

	fptr = fopen("welcome.txt", "r");

	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			counter++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", counter);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
	return 0;
}
