#include "iter-procedures.h"

void ForwardInsert()
{
	cout << "\n *������� ����� � ������������ �����������*\n"
		<< "    ����� �� �������\n\n";
	const int n = 5;
	cout << "������ ������������ ����������� " << n << " �����: ";
	int a[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	cout << "����i�� ���� �����: ";
	double b; cin >> b;
	int insertion_place = 0;
	// ������ ���� ��� b: ���� ���������� � ����� �����������,
	//  � ���������� ����� ��������������, �������� ������
	while (insertion_place < n && a[insertion_place] < b) ++insertion_place;
	//�������� �����
	for (int i = n; i > insertion_place; --i) a[i] = a[i - 1];
	a[insertion_place] = b; // ���������� b �� �������� ����
	// ������� ������ �����������
	for (int i = 0; i <= n; ++i) cout << a[i] << ' ';
	cout << '\n';
	return;
}

void SimpleInsert()
{
	cout << "\n *������� ����� � ������������ �����������*\n"
		<< "    ����� �� ����\n\n";
	const int n = 5;
	cout << "������ " << n << " �����: ";
	int a[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	cout << "����i�� ���� �����: ";
	double b; cin >> b;
	// ������ ���� ��� b � �������� �����
	// �������� �������� � ���� �����������
	int comparison_place = n - 1;
	while (comparison_place >= 0 && a[comparison_place] > b)
	{
		a[comparison_place + 1] = a[comparison_place];
		--comparison_place;
	}
	a[comparison_place + 1] = b; // ���������� b � �����
	// ������� ������ �����������
	for (int i = 0; i <= n; ++i) cout << a[i] << ' ';
	cout << '\n';
	return;
}

void BinaryInsert()
{
	cout << "\n *������� ����� � ������������ �����������*\n"
		<< "    �������� �����\n\n";
	const int n = 5;
	cout << "������ " << n << " �����: ";
	int a[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	cout << "����i�� ���� �����: ";
	double b; cin >> b;
	// �������� ��� ������
	int left = 0; int right = n;
	while (left != right)
	{
		int middle = (left + right) / 2; // ������ ������� �������
		if (a[middle] < b) left = middle + 1; //� ��������� � ���
		else right = middle;
	}
	//�������� �����
	for (int i = n - 1; i >= left; --i) a[i + 1] = a[i];
	a[left] = b; // ���������� b � �����
	// ������� ������ �����������
	for (int i = 0; i <= n; ++i) cout << ' ' << a[i];
	cout << '\n';
	return;
}