#include <iostream>

using namespace std;

int main()
{

    int process1, process2, AdminPriv, CashierPriv;
    int deposit, withdraw;
    int AddItem, ModItem, RemItem, ConSale, AvaProd;
    bool ad1, ad2, ad3, ca1, ca2;
    string name, password, passcheck, namecheck;
    bool stop = false;
    bool acc = false;
    bool mainmenu = true;

    do {
        cout << "======================================" << endl;
        cout << "Welcome to Point of Sale System!" << endl;
        cout << "Please choose an option to continue. \n [1] Make an account \n [2] Login your account" << endl;
        cout << "What will it be?: ";
        cin >> process1;

        switch (process1) {
    case 1:
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
                    cout << "Password may be incorrect. \n  "<< endl;
                }
            } while (passcheck != password);
            if (passcheck == password) {
                acc = true;
                cout << "Account successfully created!" << endl;
                }
            } else {
                cout << "You already have an account." << endl;
            }
            break;
///////////////////////////////////////////////////////////////////////////
    case 2:
        if (!acc) {
            cout << "Please register an account first!" << endl;
        } else {
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
                cout << "  \n [1] Become Admin \n [2] Become Cashier \n [3] Return to the Main Menu. \n [4] Exit." << endl;
                cout << "What will it be?: ";
                cin >> process2;

               { switch (process2)
            case 1:
                cout << "You have successfully became Admin. " << endl;
                cout << "What will you like to do?\n [1] Add products.\n [2] Modify Products.\n [3] Remove Products.\n ";
                cin >> AdminPriv; }

               {
                switch (AdminPriv);
            case ad1:
                cout << "What product do you wish to add?\n";
                cin >> AddItem;
                cout << "Successfully added item!" << endl;
                break;
            case ad2:
                cout << "What product do you want to modify?\n";
                cin >> ModItem;
                cout << "Successfully Modified Item!" << endl;
                break;
            case ad3:
                cout << "What product do you want to remove?\n";
                cin >> RemItem;
                cout << "Successfully removed product!" << endl;
                break; }
                break;
                    {
            case 2:
                cout << "You have successfully became Cashier." << endl;
                cout << "What will you like to do?\n [1] Conduct sale on item.\n [2] Check item availabilty.\n";
                cin >> CashierPriv; }

                switch (CashierPriv); {
            case ca1:
                cout << "Conduct sale on given item?\n";
                cin >> ConSale;
                cout << "Successfully sold item!" << endl;
                break;
            case ca2:
                cout << "Check availability of which product?\n";
                cin >> AvaProd;
                cout << "Successfully checked item's availability!" << endl;
                break;
                }
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
        }while (!mainmenu);
        break;
///////////////////////////////////////////////////////////////////////////
    case 3:
        stop = true;
        break;
    default:
        cout << "Sorry, this is not a process!" << endl;
    }
        }
    } while (!stop);

    return 0;
}
