

#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand((unsigned int)time(0));
	int i;
	const int n = 10;
	int a[n];
	for (i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 21;
		cout << a[i] << "\t";
	}
	cout << endl;
	int max = a[0];
	int min = a[0];
	int imax = 0;
	int imin = 0;
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			imax = i;                                          //вывод индекса массива
		}
	}
	cout << "Индекс макс=" << imax << endl;
	cout << "Элемент макс=" << max << endl;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			imin = i;
		}
	}
	cout << "Индекс мин=" << imin << endl;
	cout << "Элемент мин=" << min << endl;
	cout << endl;
	cout << "Элементы массива с нечетным индексом" << endl;
	for (i = 0; i < n; i++)
	{
		if (i % 2 != 0)
			cout << a[i] << "\t";
	}
	cout << endl;
	int b = a[imax];
	a[imax] = a[imin];                                //нельзя писать imax=imin, imin=imax
	a[imin] = b;
	cout << "Изменение позиции максимального и минимального элемента массива" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
	string exit;
	cout << "Чтобы выйти из программы напишите 0" << endl;
	cin >> exit;
	while (exit != "0")
	{
		cout << "Ошибка, для выхода из программы напишите 0" << endl;
		cin >> exit;
	}
	return 0;
}  