#include <iostream>
#include <ctime>
using namespace std;

int main()
{

	int num;
	int guess;
	int tries = 0;

	srand(time(NULL));
	num = (rand()% 100) + 1;

	cout << "Welcome to Number guess game\n";

	do{
		cout << "Choose these numbers between 1-100: ";
		cin >> guess;
		tries++;

		if (guess > num)
		{
			cout << "Ur too high\n";
		}
		else if (guess < num)
		{
			/* code */
			cout << "Ur too low\n";
		}
		else
		{
			cout << "Ur correct of tries" << tries << '\n';
		}}while(guess!= num);

	cout << "\n********************************************";

	cin.get();
	return 0;
}