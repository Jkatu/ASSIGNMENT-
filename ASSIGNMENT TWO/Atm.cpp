//Question10
#include <iostream>
using namespace std;
int main()
{// Declare variables
    int accountBalance, transactionLimit, amount;

    transactionLimit = 50000;
//Ask user to input account balance
    cout << "Please enter your Account Balance: ";
    cin >> accountBalance;
//Ask user to input amount to withdraw
    cout << "Please enter amount you want to withdraw: ";
    cin >> amount;
//Amount is equal or less than account balance
    if (amount >= accountBalance)
    {
        cout << "Sorry! We are unable to process your request since you have insufficient funds \n";
    }
    //Amount exceeds transaction limit
    else if (amount > 50000)
    {
        cout << " Your transaction limit has been exceeded. Try an amount less than 50,000\n";
    }
    //Amout less than transaction limit
    else if (amount < 50000)
    {
        cout << "Widthdrawal of Ksh ";
        cout << amount;
        cout << " is a success";
    }
    //if details dont match
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
