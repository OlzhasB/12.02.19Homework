#include<iostream>
using namespace std;
void printArray2(int a[][30], int n, int k);
void fillArray2(int a[][30], int n, int k);
void figure1(char c, int n, int k, int type);
void figure2(char c, int n, int k, int type);
void figure3(char c, int n, int k, int type);
void figure4(char c, int n, int k, int type);
void figure5(char c, int n, int k, int type);
void figure6(char c, int n, int k, int type);
void figure7(char c, int n, int k, int type);
void arrayCol(int a[][30], int n, int k, int x);

void task1()
{
	/*Написать функции и протестировать их в основной программе. Функции печатают фигуры и 
	используют параметры по умолчанию. Параметры по умолчанию определяют, каким символом печатается 
	фигура и является ли она заполненной или печатается только рамка фигуры.*/
	char c;
	int n, k, type;
	cout << "Write any symbol: ";
	cin >> c;
	cout << "Write the amount of rows: ";
	cin >> n;
	cout << "Write the figure number: ";
	cin >> k;
	cout << "Write the type of figure. 1 - filled, 0 - empty: ";
	cin >> type;
	if (k == 1)
		figure1(c, n, k, type);

	else if (k == 2)
		figure2(c, n, k, type);

	else if (k == 3)
		figure3(c, n, k, type);

	else if (k == 4)
		figure4(c, n, k, type);

	else if (k == 5)
		figure5(c, n, k, type);

	else if (k == 6)
		figure6(c, n, k, type);

	else if (k == 7)
		figure7(c, n, k, type);
	system("pause");
}

void task2()
{
	/*1.	Написать функцию, которая получает матрицу и номер столбца и 
	меняет знак элементов этого столбца на противоположный. Использовать функцию для 
	преобразования некоторой действительной матрицы размером 4х5. */
		int a[4][30] = { {0},{0} };
		fillArray2(a, 4, 5);
		printArray2(a, 4, 5);
		int k;
		cout << endl << "Write the number of coloumn in which you want to change a sign: ";
		cin >> k;
		arrayCol(a, 4, 5, k);
		printArray2(a, 4, 5);
		system("pause");
}

int main()
{
	char fl;
	do {
		int task;
		cout << "The number of task: ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		}
		cout << "Do you want to continue? y/n: ";
		cin >> fl;
	} while (fl == 'y');
}


void printArray2(int a[][30], int n, int k)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < k; j++)
		{
			cout << a[i][j] << "\t ";
		}
		cout << endl;
	}
}

void fillArray2(int a[][30], int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			a[i][j] = -1 + rand() % 10;
		}
	}
}

void figure1(char c, int n, int k, int type)
{
	if (type == 1)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else if (type == 0)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (i == 0 || j == 0 || i == n || j == i - 1)
					cout << c;

				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void figure2(char c, int n, int k, int type)
{
	if (type == 1)
	{
		for (int i = n; i >= 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else if (type == 0)
	{
		for (int i = n; i >= 0; i--)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (i == 0 || j == 0 || i == n || j == i - 1)
					cout << c;

				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void figure3(char c, int n, int k, int type)
{
	if (type == 1)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int i1 = n; i1 >= i; i1--)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else if (type == 0)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int i1 = n; i1 >= i; i1--)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				if (i == 0 || j == 0 || i == n || j == i - 1)
					cout << c;

				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void figure4(char c, int n, int k, int type)
{
	if (type == 1)
	{
		for (int i = n; i >= 0; i--)
		{
			for (int i1 = i; i1 <= n; i1++)
			{
				cout << " ";
			}
			for (int j = i; j > 0; j--)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else if (type == 0)
	{
		for (int i = n; i >= 0; i--)
		{
			for (int i1 = i; i1 <= n; i1++)
			{
				cout << " ";
			}
			for (int j = i - 1; j >= 0; j--)
			{
				if (i == 0 || j == 0 || i == n || j == i - 1)
					cout << c;

				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void figure5(char c, int n, int k, int type)
{
	if (type == 1)
	{
		for (int i = 0; i <= n; i++)
		{
		
			for (int i1 = i; i1 < n; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else if (type == 0)
	{
		for (int i = 0; i <= n; i++)
		{
			 
			for (int i1 = i; i1 < n; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				if (i == 0 || i == n || j == 0 || j == 2 * i)
				{
					cout << c;
				}
				else cout << " ";
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void figure6(char c, int n, int k, int type)
{
	if (type == 1)
	{
		for (int i = n; i >= 0; i--)
		{

			for (int i1 = i; i1 < n; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else if (type == 0)
	{
		for (int i = n; i >= 0; i--)
		{

			for (int i1 = i; i1 < n; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				if (i == 0 || i == n || j == 0 || j == 2 * i)
				{
					cout << c;
				}
				else cout << " ";
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void figure7(char c, int n, int k, int type)
{
	if (type == 0)
	{
		for (int i = 0; i < n/2; i++)
		{

			for (int i1 = i; i1 < n/2; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				if (i == 0 || j == 0 || j == 2 * i)
				{
					cout << c;
				}
				else cout << " ";
			}
			cout << endl;
		}
		for (int i = n/2; i >= 0; i--)
		{

			for (int i1 = i; i1 < n / 2; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				if (i == n || j == 0 || j == 2 * i)
				{
					cout << c;
				}
				else cout << " ";
			}
			cout << endl;
		}
	}
	else if (type == 1)
	{
		for (int i = 0; i < n/2; i++)
		{

			for (int i1 = i; i1 < n/2; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				cout << c;
			}
			cout << endl;
		}
		for (int i = n/2; i >= 0; i--)
		{

			for (int i1 = i; i1 < n / 2; i1++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * i + 1; j++)
			{
				cout << c;
			}
			cout << endl;
		}
	}
	else cout << "Invalid type" << endl;
}

void arrayCol(int a[][30], int n, int k, int x)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == x)
				a[j][i] *= -1;
		}
	}
}