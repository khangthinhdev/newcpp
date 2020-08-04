#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s1;
	int loop;
	cin >> loop;
	for (int i = 0; i < loop; i++)
	{
		int x;
		cin >> x;
		s1.insert(x);
	};

	for(auto it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << " ";
	};
	
	system("Pause");
	return 0;
}