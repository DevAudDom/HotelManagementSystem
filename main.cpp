#include <iostream>

using namespace std;

void title() // Function without parameter, without return type
{
    cout << "\n********************************" << endl;
    cout << "Hotel Management System" << endl;
    cout << "********************************" << endl;
}
class Room
{
public:
    string booking;
    string guestname;
    string guestnum;
    string roomnum;
    int daysbooked;
};

int make_booking(){
    int roomchoice;
    Room Unit11A;
    // Room Unit12B;
    // Room Unit13C;
    Unit11A.roomnum = "11A";
    // Unit12B.roomnum = "12B";
    // Unit13C.roomnum = "13C";
    Unit11A.booking = "Open";
    // Unit12B.booking = "Open";
    // Unit13C.booking = "Open";
    title();
    cout << "[Make Booking]" << endl;
    cout << "Available Rooms: " << endl;
    cout << "0. " << Unit11A.booking;
    // cout << "1. " << Unit12B.booking;
    // cout << "2. " << Unit13C.booking;
    cout << "\nPlease select a room: ";
    cin >> roomchoice;

    switch (roomchoice)
    {
        case 0:
            cout << "You selected unit 11A!";
            cout << "Guest Name"
            break;
        case 1:
            cout << "you selected room legend";
            break;
        case 2:
            cout << "You selected room categories";
            roomcategories();
            break;
        case 3:
            cout << "You selected quit";
            cout << "\nHave a nice day!";
            return 0;
        default:
            cout << "Invalid Input. Please Try Again" << endl;
            // Code loops endlessly and breaks if letters are input
    }

}
int roomlegend()
{
    title();
}

int roomcategories()

{
    int roomdetails;

    title();
    // Based on https://www.druryhotels.com/bookandstay/chooserateandroom
    cout << "[Room Categories]" << endl;
    cout << "0. 1 King Bed Deluxe" << endl;
    cout << "1. 2 Queen Beds Deluxe" << endl;
    cout << "2. 1 King Bed Deluxe with Sofa Sleeper" << endl;
    cout << "3. Return to Main Menu" << endl;
    cout << "Enter the integer corresponding to the room details you wish to see or return to main menu: ";
    cin >> roomdetails;

    switch (roomdetails)
    {
        case 0:
            title();
            cout << "[1 King Bed Deluxe Details]" << endl;
            cout << "This deluxe room features one king bed, comfortable seating and a walk-in shower in the bathroom. In-room amenities include free Wi-Fi, a TV, microwave, refrigerator, coffeemaker, iron and ironing board, and hairdryer.";
            break;
        case 1:
            title();
            cout << "[2 Queen Beds Deluxe Details]" << endl;
            cout << "This deluxe room features two queen beds and comfortable seating. In-room amenities include free Wi-Fi, a TV, microwave, refrigerator, coffeemaker, iron and ironing board, and hairdryer.";
            break;
        case 2:
            title();
            cout << "[1 King Bed Deluxe with Sofa Sleeper Details]" << endl;
            cout << "This deluxe room features one king bed, a pull-out queen sofa sleeper, comfortable seating and a walk-in shower in the bathroom. In-room amenities include free Wi-Fi, a TV, microwave, refrigerator, coffeemaker, iron and ironing board, and hairdryer.";
            break;
        case 3:
            cout << "Returning to Main Menu";
            break;
        default:
            cout << "Invalid Input. Please Try Again" << endl;
            roomcategories();
    }
}
int servpack()
{
    title();
}
int main()
{
    int choice;
    do
    {
        title();
        cout << "0. Make Booking" << endl;
        cout << "1. Room Legend" << endl;
        cout << "2. Room Categories" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter the integer corresponding to the menu you'd like to access: ";
        cin >> choice;

        switch (choice)
        {
            case 0:
                cout << "you selected make booking";
                make_booking();
                break;
            case 1:
                cout << "you selected room legend";
                break;
            case 2:
                cout << "You selected room categories";
                roomcategories();
                break;
            case 3:
                cout << "You selected quit";
                cout << "\nHave a nice day!";
                return 0;
            default:
                cout << "Invalid Input. Please Try Again" << endl;
                // Code loops endlessly and breaks if letters are input
        }
    }
    while (choice!=4);

    return 0;
}