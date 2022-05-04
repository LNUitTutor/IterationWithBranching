#include "iter-procedures.h"

void CountProper()
{
	cout << "\n *ќбчисленн€ к≥лькост≥ \"правильних\" член≥в посл≥довност≥*\n\n";
	unsigned n;
	cout << "¬вед≥ть к≥льк≥сть чисел: "; cin >> n;
	long long power_of_2 = 1; // степ≥нь дв≥йки
	long long factorial = 1;  // фактор≥ал
	unsigned counter = 0;     // л≥чильник
	for (unsigned i = 1; i <= n; ++i)
	{
		cout << "¬вед≥ть " << i << "-e числo: ";
		double a; cin >> a;
		power_of_2 *= 2;
		factorial *= i;
		if (power_of_2 < a && a < factorial + 3) ++counter;
	}
	cout << "k = " << counter << '\n';
	return;
}