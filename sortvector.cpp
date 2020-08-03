#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
	vector<int> vt;
	int n; 
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vt.push_back(x);
	};

	
	sort(vt.begin(), vt.end());
	
	for (int i = 0; i < vt.size(); i++)
	{
		cout << vt[i] << " ";
	};
	
	system("Pause");
	return 0;
}
