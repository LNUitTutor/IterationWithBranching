#include "iter-procedures.h"

void Exchange()
{
	cout << "\n *���� ������� � ���������*\n\n";
	const int n = 5;
	cout << "������ " << n << " �����: ";
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	// ����� ����������
	double max_value = a[0];
	int index_of_max = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max_value)
		{
			max_value = a[i];
			index_of_max = i;
		}
	}
	// ������������� ��������
	a[index_of_max] = a[0];
	a[0] = max_value;
	cout << "������ �����������:\n";
	for (int i = 0; i < n; ++i) cout << a[i] << ' ';
	cout << '\n';
	return;
}