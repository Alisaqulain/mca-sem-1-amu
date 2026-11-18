
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    void initialize()
    {
        cout << "Enter depositor name: ";
        getline(cin >> ws, name);

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;

        if (balance < 0)
        {
            cout << "Invalid balance.";
            balance = 0;
        }
    }

    void deposit()
    {
        double amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw()
    {
        double amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0)
            cout << "Invalid amount.\n";
        else if (amount > balance)
            cout << "Insufficient balance.\n";
        else
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void display()
    {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Type: " << accountType;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.initialize();

    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Account";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you.";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while (choice != 4);

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, a[100];

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid array size.";
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

