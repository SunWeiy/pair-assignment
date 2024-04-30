#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<string.h>
using namespace std;
//��Դ��Ϣ
int numHouse;
int numCustomer;
int numWorker;
int numMarket;
typedef struct House
{
	int number;
	char village[100];
	int area;
	int floor;
	char decorate[100];
	char tel[100];
	int price;
	char sale[100];
}House;
//�����Դ��Ϣ
void showHouse(House* ho)
{
	printf("��Դ��Ϣ\n");
	for (int i = 0; i < numHouse; i++)
	{
		cout << ho[i].number << "  " << ho[i].village << "  " << ho[i].area << "  " << ho[i].floor << "  " << ho[i].decorate << "  " << ho[i].tel << "  " << ho[i].price << "  " << ho[i].sale;
		printf("\n");

	}
}
//���ӷ�Դ��Ϣ
void addHouse(House* ho)
{
	printf("��Դ���:");
	scanf("%d", &ho[numHouse].number);
	printf("С������:");
	scanf("%s", ho[numHouse].village);
	printf("���:");
	scanf("%d", &ho[numHouse].area);
	printf("¥��:");
	scanf("%d", &ho[numHouse].floor);
	printf("װ��:");
	scanf("%s", ho[numHouse].decorate);
	printf("������ϵ��ʽ:");
	scanf("%s", ho[numHouse].tel);
	printf("���Ƽ۸�:");
	scanf("%d", &ho[numHouse].price);
	printf("�������:");
	scanf("%s", ho[numHouse].sale);
	numHouse++;
}
//�ͻ���Ϣ
typedef struct Customer
{
	int number;
	char name[100];
	char phone[20];
	int money;
	char wish[20];
}Customer;
//����ͻ���Ϣ
void showCustomer(Customer* cus)
{
	printf("�ͻ���Ϣ\n");
	for (int i = 0; i < numCustomer; i++)
	{
		cout << cus[i].number << "  " << cus[i].name << "  " << cus[i].phone << "  " << cus[i].money << "  " << cus[i].wish;
		printf("\n");
	}
}
//���ӿͻ���Ϣ
void addCustomer(Customer* cus)
{
	printf("�ͻ����:");
	scanf("%d", &cus[numCustomer].number);
	printf("�ƺ�:");
	scanf("%s", cus[numCustomer].name);
	printf("��ϵ��ʽ:");
	scanf("%s", cus[numCustomer].phone);
	printf("�����ʽ�:");
	scanf("%d", &cus[numCustomer].money);
	printf("��������:");
	scanf("%s", cus[numCustomer].wish);
	numCustomer++;
}
//ְ����Ϣ
typedef struct Worker
{
	int number;
	char name[100];
	char sex[20];
	char tel[20];
}Worker;
//���ְ����Ϣ
void showWorker(Worker* wor)
{
	printf("ְ����Ϣ\n");
	for (int i = 0; i < numWorker; i++)
	{
		cout << wor[i].number << "  " << wor[i].name << "  " << wor[i].sex << "  " << wor[i].tel;
		printf("\n");
	}
}
//����ְ����Ϣ
void addWorker(Worker* wor)
{
	printf("ְ�����:");
	scanf("%d", &wor[numWorker].number);
	printf("����:");
	scanf("%s", wor[numWorker].name);
	printf("�Ա�:");
	scanf("%s", wor[numWorker].sex);
	printf("��ϵ��ʽ:");
	scanf("%s", wor[numWorker].tel);
	numWorker++;
}
//������Ϣ
typedef struct Market
{
	char success[20];
	int Housenumber;
	int Customernumber;
	int Workernumber;
}Market;
//���������Ϣ
void showMarket(Market* mar)
{
	printf("������Ϣ\n");
	for (int i = 0; i < numMarket; i++)
	{
		cout << mar[i].success << "  " << mar[i].Housenumber << "  " << mar[i].Customernumber << "  " << mar[i].Workernumber;
		printf("\n");
	}
}
//��Ϣ��ѯ
void search(House* ho, char* vi, int area1, int area2, int price1, int price2, int num)
{
	int a = 0;
	int way = num;
	if (way == 1)
	{
		for (int i = 0; i < 4; i++)
		{

			if (strcmp(ho[i].village, vi) == 0)
			{
				cout << ho[i].number << "  " << ho[i].village << "  " << ho[i].area << "  " << ho[i].floor << "  " << ho[i].decorate << "  " << ho[i].tel << "  " << ho[i].price << "  " << ho[i].sale;
				a++;
				printf("\n");
			}
		}
		if (a == 0)
		{
			printf("���޷���Ҫ��ķ�Դ");
		}
	}
	if (way == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			if (ho[i].area > area1 && ho[i].area < area2)
			{
				cout << ho[i].number << "  " << ho[i].village << "  " << ho[i].area << "  " << ho[i].floor << "  " << ho[i].decorate << "  " << ho[i].tel << "  " << ho[i].price << "  " << ho[i].sale;
				a++;
				printf("\n");
			}
		}
		if (a == 0)
		{
			printf("���޷��������ķ�Դ");
		}
	}
	if (way == 3)
	{
		for (int i = 0; i < 4; i++)
		{
			if (ho[i].price > price1 && ho[i].price < price2)
			{
				cout << ho[i].number << "  " << ho[i].village << "  " << ho[i].area << "  " << ho[i].floor << "  " << ho[i].decorate << "  " << ho[i].tel << "  " << ho[i].price << "  " << ho[i].sale;
				a++;
				printf("\n");
			}
		}
		if (a == 0)
		{
			printf("���޷��������ķ�Դ");
		}
	}
	if (way == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (strcmp(ho[i].village, vi) == 0)
			{
				if (ho[i].area > area1 && ho[i].area < area2)
				{
					if (ho[i].price > price1 && ho[i].price < price2)
					{
						cout << ho[i].number << "  " << ho[i].village << "  " << ho[i].area << "  " << ho[i].floor << "  " << ho[i].decorate << "  " << ho[i].tel << "  " << ho[i].price << "  " << ho[i].sale;
						a++;
						printf("\n");
					}
				}
			}
		}
		if (a == 0)
		{
			printf("���޷��������ķ�Դ");
		}
	}
}
//��Ϣ����
void sort(House* ho, int num)
{
	int way = num;
	if (way == 1)
	{
		printf("�����������\n");
		for (int i = 0; i < numHouse; i++)
		{
			for (int j = i + 1; j < numHouse; j++)
			{
				House m;
				if (ho[i].area > ho[j].area)
				{
					m = ho[i];
					ho[i] = ho[j];
					ho[j] = m;
				}
			}
		}
		showHouse(ho);
	}
	if (way == 2)
	{
		printf("���ռ۸�����\n");
		for (int i = 0; i < numHouse; i++)
		{
			for (int j = i + 1; j < numHouse; j++)
			{
				House m;
				if (ho[i].price > ho[j].price)
				{
					m = ho[i];
					ho[i] = ho[j];
					ho[j] = m;
				}
			}
		}
		showHouse(ho);
	}
}
//����Դ��Ϣ�����ļ�
void OutputHouse(House* ho)
{
	FILE* file = fopen("destfile1.txt", "w+");
	if (file == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numHouse; i++)
	{
		fprintf(file, "%d %s %d %d %s %s %d %s\n", ho[i].number, ho[i].village, ho[i].area, ho[i].floor, ho[i].decorate, ho[i].tel, ho[i].price, ho[i].sale);
	}
	fclose(file);
}
//��ȡ��Դ�ļ���Ϣ
void InputHouse(House* ho)
{
	FILE* fp = fopen("destfile1.txt", "r");
	if (fp == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numHouse; i++)
	{
		fscanf(fp, "%d %s %d %d %s %s %d %s\n", &ho[i].number, ho[i].village, &ho[i].area, &ho[i].floor, ho[i].decorate, ho[i].tel, &ho[i].price, ho[i].sale);
	}
	fclose(fp);
}
//���ͻ���Ϣ�����ļ�
void OutputCustomer(Customer* cus)
{
	FILE* file = fopen("destfile2.txt", "w+");
	if (file == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numCustomer; i++)
	{
		fprintf(file, "%d %s %s %d %s\n", cus[i].number, cus[i].name, cus[i].phone, cus[i].money, cus[i].wish);
	}
	fclose(file);
}
//��ȡְ����Ϣ
void InputCustomer(Customer* cus)
{
	FILE* fp = fopen("destfile2.txt", "r");
	if (fp == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numCustomer; i++)
	{
		fscanf(fp, "%d %s %s %d %s\n", &cus[i].number, cus[i].name, cus[i].phone, &cus[i].money, cus[i].wish);
	}
	fclose(fp);
}
//��ְ����Ϣ�����ļ�                                                   
void OutputWorker(Worker* wor)
{
	FILE* file = fopen("destfile3.txt", "w+");
	if (file == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numWorker; i++)
	{
		fprintf(file, "%d %s %s %s\n", wor[i].number, wor[i].name, wor[i].sex, wor[i].tel);
	}
	fclose(file);
}
//��ȡְ����Ϣ
void InputWorker(Worker* wor)
{
	FILE* fp = fopen("destfile3.txt", "r");
	if (fp == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numWorker; i++)
	{
		fscanf(fp, "%d %s %s %s\n", &wor[i].number, wor[i].name, wor[i].sex, wor[i].tel);
	}
	fclose(fp);
}
//��������Ϣ�����ļ�
void OutputMarket(Market* mar)
{
	FILE* file = fopen("destfile4.txt", "w+");
	if (file == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numMarket; i++)
	{
		fprintf(file, "%s %d %d %d\n", mar[i].success, mar[i].Housenumber, mar[i].Customernumber, mar[i].Workernumber);
	}
	fclose(file);
}
//��ȡ������Ϣ
void InputMarket(Market* mar)
{
	FILE* fp = fopen("destfile4.txt", "r");
	if (fp == NULL)
	{
		perror("�ļ�����");
	}
	for (int i = 0; i < numMarket; i++)
	{
		fscanf(fp, "%s %d %d %d\n", mar[i].success, &mar[i].Housenumber, &mar[i].Customernumber, &mar[i].Workernumber);
	}
	fclose(fp);
}
//��������Ϣ�����ļ�
void OutputNumber()
{
	FILE* file = fopen("destfile5.txt", "w+");
	if (file == NULL)
	{
		perror("�ļ�����");
	}
	fprintf(file, "%d %d %d %d\n", numHouse, numCustomer, numWorker, numMarket);
	fclose(file);
}
//��ȡ������Ϣ
void InputNumber()
{
	FILE* fp = fopen("D:\Projects\C(++)\Project8\Project8\destfile5.txt", "r");
	if (fp == NULL)
	{
		perror("�ļ�����");
		return;
	}
	fscanf(fp, "%d %d %d %d\n", &numHouse, &numCustomer, &numWorker, &numMarket);
	fclose(fp);
}
int main()
{
	House ho[100];
	Customer cus[100];
	Worker wor[100];
	Market mar[100];
	InputNumber();
	int number;
	for (int i = 1;; i++)
	{
		system("cls");
		printf("�˵�\n");
		printf("1���ֶ�������Ϣ\n");
		printf("2�����ļ���ȡ��Ϣ\n");
		printf("3����Դ��Ϣ����\n");
		printf("4���ͻ���Ϣ����\n");
		printf("5��ְ����Ϣ����\n");
		printf("6��������Ϣ����\n");
		printf("7����Ϣ��ѯ\n");
		printf("8����Ϣ����\n");
		printf("9������Ϣ�����ļ�\n");
		printf("10������\n");
		printf("��ѡ����\n");
		scanf("%d", &number);
		if (number == 1)
		{
			printf("1����Դ��Ϣ\n");
			for (int i = 0; i < 4; i++)
			{
				printf("��Դ���:");
				scanf("%d", &ho[i].number);
				printf("С������:");
				scanf("%s", ho[i].village);
				printf("���:");
				scanf("%d", &ho[i].area);
				printf("¥��:");
				scanf("%d", &ho[i].floor);
				printf("װ��:");
				scanf("%s", ho[i].decorate);
				printf("������ϵ��ʽ:");
				scanf("%s", ho[i].tel);
				printf("���Ƽ۸�:");
				scanf("%d", &ho[i].price);
				printf("�������:");
				scanf("%s", ho[i].sale);
			}
			printf("2���ͻ���Ϣ\n");
			for (int i = 0; i < 4; i++)
			{
				printf("�ͻ����:");
				scanf("%d", &cus[i].number);
				printf("�ƺ�:");
				scanf("%s", cus[i].name);
				printf("��ϵ��ʽ:");
				scanf("%s", cus[i].phone);
				printf("�����ʽ�:");
				scanf("%d", &cus[i].money);
				printf("��������:");
				scanf("%s", cus[i].wish);
			}
			printf("3��ְ����Ϣ\n");
			for (int i = 0; i < 4; i++)
			{
				printf("ְ�����:");
				scanf("%d", &wor[i].number);
				printf("����:");
				scanf("%s", wor[i].name);
				printf("�Ա�:");
				scanf("%s", wor[i].sex);
				printf("��ϵ��ʽ:");
				scanf("%s", wor[i].tel);
			}
			printf("4��������Ϣ\n");
			for (int i = 0; i < 7; i++)
			{
				printf("�ɽ���¼:");
				scanf("%s", mar[i].success);
				printf("��Դ���:");
				scanf("%d", &mar[i].Housenumber);
				printf("�ͻ����:");
				scanf("%d", &mar[i].Customernumber);
				printf("������Ա���:");
				scanf("%d", &mar[i].Workernumber);
			}
		}
		if (number == 2)
		{
			InputNumber();
			InputHouse(ho);
			InputCustomer(cus);
			InputWorker(wor);
			InputMarket(mar);

		}
		if (number == 3)
		{
			int sum;
			printf("1��չʾ��Դ��Ϣ\n");
			printf("2����ӷ�Դ��Ϣ\n");
			printf("3��ɾ����Դ��Ϣ\n");
			printf("��ѡ����:");
			scanf("%d", &sum);
			if (sum == 1)
			{
				showHouse(ho);
			}
			if (sum == 2)
			{
				addHouse(ho);
			}
			if (sum == 3)
			{
				printf("������Ҫɾ����Դ���:");
				int a;
				scanf("%d", &a);
				int b;
				for (int i = 0; i < numHouse; i++)
				{
					if (ho[i].number == a)
					{
						b = i;
						break;
					}
				}
				for (int i = b; i < numHouse; i++)
				{
					ho[i] = ho[i + 1];
				}
				numHouse--;
			}

		}
		if (number == 4)
		{
			int sum;
			printf("1��չʾ�˿���Ϣ\n");
			printf("2����ӹ˿���Ϣ\n");
			printf("3����ѯ�˿���Ϣ\n");
			printf("4��ɾ���˿���Ϣ\n");
			printf("��ѡ����:");
			scanf("%d", &sum);
			if (sum == 1)
			{
				showCustomer(cus);
			}
			if (sum == 2)
			{
				addCustomer(cus);
			}
			if (sum == 3)
			{
				printf("������˿ͱ��:");
				int c;
				scanf("%d", &c);
				for (int i = 0; i < numCustomer; i++)
				{
					if (cus[i].number == c)
					{
						printf("%d %s %s %d %s", cus[i].number, cus[i].name, cus[i].phone, cus[i].money, cus[i].wish);
						break;
					}
				}
			}
			if (sum == 4)
			{
				printf("������Ҫɾ���˿ͱ��:");
				int a;
				scanf("%d", &a);
				int b;
				for (int i = 0; i < numCustomer; i++)
				{
					if (cus[i].number == a)
					{
						b = i;
						break;
					}
				}
				for (int i = b; i < numCustomer; i++)
				{
					cus[i] = cus[i + 1];
				}
				numCustomer--;
			}

		}
		if (number == 5)
		{
			int sum;
			printf("1��չʾְ����Ϣ\n");
			printf("2�����ְ����Ϣ\n");
			printf("3����ѯְ����Ϣ\n");
			printf("4��ɾ��ְ����Ϣ\n");
			printf("��ѡ����:");
			scanf("%d", &sum);
			if (sum == 1)
			{
				showWorker(wor);
			}
			if (sum == 2)
			{
				addWorker(wor);
			}
			if (sum == 3)
			{
				printf("������ְ�����:");
				int c;
				scanf("%d", &c);
				for (int i = 0; i < numWorker; i++)
				{
					if (wor[i].number == c)
					{
						printf("%d %s %s %s", wor[i].number, wor[i].name, wor[i].sex, wor[i].tel);
						break;
					}
				}
			}
			if (sum == 4)
			{
				printf("������Ҫɾ��ְ���ı��:");
				int a;
				scanf("%d", &a);
				int b;
				for (int i = 0; i < numWorker; i++)
				{
					if (wor[i].number == a)
					{
						b = i;
					}
				}
				for (int i = b; i < numWorker; i++)
				{
					wor[i] = wor[i + 1];
				}
				numWorker--;
			}
		}
		if (number == 6)
		{
			int sum;
			printf("1��չʾ������Ϣ\n");
			printf("2�����������Ϣ\n");
			printf("��ѡ����:");
			scanf("%d", &sum);
			if (sum == 1)
			{
				showMarket(mar);
			}
			if (sum == 2)
			{
				printf("�ɽ���¼:");
				scanf("%s", mar[numMarket].success);
				printf("��Դ���:");
				scanf("%d", &mar[numMarket].Housenumber);
				int a = mar[numMarket].Housenumber;
				printf("�ͻ����:");
				scanf("%d", &mar[numMarket].Customernumber);
				printf("������Ա���:");
				scanf("%d", &mar[numMarket].Workernumber);
				numMarket++;
				char ch[100] = { "���׳ɹ�" };
				char str[100] = { "����" };
				if (strcmp(mar[numMarket - 1].success, ch) == 0)
				{
					for (int i = 0; i < numHouse; i++)
					{
						if (a == ho[i].number)
						{
							strcpy(ho[i].sale, str);
							break;
						}
					}
				}
			}
		}
		if (number == 7)
		{
			char vi[100];
			int area1;
			int area2;
			int price1;
			int price2;
			int num;
			printf("������С�������������ͼ۸�����:");
			scanf("%s", vi);
			scanf("%d%d%d%d", &area1, &area2, &price1, &price2);
			printf("1.��С����ѯ\n");
			printf("2.�������ѯ\n");
			printf("3.���۸��ѯ\n");
			printf("4.��С��������ͼ۸��ѯ\n");
			printf("��ѡ���ѯ��ʽ:");
			scanf("%d", &num);
			search(ho, vi, area1, area2, price1, price2, num);

		}
		if (number == 8)
		{
			int num;
			scanf("%d", &num);
			sort(ho, num);
		}
		if (number == 9)
		{
			OutputNumber();
			OutputHouse(ho);
			OutputCustomer(cus);
			OutputWorker(wor);
			OutputMarket(mar);

		}
		if (number == 10)
		{
			break;
		}
		system("pause");
	}
	system("pause");
	return 0;
}
