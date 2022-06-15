#include <iostream>
using namespace std;
class BankAccount
{
protected:
	int AccountNumber;
	double Balance;


public:
	BankAccount() 
	{
		cout << "Enter account number: ";
		cin >> AccountNumber;
		Balance = 5000;
	}
	BankAccount(int Number, double Bal)
	{
		AccountNumber = Number;
		Balance = Bal;
	}
	void SetAccountNumber(int Number)
	{
		AccountNumber = Number;
	}
	int GetAccountNumber()
	{
		return AccountNumber;
	}
	double RetrieveBalance()
	{
		return Balance;
	}
	void Deposit(double Money)
	{
		Balance += Money;
	}
	void Withdraw(double Money)
	{
		Balance =Balance-Money;
	}
	void AccountInformation()
	{
		cout << "Account Number is: " << AccountNumber << endl;
		cout << "Account Balance is: " << Balance << endl;
	}
};

class CheckingAccount : protected BankAccount //in case of error, change this to public
{
protected:
	float InterestRate;
	double MinimumBalance;
	double ServiceCharges;


public:
	CheckingAccount()
	{
		InterestRate = 1.5;
		MinimumBalance = 2000;
		ServiceCharges = 0;
	}
	CheckingAccount(float Rate, double Minimum, double Service)
	{
		InterestRate = Rate;
		MinimumBalance = Minimum;
		ServiceCharges = Service;
	}
	void SetInterest(float Interest)
	{
		InterestRate = 1.5;
	}
	float RetreiveInterest()
	{
		return InterestRate;
	}
	void SetMinimumBalance(double Minimum)
	{
		MinimumBalance = 2000;
	}
	double RetreiveMinimumBalance()
	{
		return MinimumBalance;
	}
	void SetServiceCharges(double Service)
	{
		ServiceCharges = 200;
	}
	double RetreiveServiceCharges()
	{
		return ServiceCharges;
	}
	double PostInterest()
	{
		Balance+= ((InterestRate / 100) * Balance);
		return Balance;

	}
	int MinimumBalanceCheck()
	{
		if (Balance < MinimumBalance)
		{
			return 1;
		}
		else
			return 0;
	}
	void Withdraw(double Money)
	{
		int Check = MinimumBalanceCheck();
		if (Check == 1)
		{
			cout << "Withdrawal is not possible." << endl;
		}
		else
		{
			cout << Money << " Withdrawn Successfully." << endl;
			Balance = Balance - Money;
		}
	}
	void DisplayAccountInformation()
	{
		cout << "Account Number is: " << AccountNumber << endl;
		cout << "Account Balance is: " << Balance << endl;
	}
};
class SavingsAccount : protected BankAccount
{
protected:
	float InterestRate;

public:
	SavingsAccount()
	{
		cout << "Enter account number: ";
		cin >> AccountNumber;
		Balance = 5000;
	}
	SavingsAccount(int Account, int AccBalance)
	{
		InterestRate = 1.5;
	}
	SavingsAccount(float Rate)
	{
		InterestRate = Rate;
	}
	void SetInterest(float Interest)
	{
		InterestRate = 1.5;
	}
	float RetreiveInterest()
	{
		return InterestRate;
	}
	double PostInterest()
	{
		Balance += ((InterestRate / 100) * Balance);
		return Balance;
	}
	void DisplayAccountInformation()
	{
		cout << "Account Number is: " << AccountNumber << endl;
		cout << "Account Balance is: " << Balance << endl;
	}
	void Withdraw(double Money)
	{
		Balance = Balance - Money;

	}
};

int main()
{
	/*int savemax = 0;
	int checkmax = 0;
	SavingsAccount* Save = new SavingsAccount[savemax];
	CheckingAccount* Check = new CheckingAccount[checkmax];*/
	do
	{
		cout << "Account Type: " << endl;
		cout << "1. Checking Account" << endl;
		cout << "2. Savings Account" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter your Account Type: ";
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
		{
			//checkmax++;
			//CheckingAccount* Temp = new CheckingAccount[checkmax];
			CheckingAccount Check;
			cout << "1. Interest Rate" << endl;
			cout << "2. Check Balance" << endl;
			cout << "3. Account Information" << endl;
			cout << "4. Service Charges" << endl;
			cout << "5. Withdraw" << endl;
			cout << "Choose any option: ";
			int option;
			cin >> option;
			switch (option)
			{
			case 1: {
				float x=Check.RetreiveInterest();
				cout << x << endl;
				break;
			}

			case 2:
			{
				
				double x=Check.PostInterest();
				cout << x << endl;
				break;
			}
			case 3:
			{
				Check.DisplayAccountInformation();
				break;
			}
			case 4:
			{
				Check.RetreiveServiceCharges();
				break;
			}
			case 5:
			{
				cout << "Enter amount to withdraw: ";
				double money;
				cin >> money;
				Check.Withdraw(money);
				Check.DisplayAccountInformation();
				break;
			}
			}
			break; }
		case 2:
		{
			SavingsAccount Saving;

			cout << "1. Interest Rate" << endl;
			cout << "2. Check Balance" << endl;
			cout << "3. Account Information" << endl;
			cout << "4. Withdraw" << endl;
			cout << "Choose any option: ";
			int option;
			cin >> option;
			switch (option)
			{
			case 1: {
				float x=Saving.RetreiveInterest();
				cout << x;
				break;
			}

			case 2:
			{
				
				double x=Saving.PostInterest();
				cout << x;
				break;
			}
			case 3:
			{
				Saving.DisplayAccountInformation();
				break;
			}
			case 4:
			{
				cout << "Enter amount to withdraw: ";
				double money;
				cin >> money;
				Saving.Withdraw(money);
				break;
			}
			}
			break;
		}
		case 0:
			break;
		}
	} while (true);
	return 0;
}