#include <iostream>

using namespace std;
class Bank {
private:
    int process1, process2;
    int robuxbal = 1000000, deposit, withdraw;
    string name, password, passcheck, namecheck;
    bool stop = false;
    bool acc = false;
    bool mainmenu = true;
public:

    void showmenu()
    {
        cout << "======================================" << endl;
        cout << "Welcome to the Roblox Robux ATM!" << endl;
        cout << "Please choose an option to continue. \n [1] Make an account \n [2] Login your account" << endl;
        cout << "What will it be?: ";
        cin >> process1;
        system("cls");

        switch (process1);
    }
    void setval()
    {
        if (!acc) {
            cout << "Please input your username and password." << endl;
            cout << "Enter your Username: ";
            cin >> name;
            cout << "Enter your Password: ";
            cin >> password;
            do {
                cout << "Please confirm your Password: ";
                cin >> passcheck;
                if (passcheck != password) {
                    cout << "Password may be incorrect. \n  " << endl;
                }
            } while (passcheck != password);
            if (passcheck == password) {
                acc = true;
                cout << "Account successfully created!" << endl;
                system("cls");
            }
            else {
                cout << "You already have an account." << endl;
            }
        }
    }
    void showdata(bool stop)
    {
        if (!acc) {
            cout << "Please register an account first!" << endl;
        }
        else {
            cout << "Enter your username and password to log in." << endl;
            do {
                cout << "Username: ";
                cin >> namecheck;
                cout << "Password: ";
                cin >> passcheck;
                if (namecheck != name || passcheck != password) {
                    cout << "Your Password or Username may be incorrect, please input your log in credentials again." << endl;
                }
            } while (namecheck != name || passcheck != password);

            cout << "\n" "Login successful!" << "\nPlease choose an option to continue." << endl;
            do {
                cout << "  \n [1] Check your remaining Robux. \n [2] Deposit Robux. \n [3] Withdraw Robux. \n [4] Return to the Main Menu. \n [5] Exit." << endl;
                cout << "What will it be?: ";
                cin >> process2;

                switch (process2) {
                case 1:
                    cout << "Your current Robux balance is " << robuxbal << " Robux. \n" << endl;
                    break;
                case 2:
                    cout << "How many Robux do you want to deposit? \n Deposit Robux: ";
                    cin >> deposit;
                    robuxbal = deposit + robuxbal;
                    cout << "Your Robux deposit transaction was a success! You now currently have " << robuxbal << " Robux in your account. \n" << endl;
                    break;
                case 3:
                    cout << "How many Robux do you want to withdraw? \n Withdraw Robux: ";
                    cin >> withdraw;
                    if (robuxbal - withdraw < 0) {
                        cout << "You dont have enough Robux in your account to proceed with this transaction. \n" << endl;
                        break;
                    }
                    robuxbal = robuxbal - withdraw;
                    cout << "Your Robux withdraw transaction was a success! You now currently have " << robuxbal << " Robux in your account! \n" << endl;
                    break;
                case 4:
                    mainmenu = true;
                    break;
                case 5:
                    stop = true;
                    break;
                default:
                    cout << "Sorry, this is not a process!" << endl;
                    break;
                }
            } while (!mainmenu);
        }
    }
};

int main()
{
    int process1 = 0;
    Bank b;
    int choice;
    bool stop = false;
    if (stop == false)
    {
        do {
            cout << "======================================" << endl;
            cout << "Welcome to the Roblox Robux ATM!" << endl;
            cout << "Please choose an option to continue. \n [1] Make an account \n [2] Login your account" << endl;
            cout << "What will it be?: ";
            cin >> process1;
            switch (process1) {
            case 1:
                b.setval();
                break;
            case 2:
                b.showdata(stop);
                cout << "====";
                break;
            case 3:
                b.showmenu();
                break;
            default:
                cout << "\nInvalid choice\n";
                system("cls");
                break;
            }

        } while (stop == false);
    }
}
