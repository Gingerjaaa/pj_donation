#include <iostream>
#include <string>
#include "donor.h"
#include "donation.cpp"

using namespace std;

int main(){
    donation donation;

    char choice;
    do{
        string name;
        double amount;

        cout << "Enter donor's name: ";
        cin >> name;

        cout << "Enter donation amount: ";
        cin >> amount;

        donation.adddonation(Donor(name, amount));

        cout << "Do you want to add another donation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    donation.display();


    cout << "Total Donations: ฿" << donation.total() << endl;

    return 0;
}
