#include "iter-procedures.h"

void CountProper()
{
	cout << "\n *���������� ������� \"����������\" ����� �����������*\n\n";
	unsigned n;
	cout << "������ ������� �����: "; cin >> n;
	long long power_of_2 = 1; // ������ �����
	long long factorial = 1;  // ��������
	unsigned counter = 0;     // ��������
	for (unsigned i = 1; i <= n; ++i)
	{
		cout << "������ " << i << "-e ����o: ";
		double a; cin >> a;
		power_of_2 *= 2;
		factorial *= i;
		if (power_of_2 < a && a < factorial + 3) ++counter;
	}
	cout << "k = " << counter << '\n';
	return;
}