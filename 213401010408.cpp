#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<string.h>
using namespace std;
//房源信息
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
//输出房源信息
void showHouse(House* ho)
{
	printf("房源信息\n");
	for (int i = 0; i < numHouse; i++)
	{
		cout << ho[i].number << "  " << ho[i].village << "  " << ho[i].area << "  " << ho[i].floor << "  " << ho[i].decorate << "  " << ho[i].tel << "  " << ho[i].price << "  " << ho[i].sale;
		printf("\n");

	}
}
//增加房源信息
void addHouse(House* ho)
{
	printf("房源编号:");
	scanf("%d", &ho[numHouse].number);
	printf("小区名称:");
	scanf("%s", ho[numHouse].village);
	printf("面积:");
	scanf("%d", &ho[numHouse].area);
	printf("楼层:");
	scanf("%d", &ho[numHouse].floor);
	printf("装修:");
	scanf("%s", ho[numHouse].decorate);
	printf("房主联系方式:");
	scanf("%s", ho[numHouse].tel);
	printf("挂牌价格:");
	scanf("%d", &ho[numHouse].price);
	printf("出售情况:");
	scanf("%s", ho[numHouse].sale);
	numHouse++;
}
//客户信息
typedef struct Customer
{
	int number;
	char name[100];
	char phone[20];
	int money;
	char wish[20];
}Customer;
//输出客户信息
void showCustomer(Customer* cus)
{
	printf("客户信息\n");
	for (int i = 0; i < numCustomer; i++)
	{
		cout << cus[i].number << "  " << cus[i].name << "  " << cus[i].phone << "  " << cus[i].money << "  " << cus[i].wish;
		printf("\n");
	}
}
//增加客户信息
void addCustomer(Customer* cus)
{
	printf("客户编号:");
	scanf("%d", &cus[numCustomer].number);
	printf("称呼:");
	scanf("%s", cus[numCustomer].name);
	printf("联系方式:");
	scanf("%s", cus[numCustomer].phone);
	printf("购房资金:");
	scanf("%d", &cus[numCustomer].money);
	printf("购房意向:");
	scanf("%s", cus[numCustomer].wish);
	numCustomer++;
}
//职工信息
typedef struct Worker
{
	int number;
	char name[100];
	char sex[20];
	char tel[20];
}Worker;
//输出职工信息
void showWorker(Worker* wor)
{
	printf("职工信息\n");
	for (int i = 0; i < numWorker; i++)
	{
		cout << wor[i].number << "  " << wor[i].name << "  " << wor[i].sex << "  " << wor[i].tel;
		printf("\n");
	}
}
//增加职工信息
void addWorker(Worker* wor)
{
	printf("职工编号:");
	scanf("%d", &wor[numWorker].number);
	printf("姓名:");
	scanf("%s", wor[numWorker].name);
	printf("性别:");
	scanf("%s", wor[numWorker].sex);
	printf("联系方式:");
	scanf("%s", wor[numWorker].tel);
	numWorker++;
}
//销售信息
typedef struct Market
{
	char success[20];
	int Housenumber;
	int Customernumber;
	int Workernumber;
}Market;
//输出销售信息
void showMarket(Market* mar)
{
	printf("销售信息\n");
	for (int i = 0; i < numMarket; i++)
	{
		cout << mar[i].success << "  " << mar[i].Housenumber << "  " << mar[i].Customernumber << "  " << mar[i].Workernumber;
		printf("\n");
	}
}
//信息查询
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
			printf("暂无符合要求的房源");
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
			printf("暂无符合条件的房源");
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
			printf("暂无符合条件的房源");
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
			printf("暂无符合条件的房源");
		}
	}
}
//信息排序
void sort(House* ho, int num)
{
	int way = num;
	if (way == 1)
	{
		printf("按照面积排序\n");
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
		printf("按照价格排序\n");
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
//将房源信息存入文件
void OutputHouse(House* ho)
{
	FILE* file = fopen("destfile1.txt", "w+");
	if (file == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numHouse; i++)
	{
		fprintf(file, "%d %s %d %d %s %s %d %s\n", ho[i].number, ho[i].village, ho[i].area, ho[i].floor, ho[i].decorate, ho[i].tel, ho[i].price, ho[i].sale);
	}
	fclose(file);
}
//读取房源文件信息
void InputHouse(House* ho)
{
	FILE* fp = fopen("destfile1.txt", "r");
	if (fp == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numHouse; i++)
	{
		fscanf(fp, "%d %s %d %d %s %s %d %s\n", &ho[i].number, ho[i].village, &ho[i].area, &ho[i].floor, ho[i].decorate, ho[i].tel, &ho[i].price, ho[i].sale);
	}
	fclose(fp);
}
//将客户信息存入文件
void OutputCustomer(Customer* cus)
{
	FILE* file = fopen("destfile2.txt", "w+");
	if (file == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numCustomer; i++)
	{
		fprintf(file, "%d %s %s %d %s\n", cus[i].number, cus[i].name, cus[i].phone, cus[i].money, cus[i].wish);
	}
	fclose(file);
}
//读取职工信息
void InputCustomer(Customer* cus)
{
	FILE* fp = fopen("destfile2.txt", "r");
	if (fp == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numCustomer; i++)
	{
		fscanf(fp, "%d %s %s %d %s\n", &cus[i].number, cus[i].name, cus[i].phone, &cus[i].money, cus[i].wish);
	}
	fclose(fp);
}
//将职工信息存入文件                                                   
void OutputWorker(Worker* wor)
{
	FILE* file = fopen("destfile3.txt", "w+");
	if (file == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numWorker; i++)
	{
		fprintf(file, "%d %s %s %s\n", wor[i].number, wor[i].name, wor[i].sex, wor[i].tel);
	}
	fclose(file);
}
//读取职工信息
void InputWorker(Worker* wor)
{
	FILE* fp = fopen("destfile3.txt", "r");
	if (fp == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numWorker; i++)
	{
		fscanf(fp, "%d %s %s %s\n", &wor[i].number, wor[i].name, wor[i].sex, wor[i].tel);
	}
	fclose(fp);
}
//将销售信息存入文件
void OutputMarket(Market* mar)
{
	FILE* file = fopen("destfile4.txt", "w+");
	if (file == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numMarket; i++)
	{
		fprintf(file, "%s %d %d %d\n", mar[i].success, mar[i].Housenumber, mar[i].Customernumber, mar[i].Workernumber);
	}
	fclose(file);
}
//读取销售信息
void InputMarket(Market* mar)
{
	FILE* fp = fopen("destfile4.txt", "r");
	if (fp == NULL)
	{
		perror("文件错误");
	}
	for (int i = 0; i < numMarket; i++)
	{
		fscanf(fp, "%s %d %d %d\n", mar[i].success, &mar[i].Housenumber, &mar[i].Customernumber, &mar[i].Workernumber);
	}
	fclose(fp);
}
//将数量信息存入文件
void OutputNumber()
{
	FILE* file = fopen("destfile5.txt", "w+");
	if (file == NULL)
	{
		perror("文件错误");
	}
	fprintf(file, "%d %d %d %d\n", numHouse, numCustomer, numWorker, numMarket);
	fclose(file);
}
//读取数量信息
void InputNumber()
{
	FILE* fp = fopen("D:\Projects\C(++)\Project8\Project8\destfile5.txt", "r");
	if (fp == NULL)
	{
		perror("文件错误");
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
		printf("菜单\n");
		printf("1、手动输入信息\n");
		printf("2、从文件读取信息\n");
		printf("3、房源信息管理\n");
		printf("4、客户信息管理\n");
		printf("5、职工信息管理\n");
		printf("6、销售信息管理\n");
		printf("7、信息查询\n");
		printf("8、信息排序\n");
		printf("9、将信息存入文件\n");
		printf("10、结束\n");
		printf("请选择功能\n");
		scanf("%d", &number);
		if (number == 1)
		{
			printf("1、房源信息\n");
			for (int i = 0; i < 4; i++)
			{
				printf("房源编号:");
				scanf("%d", &ho[i].number);
				printf("小区名称:");
				scanf("%s", ho[i].village);
				printf("面积:");
				scanf("%d", &ho[i].area);
				printf("楼层:");
				scanf("%d", &ho[i].floor);
				printf("装修:");
				scanf("%s", ho[i].decorate);
				printf("房主联系方式:");
				scanf("%s", ho[i].tel);
				printf("挂牌价格:");
				scanf("%d", &ho[i].price);
				printf("出售情况:");
				scanf("%s", ho[i].sale);
			}
			printf("2、客户信息\n");
			for (int i = 0; i < 4; i++)
			{
				printf("客户编号:");
				scanf("%d", &cus[i].number);
				printf("称呼:");
				scanf("%s", cus[i].name);
				printf("联系方式:");
				scanf("%s", cus[i].phone);
				printf("购房资金:");
				scanf("%d", &cus[i].money);
				printf("购房意向:");
				scanf("%s", cus[i].wish);
			}
			printf("3、职工信息\n");
			for (int i = 0; i < 4; i++)
			{
				printf("职工编号:");
				scanf("%d", &wor[i].number);
				printf("姓名:");
				scanf("%s", wor[i].name);
				printf("性别:");
				scanf("%s", wor[i].sex);
				printf("联系方式:");
				scanf("%s", wor[i].tel);
			}
			printf("4、销售信息\n");
			for (int i = 0; i < 7; i++)
			{
				printf("成交记录:");
				scanf("%s", mar[i].success);
				printf("房源编号:");
				scanf("%d", &mar[i].Housenumber);
				printf("客户编号:");
				scanf("%d", &mar[i].Customernumber);
				printf("销售人员编号:");
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
			printf("1、展示房源信息\n");
			printf("2、添加房源信息\n");
			printf("3、删除房源信息\n");
			printf("请选择功能:");
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
				printf("请输入要删除房源编号:");
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
			printf("1、展示顾客信息\n");
			printf("2、添加顾客信息\n");
			printf("3、查询顾客信息\n");
			printf("4、删除顾客信息\n");
			printf("请选择功能:");
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
				printf("请输入顾客编号:");
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
				printf("请输入要删除顾客编号:");
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
			printf("1、展示职工信息\n");
			printf("2、添加职工信息\n");
			printf("3、查询职工信息\n");
			printf("4、删除职工信息\n");
			printf("请选择功能:");
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
				printf("请输入职工编号:");
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
				printf("请输入要删除职工的编号:");
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
			printf("1、展示销售信息\n");
			printf("2、添加销售信息\n");
			printf("请选择功能:");
			scanf("%d", &sum);
			if (sum == 1)
			{
				showMarket(mar);
			}
			if (sum == 2)
			{
				printf("成交记录:");
				scanf("%s", mar[numMarket].success);
				printf("房源编号:");
				scanf("%d", &mar[numMarket].Housenumber);
				int a = mar[numMarket].Housenumber;
				printf("客户编号:");
				scanf("%d", &mar[numMarket].Customernumber);
				printf("销售人员编号:");
				scanf("%d", &mar[numMarket].Workernumber);
				numMarket++;
				char ch[100] = { "交易成功" };
				char str[100] = { "已售" };
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
			printf("请输入小区名，面积区间和价格区间:");
			scanf("%s", vi);
			scanf("%d%d%d%d", &area1, &area2, &price1, &price2);
			printf("1.按小区查询\n");
			printf("2.按面积查询\n");
			printf("3.按价格查询\n");
			printf("4.按小区，面积和价格查询\n");
			printf("请选择查询方式:");
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
