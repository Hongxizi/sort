#include<stdio.h>

void creat( int end)
{
	int i = 0;
	//int a[10000] = { 0 };
	int a = 0;
	errno_t ch;
	FILE* fp;
	ch = fopen_s(&fp, "data.txt", "w");
	if (ch)
	{
		exit(0);
	}
	srand((unsigned)time(NULL));//产生随机数种子
	for (i = 0; i < end; i++)
	{
		//a[i] = (rand() % 1000) + 1;
		a = (rand() % 1000);
		fprintf(fp, "%d ", a);
	}
	fclose(fp);
	//for (i = 0; i < 10000; i++)
	//{
	//	printf("%d ", a[i]);
	//}

}

void read(int* a, int end)
{
	int i = 0;
	errno_t ch;
	FILE* fp;
	ch = fopen_s(&fp, "data.txt", "r");
	if (ch)
	{
		exit(0);
	}
	for (i = 0; i < end; i++)
	{
		fscanf_s(fp, "%d ", &a[i]);
	}
	fclose(fp);
}

void write(int* a, int end)
{
	int i = 0;
	errno_t ch;
	FILE* fp;
	ch = fopen_s(&fp, "data.txt", "w");
	if (ch)
	{
		exit(0);
	}
	for (i = 0; i < end; i++)
	{
		fprintf(fp, "%d ", a[i]);
	}
	fclose(fp);
}