#include <iostream>
#include <string>

using namespace std;

class Student{
public: 
	int age, standard;
	string first_name, last_name;

	Student(int age1, int standard1, string first_name1, string last_name1){
		age = age1;
		standard = standard1;
		first_name = first_name1;
		last_name = last_name1;
	};
};

int main(int argc, char const *argv[])
{
	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st(age, standard, first_name, last_name);

	cout << st.age << endl;
	cout << st.last_name << ", " << st.first_name << endl;
	cout << st.standard << endl << endl;
	cout << st.age << "," << st.first_name << "," << st.last_name << "," << st.standard << endl;

	system("Pause");
	return 0;
}
