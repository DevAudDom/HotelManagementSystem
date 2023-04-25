#include <iostream>



using namespace std;

int main_menu(){

    int choice;

    cout << "********************************" << endl;

    cout << "Hotel Management System" << endl;

    cout << "********************************" << endl;

    cout << "1. Make Booking" << endl;

    cout << "2. Room Legend" << endl;

    cout << "3. Room Types" << endl;

    cout << "4. Service Packages" << endl;

    cout << "Enter the integer corresponding to the menu you'd like to access: ";

    cin >> choice;

    return choice;

}

int make_booking(){

    int roomchoice;

    cout << "********************************" << endl;

    cout << "Hotel Management System" << endl;

    cout << "********************************" << endl;

    cout << "[Make Booking]" << endl;

    cout << "Available Rooms:" << endl;

    cout << "Please select a room: ";

    cin >> roomchoice;

    return roomchoice;

}



int main()

{

    int choice;

    main_menu();

    choice = main_menu();



    return 0;

}