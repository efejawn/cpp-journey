#include <iostream>
using namespace std;

void HelloWorld(string name, string place, int age);
int main()
{
	string name = "Mahdi";
	string place = "Bazar";
	int age = 17;
	HelloWorld(name, place, age);

	return 0;
}

void HelloWorld(string name, string place, int age){
		cout << "Hello " << name << '\n';
		cout << "Welcome to the " << place << '\n';
		cout << "You're " << age << " now" << '\n';
	}