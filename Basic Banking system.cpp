#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <string>

using namespace std;
class Bankaccount {
public:
	string name;
	int balance = 0;
	int userid;
	int deposit;
	int withdraw;

	void login(string name, int userid) {

		system("cls");

		
		cout << "You are: " << name << endl;
		cout << "Your user id is: " << userid << endl;

	}

	void depositme (int deposit) {
		system("cls");

		balance = balance + deposit;

		
	

		if (balance <= 0) {
			cout << "You didn't put any money in your account" << endl;
		}
		else {
			cout << "Your total balance is: " << balance;
		}

	}

	void withdrawme (int withdraw) {

		system("cls");

		balance = balance - withdraw;

		if (balance <= 0) {
			cout << "Not enough balance. Please deposit" << endl;
		}
		else {
			cout << "Your current balance is: " << balance;
		}

	}

	void balanceme() {
		system("cls");

		cout << "Your total balance is: " << balance;
	
		
	}
};


int main() {
	int choice;
	Bankaccount account1;
	Bankaccount account2;
	Bankaccount account3;
	do {
		system("cls");
		cout << "1. Register" << endl;
		cout << "2. For deposit" << endl;
		cout << "3. For withdraw" << endl;
		cout << "4. Check balance" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1: {

			int users;
			system("cls");
			cout << "1. Enter a Number for registration 1 - 3: " << endl;
			cout << "4. Check accounts" << endl;
			cout << "Enter your choice: ";
			cin >> users;

			switch (users) {
			case 1: {

				system("cls");
				cout << "Enter your accout name: ";
				cin >> account1.name;

				string pass;
				char ch;
				cout << "Enter your account ID: ";
				ch = _getch();
				while (ch != 13) {
					if (ch == 8 && !pass.empty()) {
						pass.pop_back();
						cout << "\b \b";
					}
					else if (ch != 8) {
						pass.push_back(ch);
						cout << "*";
					}
					else {
						cout << "Invalid" << endl;
					}
					ch = _getch();
				}

				try {
					account1.userid = stoi(pass);
				}
				catch (invalid_argument) {
					cout << "Invalid input. User ID must a number" << endl;
					exit(0);
				}
				account1.login(account1.name, account1.userid);

				break;
			}
			case 2: {
				system("cls");
				cout << "Enter your accout name: ";
				cin >> account2.name;

				string pass;
				char ch;
				cout << "Enter your account ID: ";
				ch = _getch();
				while (ch != 13) {
					if (ch == 8 && !pass.empty()) {
						pass.pop_back();
						cout << "\b \b";
					}
					else if (ch != 8) {
						pass.push_back(ch);
						cout << "*";
					}
					else {
						cout << "Invalid" << endl;
					}
					ch = _getch();
				}

				try {
					account2.userid = stoi(pass);
				}
				catch (invalid_argument) {
					cout << "Invalid input. User ID must a number" << endl;
					exit(0);

				}
				account2.login(account2.name, account2.userid);
				break;

			}

			case 3: {

				system("cls");
				cout << "Enter your accout name: ";
				cin >> account3.name;

				string pass;
				char ch;
				cout << "Enter your account ID: ";
				ch = _getch();
				while (ch != 13) {
					if (ch == 8 && !pass.empty()) {
						pass.pop_back();
						cout << "\b \b";
					}
					else if (ch != 8) {
						pass.push_back(ch);
						cout << "*";
					}
					else {
						cout << "Invalid" << endl;
					}
					ch = _getch();
				}

				try {
					account3.userid = stoi(pass);
				}
				catch (invalid_argument) {
					cout << "Invalid input. User ID must a number" << endl;
					exit(0);
				}


				account3.login(account3.name, account3.userid);
				break;

			}
		

			case 4: {
				system("cls");

				if (users == 1) {
					cout << "You are: " << account1.name << endl;
					cout << "Your id is: " << account1.userid << endl;
				}
				else if (users == 2) {
					cout << "You are: " << account2.name << endl;
					cout << "Your id is: " << account2.userid << endl;
				}
				else if (users == 3) {
					cout << "You are: " << account3.name << endl;
					cout << "Your id is: " << account3.userid << endl;
				}
				else {
					cout << "Account does not recognize" << endl;
				}

				break;
			}



			default:
				cout << "Invalid choice of registration " << endl;
				break;
			}
		

		}// nested siwtch 

		
	
		case 2: {


			account1.deposit;
			system("cls");
			cout << "Enter the amount you want to deposit: ";
			cin >> account1.deposit;

			account1.depositme(account1.deposit);

			break;
		}



		case 3: {
			
			account1.withdraw;
			system("cls");

			cout << "Enter the amount you want to withdraw: ";
			cin >> account1.withdraw;

			account1.withdrawme(account1.withdraw);
			break;
		}	

		case 4: {

			system("cls");
			account1.balanceme();
			break;
		}

		case 5: {
			system("cls");
			exit(0);
		}
		default: {
			cout << "Invalid choice" << endl;
			break;
		}// mainswitch
		}
		cout << "\n...Press any key to continue";
		_getch();
		} while (choice <= 5);
		
		return 0;
	

}
