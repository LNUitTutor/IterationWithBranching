#include "iter-procedures.h"

void InCircle()
{
	cout << "\n *Обчислення кількості точок в крузі*\n\n";
	cout << "Введіть кількість координат: ";
	unsigned n; cin >> n;
	cout << "Введіть радіус: ";
	double r; cin >> r;
	double * a = new double[n];
	cout << "Введіть " << n << " чисел: ";
	for (unsigned i = 0; i < n; ++i) cin >> a[i];
	// введення даних закінчено
	// розпочинаємо перевірки
	unsigned k = 0; // лічильник
	double r2 = r * r;
	// перевіримо першу половину точок
	for (unsigned i = 0; i < n / 2; ++i)
	{
		if (a[i]*a[i] + a[n-1-i]*a[n-1-i] <= r2) ++k;
	}
	k *= 2;
	if (n % 2) // перевіримо середню точку
	{
		if (2 * a[n/2] * a[n/2] <= r2) ++k;
	}
	cout << "Точок в крузі є " << k << '\n';
	delete[] a;
	return;
}