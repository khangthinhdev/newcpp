#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;

	vector<vector<int>> vect;

	for (int i = 0; i < n; i++)
	{
		int size;
		cin >> size;

		vector<int> temvect;

		for (int k = 0; k < size; k++)
		{
			int x;
			cin >> x;
			temvect.push_back(x); 
		}

		vect.push_back(temvect);
	}

	vector<int> queries;

	for (int i = 0; i < q; i++)
	{
		int a,b;
		cin >> a >> b;
		queries.push_back(a);
		queries.push_back(b);
	}
	
	for (int i = 0; i < q*2; i+=2)
	{
		cout << vect[queries[i]][queries[i+1]] << endl;
	}
	
	system("Pause");
	return 0;
}