#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void welcome(string name,int age) {
	cout << "welcome to my program!"<<name<<endl;
	cout << "You are " << age <<" Year old."<< endl;
};
void goodbye() {
	cout << "Goodbye!" << endl;
};

int main()
{
	//functions
	string name;
	int age;
	cout << "Eter your name:" << endl;
	getline(cin, name);
	cout << "Enter your age:" << endl;
	cin >> age;


	welcome(name,age);
	goodbye();
	cout << endl;
	return 0;
}



