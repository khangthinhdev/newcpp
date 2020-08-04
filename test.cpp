
#include <iostream>
using namespace std;

void total(int* x, int* y)
{
	*x = *x + 1;
	*y = *y + 1;
}
int main(int argc, char const *argv[])
{
	int x, y;
	cin >> x >> y;
	cout << x << " " << y << endl;
	total(&x, &y);
	cout << x << " " << y << endl;

	system("Pause");
	return 0;
}