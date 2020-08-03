#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<int> vt;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		vt.push_back(x);
	};

	int a; cin >> a;
	int b, c; cin >> b >> c;

	vt.erase(vt.begin()+(a-1));
	vt.erase(vt.begin()+(b-1), vt.begin()+(c-1));
	
	cout << vt.size() << endl;
	for (int i = 0; i < vt.size(); i++)
	{
		cout << vt[i] << " ";
	};
	system("Pause");
	return 0;
}
