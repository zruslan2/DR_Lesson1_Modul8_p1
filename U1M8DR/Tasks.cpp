#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "MyFunc.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	int i, j;
	while (true)
	{
		cout << "������� ����� �������, 0 - ��� ������ "; cin >> nz; cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	��������� ���������, �������:
			a.����������� ��� �������� � ��������� ��� �� ������;
			b.����������� ��� �������� � ��������� ��� �� ������ � ������������.*/
			head("1. ��������� ���������, �������:                                          a.����������� ��� �������� � ��������� ��� �� ������;                 b.����������� ��� �������� � ��������� ��� �� ������ � ������������.");
			char name[20];
			cout << "a.\n";
			cout << "������� ���\n";
			cin >> name;	
			red();
			cout << name<<endl;
			white();
			cout << "b.\n";
			cout << "������� ���\n";
			cin >> name;
			red();
			printf("������ ����, %s\n", name);
			white();
		}
		else if (nz == 2)
		{
			/*2.	��������� ���������, ������� ����������� �������� ���������� ������� � 
				��������� ��� �� ������ �� ������� "� ��� �������!".*/
			head("2. ��������� ���������, ������� ����������� �������� ���������� ������� � ��������� ��� �� ������ �� ������� \"� ��� �������!\".");
			char fc[29];
			cout << "������� �������� ����������� �����\n";
			gets_s(fc, 29);
			red();
			printf("%s � ��� �������!\n", fc);
			white();
		}
		else if (nz == 3)
		{
			/*3.	��������� ���������, ������� ����������� �������� ��� � �������� �������, 
				� ����� ������� �� ��� ���� ���������� ������.*/
			head("3. ��������� ���������, ������� ����������� �������� ��� � �������� �������, � ����� ������� �� ��� ���� ���������� ������.");
			char fn[20], ln[20], nam[40]="";
			cout << "������� ���\n";
			gets_s(fn, 20);
			cout << "������� �������\n";
			gets_s(ln, 20);
			red();
			strcat(nam, fn);
			strcat(nam, " ");
			strcat(nam, ln);
			cout << nam << endl;
			white();
		}
		else if (nz == 4)
		{
			/*4.	��������� ���������, ������� ����������� �������� ����������� � ��� �������, 
				� ����� ������� ��������� : "������� ����������� ... � ����� ..." (�� ����� 
				���������� ������ ���� �������� ��������������� ��������).*/
			head("4. ��������� ���������, ������� ����������� �������� ����������� � ��� �������, � ����� ������� ���������: \"������� ����������� ... � ����� ...\" (�� ����� ���������� ������ ���� �������� ��������������� ��������).");
			char gos[25], cap[25];
			cout << "������� ����������\n";
			gets_s(gos, 25);
			cout << "������� ��� �������\n";
			gets_s(cap, 25);
			red();
			printf("������� ����������� %s � ����� %s.\n", gos, cap);
			white();
		}
		else if (nz == 5)
		{
			/*5.	���� �������� ����������� �����.���������� ���������� �������� � ���.*/
			head("���� �������� ����������� �����.���������� ���������� �������� � ���.");
			char nc[] = "������";
			printf("� �������� ����� %s - %d ��������\n", nc, strlen(nc));
		}
		else if (nz == 6)
		{
			/*6.	���� �������� ������.����������, ����� ��� ��� ���������� �������� � ���*/
			head("���� �������� ������. ����������, ����� ��� ��� ���������� �������� � ���.");
			char g[] = "������";
			if (strlen(g) % 2 == 0)
				printf("� ������ %s, ������ ���������� ��������.\n",g);
			else
				printf("� ������ %s, �� ������ ���������� ��������.\n",g);
		}
		else
		{
			red();
			cout << "������ ������� �� ���������� \n";
			white();
		}
	}
}