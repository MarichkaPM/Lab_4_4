#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
	double xp, xk, dx, x, R, y;

	cout << "xp = "; cin >> xp; cout << endl;
	cout << "xk = "; cin >> xk; cout << endl;
	cout << "dx = "; cin >> dx; cout << endl;
	cout << "R = "; cin >> R; cout << endl;

	cout << fixed;
	cout << "------------------------------" << endl;
	cout << "| " << setw(7) << "x" << setw(7) << " |"
		<< setw(7) << "y" << setw(7) << " |" << endl;
	cout << "------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{

		if (x <= 0)
			y = 1 - (1.0 / 2) * (x + 2);
		else
			if (0 < x && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -1.0 / (6 - 2 * R) * (x - 2 * R);

		cout << "| " << setprecision(2) << setw(7) << x << setw(7)
			<< " |" << setprecision(2) << setw(7) << y << setw(7) << " |" << endl;
		x += dx;

	}
	cout << "------------------------------" << endl;

	system("pause");
	return 0;

}