#include <iostream>

using namespace std;

void title() // Function without parameter, without return type
{
    cout << "\n*********************" << endl;
    cout << "Hotel Management System" << endl;
    cout << "***********************" << endl;
}
class Room      //Room Class to store data on hotel rooms
{
public:
    string roomcat;     //List of attributes for hotel rooms
    string booking;
    string guestname;
    string roomnum;
    int daysbooked;
    string guestnum; // Can't store more than 6 digits as int
    double bookprice;
};
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
            roomcategories(); // Loops room categories function so user can try again
            // Code loops endlessly and breaks if letters are input
    }
}
int pricing(int roomcatprice) //Modified code from In Class Work 5, function, function with parameter and reurn type
{
    int numlist[3];           // Array used to store guest ages for room price calculation
    double sum = 0;

    for (int i = 0;i < 3; i++)

    {
        if (i==0)
        {
            cout << "Please enter number of guests under 18: ";
            cin >> numlist[i];
            sum = sum + numlist[i];
        }
        else if (i==1)
        {
            cout << "Please enter number of guests between 18 and 60: ";
            cin >> numlist[i];
            sum = sum + numlist[i];
        }
        else if (i==2)
        {
            cout << "Please enter number of guests 60+: ";
            cin >> numlist[i];
            sum = sum + numlist[i];
        }
        else
        {
            break;
        }
    }

    sum = roomcatprice*200 + sum; // 200 dollars a day
    return (sum);
}
int main()
{
    int menuchoice,roomchoice,roomcatprice,temp;
    Room Unit11A;   // Declaring object in Room class
    Room Unit12B;
    Room Unit13C;
    Unit11A.roomnum = "11A";    //Room number and booking status attributes assigned
    Unit12B.roomnum = "12B";
    Unit13C.roomnum = "13C";
    Unit11A.booking = "Open";
    Unit12B.booking = "Open";
    Unit13C.booking = "Open";
    Unit11A.roomcat = "King Bed Deluxe";
    Unit12B.roomcat = "2 Queen Beds Deluxe";
    Unit13C.roomcat = "1 King Bed Deluxe with Sofa Sleeper";
    Unit11A.daysbooked = 0; // days booked attribute assigned val zero for conditionals statement later
    Unit12B.daysbooked = 0;
    Unit13C.daysbooked = 0;
    do              // Do while loop for main menu
    {
        title();
        cout << "0. Make Booking" << endl;
        cout << "1. Room Legend" << endl;
        cout << "2. Room Categories" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter the integer corresponding to the menu you'd like to access: ";
        cin >> menuchoice;

        switch (menuchoice)
        {
            case 0:
                cout << "you selected make booking";
                title();
                cout << "[Make Booking]" << endl;
                cout << "Available Rooms" << endl;
                cout << "0. " << Unit11A.roomnum <<" " << Unit11A.booking <<endl;
                cout << "1. " << Unit12B.roomnum << " " << Unit12B.booking <<endl;
                cout << "2. " << Unit13C.roomnum << " " << Unit13C.booking <<endl;
                cout << "3. Return to Main Menu" << endl;
                cout << "Please select a room: ";
                cin >> roomchoice;

                switch (roomchoice) //Switch statement tells code which case to run, each case corresponds to a different objet
                {
                    case 0:
                        cout << "You selected unit 11A!" << endl;
                        Unit11A.booking = "[Closed]";
                        cout << "Guest Last Name: ";
                        cin >> Unit11A.guestname;
                        cout << "Guest Phone Number: ";
                        cin >> Unit11A.guestnum;
                        cout << "Number of days booked: ";
                        cin >> Unit11A.daysbooked;
                        temp = pricing(Unit11A.daysbooked);
                        cout << "Booking price is " << temp << " dollars." <<endl;
                        cout << "Booking Complete";
                        break;
                    case 1:
                        cout << "You selected unit 12B!" << endl;
                        Unit12B.booking = "[Closed]";
                        cout << "Guest Last Name: ";
                        cin >> Unit12B.guestname;
                        cout << "Guest Phone Number: ";
                        cin >> Unit12B.guestnum;
                        cout << "Number of days booked: ";
                        cin >> Unit12B.daysbooked;
                        temp = pricing(Unit12B.daysbooked);
                        cout << "Booking price is " << temp << " dollars." <<endl;
                        cout << "Booking Complete";
                         break;
                    case 2:
                        cout << "You selected unit 13C!" << endl;
                        Unit13C.booking = "[Closed]";
                        cout << "Guest Last Name: ";
                        cin >> Unit13C.guestname;
                        cout << "Guest Phone Number: ";
                        cin >> Unit13C.guestnum;
                        cout << "Number of days booked: ";
                        cin >> Unit13C.daysbooked;
                        temp = pricing(Unit13C.daysbooked);
                        cout << "Booking price is " << temp << " dollars." <<endl;
                        cout << "Booking Complete";
                        break;
                    case 3:
                        cout << "You selected return to main menu";
                        break;
                    default:
                        cout << "Invalid Input. Please Try Again" << endl;
                        // Code loops endlessly and breaks if letters are input
                }
                break;
            case 1:
                cout << "you selected room legend";
                title();
                cout << "[Room Legend]" << endl;
                cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;
                // Code to output object in room class attributes
                cout << Unit11A.roomnum << endl;
                cout << "Room Category: " <<  Unit11A.roomcat << endl;
                cout << "Guest Last Name: " << Unit11A.guestname << endl;
                cout << "Guest Contact Number: " << Unit11A.guestnum << endl;
                if (Unit11A.daysbooked == 0){
                    cout << "Please navigate to [Make Booking] to reserve this open room"<<endl;
                }
                else
                {
                    cout << "Booked for " << Unit11A.daysbooked << " days" <<endl;
                }
                cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;
                cout << Unit12B.roomnum << endl;
                cout << "Room Category: " <<  Unit12B.roomcat << endl;
                cout << "Guest Last Name: " << Unit12B.guestname << endl;
                cout << "Guest Contact Number: " << Unit12B.guestnum << endl;
                if (Unit12B.daysbooked == 0){
                    cout << "Please navigate to [Make Booking] to reserve this open room"<<endl;
                }
                else
                {
                    cout << "Booked for " << Unit12B.daysbooked << " days" <<endl;
                }
                cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;
                cout << Unit13C.roomnum << endl;
                cout << "Room Category: " <<  Unit13C.roomcat << endl;
                cout << "Guest Last Name: " << Unit13C.guestname << endl;
                cout << "Guest Contact Number: " << Unit13C.guestnum << endl;
                if (Unit13C.daysbooked == 0){
                    cout << "Please navigate to [Make Booking] to reserve this open room" << endl;
                }
                else
                {
                    cout << "Booked for " << Unit13C.daysbooked << " days" <<endl;
                }
                cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;
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
    while (menuchoice!=4);

    return 0;
}
