#include <Windows.h>
#include "iter-procedures.h"

int main()
{
	// ������, �� �������� ���������� � ����������

	SetConsoleOutputCP(1251); // ��������� ��������� ���������
	int answer;
	do
	{
		system("cls");
		cout << "������� �������� ��� �������:\n\n 1 - ������ ����� ����������� ������������� �����\n"
			<< " 2 - ������ ����� �������� ������\n 3 - ���������� - �� ������� �����������\n"
			<< " 4 - �������� �������������� ������� �����������\n 5 - ������� ����� � ������������ �����������\n"
			<< " 6 - ���������� ������\n >>>> ";
		cin >> answer;
		system("cls");
		switch (answer)
		{
		case 1: CountProper(); break;
		case 2: InCircle(); break;
		case 3: Exchange(); break;
		case 4: IsGrowth(); break;
		case 5: ForwardInsert(); SimpleInsert(); BinaryInsert(); break;
		default: cout << "�� ���������!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 6);
	return 0;
}