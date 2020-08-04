#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int, greater <int> > s1;
	int loop;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		int x;
		cin >> x;
		s1.insert(x);
	};	


	system("Pause");
	return 0;
}