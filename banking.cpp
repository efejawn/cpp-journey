#include <iostream>
#include <iomanip>
#include <limits>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
		double balance = 0.00;
		int choice;


		std::cout << "******************************\n";
		std::cout << "Welcome to the Banking Program\n";
		std::cout << "Enter your choice\n";
		std::cout << "******************************\n";

		std::cout << "1. To show your balance\n";
		std::cout << "2. To show deposit money\n";
		std::cout << "3. To withdraw money\n";
		std::cout << "4. To exit\n";
		std::cin >> choice;

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		fflush(stdin);

		do{
		switch(choice){
			case 1: showbalance(balance);
				break;

			case 2: balance += deposit();
				showbalance(balance);
				break;

			case 3: balance -= withdraw(balance);
				showbalance(balance);
				break;

			case 4: std::cout << "Thanks for visitting!\n";
				break;

			default: std::cout << "Invalid choice!\n";
 }
}while(choice != 4);
	return 0;
}
void showbalance(double balance){
	std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
	double amount = 0;
	std::cout << "Enter amount to be deposited: ";
	std::cin >> amount;

	if(amount > 0){
	return amount;
	}else {
		std::cout << "Invalid amounts\n";
		return 0;
	}
}
double withdraw(double balance){

	double amount = 0;
	std::cout << "Enter amount to be withdrawn: ";
	std::cin >> amount;

	if (amount > balance)
	{
		std::cout << "Insufficient Funds\n";
		return 0;
	}
	else if(amount < 0)
	{
		std::cout << "Invalid amount\n";
		return 0;
	}
	else{
		return amount;
	}
}
