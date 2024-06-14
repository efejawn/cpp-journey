#include <iostream>
#include <ctime>
using namespace std;




int main(int argc, char const *argv[])
{

	srand(time(0));
	int randnumb = rand() % 5 + 1;

	if (randnumb == 1)
	{
		cout << "You got Fish!";
	} 
	else if(randnumb == 2)
	{
		cout << "You got Gold!";
	}
	else if(randnumb == 3)
	{
		cout << "You got a Crown!";
	}
	else if(randnumb == 4)
	{
		cout << "You got Trash";
	}
	else if (randnumb == 5)
	{
		cout << "You got a Chest";
	}


	cin.get();
	return 0;
}