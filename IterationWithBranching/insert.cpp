#include "iter-procedures.h"

void ForwardInsert()
{
	cout << "\n *Вставка числа у впорядковану послідовність*\n"
		<< "    пошук від початку\n\n";
	const int n = 5;
	cout << "Введіть впорядковану послідовність " << n << " чисел: ";
	int a[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	cout << "Введiть нове число: ";
	double b; cin >> b;
	int insertion_place = 0;
	// шукаємо місце для b: поки перебуваємо в межах послідовності,
	//  і виконується умова впорядкованості, рухаємося вперед
	while (insertion_place < n && a[insertion_place] < b) ++insertion_place;
	//посуваємо «хвіст»
	for (int i = n; i > insertion_place; --i) a[i] = a[i - 1];
	a[insertion_place] = b; // вставляємо b на звільнене місце
	// друкуємо змінену послідовність
	for (int i = 0; i <= n; ++i) cout << a[i] << ' ';
	cout << '\n';
	return;
}

void SimpleInsert()
{
	cout << "\n *Вставка числа у впорядковану послідовність*\n"
		<< "    пошук від кінця\n\n";
	const int n = 5;
	cout << "Введіть " << n << " чисел: ";
	int a[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	cout << "Введiть нове число: ";
	double b; cin >> b;
	// шукаємо місце для b і посуваємо «хвіст»
	// перевірки починаємо з кінця послідовності
	int comparison_place = n - 1;
	while (comparison_place >= 0 && a[comparison_place] > b)
	{
		a[comparison_place + 1] = a[comparison_place];
		--comparison_place;
	}
	a[comparison_place + 1] = b; // вставляємо b в масив
	// друкуємо змінену послідовність
	for (int i = 0; i <= n; ++i) cout << a[i] << ' ';
	cout << '\n';
	return;
}

void BinaryInsert()
{
	cout << "\n *Вставка числа у впорядковану послідовність*\n"
		<< "    двійковий пошук\n\n";
	const int n = 5;
	cout << "Введіть " << n << " чисел: ";
	int a[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	cout << "Введiть нове число: ";
	double b; cin >> b;
	// початкові межі пошуку
	int left = 0; int right = n;
	while (left != right)
	{
		int middle = (left + right) / 2; // шукаємо середній елемент
		if (a[middle] < b) left = middle + 1; //і порівнюємо з ним
		else right = middle;
	}
	//посуваємо «хвіст»
	for (int i = n - 1; i >= left; --i) a[i + 1] = a[i];
	a[left] = b; // вставляємо b в масив
	// друкуємо змінену послідовність
	for (int i = 0; i <= n; ++i) cout << ' ' << a[i];
	cout << '\n';
	return;
}