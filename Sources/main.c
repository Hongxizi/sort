#include <stdio.h>
#include<time.h>
#include"sort.h"
#include"test.h"

//int main()
//{
//	//int a[10] = { 2,1,3,7,4,6,9,0,8,5};
//	//int a[10] = { 123,56,897,345,567,234,378,163,826,726 };
//	////int a[10] = { 1,2,0,2,1,0,2,1,0,2 };
//	//int temp[10] = { 0 };
//	//int i = 0;
//
//	//insertSort(a, 10);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//
//	//MergeSort(a, 0, 9, temp);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", temp[i]);
//	//}
//
//	/*QuickSort_Recursion(a, 0, 9);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}*/
//
//	//CountSort(a, 10, 897);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//
//	//RadixCountSort(a, 10);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//	 
//	//ColorSort (a, 10);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//
//	//printf("\n%d",Search_QS(a, 0, 9, 5));
//
//	//QuickSort(a, 10);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//
//
//
//	//int a[10000] = { 0 };
//	//int temp[10000] = { 0 };
//	//int i = 0;
//
//	////creat();
//
//	//read(a);
//
//	//clock_t start = clock();
//	////insertSort(a, 10000);
//	////QuickSort_Recursion(a, 0, 9999);
//	////MergeSort(a, 0, 9999, temp);
//	////CountSort(a, 10000, 999);
//	////RadixCountSort(a, 10000);
//	////QuickSort(a, 10000);
//
//	//clock_t diff = clock() - start;
//	//printf("�����㷨����10000�ε�ʱ��Ϊ%dms\n", diff);
//	//for (i = 0; i < 10000; i++)
//	//{
//	//	printf("%4d ", a[i]);
//	//}
//
//	////write(a);
//
//	//while (1)
//	//{
//
//	//}
//
//	return 0;
//}

void menu()
{
	printf("-------------------\n");
	printf("1.��������\n");
	printf("2.�鲢����\n");
	printf("3.�������򣨵ݹ飩\n");
	printf("4.�������򣨷ǵݹ飩\n");
	printf("5.��������\n");
	printf("6.������������\n");
	printf("-------------------\n");

}


void CreateMenu()
{
	printf("\n��������ѡ��˵��˵�\n"
		"1.���� 10��000����������\n2.���� 50��000����������\n3.����200��000����������\n\n");
}

	int a[200000] = { 0 };
	int temp[200000] = { 0 };
int main()
{
	int i, scan, end = 0;

	CreateMenu();
	printf("������˵���ţ�");
	scanf_s("%d", &scan);
	switch (scan)
	{
	case 1:
	{
		end = 10000;
		creat(end);
		read(a, end);
		break;
	}
	case 2:
	{
		end = 50000;
		creat(end);
		read(a, end);
		break;
	}
	case 3:
	{
		end = 200000;
		creat(end);
		read(a, end);
		break;
	}
	}
	menu();
	printf("������˵���ţ�");
	scanf_s("%d", &scan);
	int start = clock();
	switch (scan)
	{
	case 1:
	{
		insertSort(a, end);
		break;
	}case 2:
	{
		MergeSort(a, 0, end - 1, a);
		break;
	}
	case 3 :
		{
			QuickSort_Recursion(a, 0, end - 1);
			break;
	}
	case 4:
	{
		QuickSort(a, end);
		break;
	}
	case 5:
	{
		CountSort(a, end, 999);
		break;
	}
	case 6:
	{
		RadixCountSort(a, end);
		break;
	}	
	}
	printf("����ʱ��Ϊ��%d ms\n", clock() - start);
	for (i = 0; i < end; i++)
		printf("%4d ", a[i]);
	write(a, end);

	return 0;
}

