#include <iostream>
using namespace std;

int main() {

    //0 means empty, 1 means occupied
    int slot1 = 0;
    int slot2 = 0;
    int slot3 = 0;

    int choice = 0;
    int slot;

    while(choice != 4) {

        cout<<"\n====== Parking Lot ======\n";
        cout<<"1. Park Car\n";
        cout<<"2. Remove Car\n";
        cout<<"3. Show Parking Status\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {

        case 1:
            if(slot1 == 0) {
                slot1 = 1;
                cout<<"Car parked in slot 1\n";
            }
            else if(slot2 == 0) {
                slot2 = 1;
                cout<<"Car parked in slot 2\n";
            }
            else if(slot3 == 0) {
                slot3 = 1;
                cout<<"Car parked in slot 3\n";
            }
            else {
                cout<<"Sorry, parking is full\n";
            }
            break;

        case 2:
            cout<<"Enter slot number (1 to 3): ";
            cin>>slot;

            if(slot == 1) {
                slot1 = 0;
                cout << "Slot 1 is now empty\n";
            }
            else if(slot == 2) {
                slot2 = 0;
                cout << "Slot 2 is now empty\n";
            }
            else if(slot == 3) {
                slot3 = 0;
                cout<<"Slot 3 is now empty\n";
            }
            else {
                cout<<"Invalid slot number\n";
            }
            break;

        case 3:
            cout << "\nSlot 1: ";
            if (slot1 == 1)
                cout << "Occupied\n";
            else
                cout<<"Empty\n";

            cout<<"Slot 2: ";
            if (slot2 == 1)
                cout<<"Occupied\n";
            else
                cout<<"Empty\n";

            cout<<"Slot 3: ";
            if (slot3 == 1)
                cout<<"Occupied\n";
            else
                cout<<"Empty\n";
            break;

        case 4:
            cout<<"Program closed, Thank you.\n";
            break;

        default:
            cout<<"Please enter correct option\n";
        }
    }

    return 0;
}

