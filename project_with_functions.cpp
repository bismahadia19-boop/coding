#include <iostream>
#include <conio.h>
using namespace std;
const int SIZE = 10000;
int index = 6;

string namearray[SIZE] = {"meerub", "uswa", "zara", "sana", "sara", "ali"};
string shoottypear[SIZE] = {"Wedding", "Solo", "Event", "Wedding", "Solo", "Event"};
string package_ar[SIZE] = {"Premium", "Elite", "Premium", "Basic", "Elite", "Basic"};
int hours[SIZE] = {5, 4, 3, 2, 1, 7};
int userchoice;
string name;

int i;
int shoot_bill[SIZE];
int calculate_bill(string shoottype, string package, int hours)
{
    int bill = 0;
    if (shoottype == "Wedding")
    {
        if (package == "Premium")
        {
            bill = hours * 1000;
        }
        else if (package == "Elite")
        {
            bill = hours * 1500;
        }
        else if (package == "Basic")
        {
            bill = hours * 500;
        }
    }
    else if (shoottype == "Solo")
    {
        if (package == "Premium")
        {
            bill = hours * 500;
        }
        else if (package == "Elite")
        {
            bill = hours * 800;
        }
        else if (package == "Basic")
        {
            bill = hours * 300;
        }
    }
    else if (shoottype == "Event")
    {
        if (package == "Premium")
        {
            bill = hours * 700;
        }
        else if (package == "Elite")
        {
            bill = hours * 1200;
        }
        else if (package == "Basic")
        {
            bill = hours * 400;
        }
    }
    return bill;
}
void showbookings(int index, int shoot_bill[], string namearray[], string shoottypear[], string package_ar[], int hours[])
{

    cout << "Name\t\tShoot Type\tPackage\t\tHours\tBill" << endl;
    for (i = 0; i < index; i++)
    {
        if (namearray[i] != "")
        {
            shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);
            cout << namearray[i] << "\t\t" << shoottypear[i] << "\t\t" << package_ar[i] << "\t\t" << hours[i] << "\t" << shoot_bill[i] << endl;
        }
    }
}
void searchbooking(string name, int index, string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    bool found = false;
    cout << "Enter name to search ";
    cin >> name;
    for (i = 0; i < index; i++)
    {
        if (name == namearray[i])
        {
            shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);
            cout << "Name: " << namearray[i] << endl;
            cout << "Shoot Type: " << shoottypear[i] << endl;
            cout << "Package: " << package_ar[i] << endl;
            cout << "Hours: " << hours[i] << endl;
            cout << "Shoot bill: " << shoot_bill[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No Record Found ";
        cout << endl;
    }
}
void addbooking(int &index, string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    cout << "Enter Client Name: ";
    cin.ignore();
    getline(cin, namearray[index]);
    cout << "Shoot type ";
    getline(cin, shoottypear[index]);
    cout << "Package: (Basic/Elite/Premium) ";
    getline(cin, package_ar[index]);
    cout << "Hours: ";
    cin >> hours[index];
    shoot_bill[index] = calculate_bill(shoottypear[index], package_ar[index], hours[index]);
    cout << "Bill: " << shoot_bill[index] << endl;
    cout << "Booking added successfully " << endl;
    index++;
}
void updatebooking(string name, int shoot_bill[], int index, string namearray[], string shoottypear[], string package_ar[], int hours[])
{
    system("cls");
    cout << "------Update data------" << endl;
    string update;
    bool found = false;

    cout << "Enter name to update ";
    cin >> update;

    for (i = 0; i < index; i++)
    {
        if (update == namearray[i])
        {
            found = true;
            cout << "Enter Client Name: ";
            cin.ignore();
            getline(cin, namearray[i]);

            cout << "Shoot type ";
            getline(cin, shoottypear[i]);

            cout << "Package: (Basic/Elite/Premium) ";
            getline(cin, package_ar[i]);

            cout << "Hours: ";
            cin >> hours[i];

            shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);

            cout << "Updated successfully " << endl;
        }
    }
    if (!found)
    {
        cout << "record not found ";
    }
}
void deletebooking(string name, int index, string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    cout << "------Delete data------" << endl;
    bool found = false;

    cout << "Enter name to delete ";
    cin >> name;
    for (int i = 0; i < index; i++)
    {
        if (namearray[i] == name)
        {
            found = true;
            namearray[i] = "";
            shoottypear[i] = "";
            package_ar[i] = "";
            hours[i] = 0;
            shoot_bill[i] = 0;

            cout << "Deleted successfully";
            cout << endl;
        }
    }

    if (!found)
    {
        cout << "Record not found";
        cout << endl;
    }
}
void sortbookings(int index, string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    for (int i = 0; i < index - 1; i++)
    {
        for (int j = 0; j < index - i - 1; j++)
        {
            if (shoot_bill[j] > shoot_bill[j + 1])
            {
                // swaping name
                string tempName = namearray[j];
                namearray[j] = namearray[j + 1];
                namearray[j + 1] = tempName;
                // swaping shoot type
                string tempShoot = shoottypear[j];
                shoottypear[j] = shoottypear[j + 1];
                shoottypear[j + 1] = tempShoot;
                // swaping package
                string tempPackage = package_ar[j];
                package_ar[j] = package_ar[j + 1];
                package_ar[j + 1] = tempPackage;
                // swaping hours
                int tempHours = hours[j];
                hours[j] = hours[j + 1];
                hours[j + 1] = tempHours;
                // swaping bill
                int tempBill = shoot_bill[j];
                shoot_bill[j] = shoot_bill[j + 1];
                shoot_bill[j + 1] = tempBill;
            }
        }
    }
    cout << "Bookings sorted by Bill(LOw to High) ";
    cout << endl;
    cout << "Name\t\tShoot\t\tPackage\t\tHours\t\tBill\n";
 for (i = 0; i < index; i++)
    {
        if (namearray[i] != "")
        {
            shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);
            cout << namearray[i] << "\t\t" << shoottypear[i] << "\t\t" << package_ar[i] << "\t\t" << hours[i] << "\t\t" << shoot_bill[i] << endl;
        }
    }
    
}
void revenue(int index, int shoot_bill[])
{
    int total_revenue = 0;
    for (int i = 0; i < index; i++)
    {
        total_revenue += shoot_bill[i];
    }
    cout << "Total revenue: " << total_revenue << endl;
}
void highestpayingclient(int index, int shoot_bill[], string namearray[])
{
    int max = shoot_bill[0];
    string max_name = namearray[0];
    for (int i = 0; i < index; i++)
        if (max < shoot_bill[i])
        {
            max = shoot_bill[i];
            max_name = namearray[i];
        }
    cout << "Highest paying Client " << max_name << " = " << max;
    cout << endl;
}
void lowestpayingclient(int index, int shoot_bill[], string namearray[])
{
    int min = shoot_bill[0];
    string min_name = namearray[0];
    for (int i = 0; i < index; i++)
        if (min > shoot_bill[i])
        {
            min = shoot_bill[i];
            min_name = namearray[i];
        }
    cout << "Lowest paying Client " << min_name << " = " << min;
    cout << endl;
}
void averagebill(int index, int shoot_bill[])
{
    int total_revenue = 0;
    for (int i = 0; i < index; i++)
    {
        total_revenue += shoot_bill[i];
    }
    float average = (float)total_revenue / index;
    cout << "Average bill per client: " << average << endl;
}
void logout()
{
    cout << "Logout successful " << endl;
    cout << "Returning to main menu " << endl;
    getch();
}
void adminmenu(string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    while (true)
    {
        system("cls");
        cout << "---------Welcome to Admin menu---------" << endl;
        cout << "1. Show all bookings " << endl;
        cout << "2. Search booking " << endl;
        cout << "3. Add booking " << endl;
        cout << "4. Update booking " << endl;
        cout << "5. Delete booking " << endl;
        cout << "6. Sort bookings " << endl;
        cout << "7. Total revenue " << endl;
        cout << "8. Highest paying client " << endl;
        cout << "9. Lowest paying client " << endl;
        cout << "10. Average bill per client " << endl;
        cout << "11. Logout " << endl;
        cout << "Enter your choice: ";
        int userchoice;
        cin >> userchoice;
        if (userchoice == 1)
        {
            showbookings(index, shoot_bill, namearray, shoottypear, package_ar, hours);
        }
        if (userchoice == 2)
        {
            searchbooking(name, index, namearray, shoottypear, package_ar, hours, shoot_bill);
        }
        if (userchoice == 3)
        {
            addbooking(index, namearray, shoottypear, package_ar, hours, shoot_bill);
        }
        if (userchoice == 4)
        {
            updatebooking(name, shoot_bill, index, namearray, shoottypear, package_ar, hours);
        }
        if (userchoice == 5)
        {
            deletebooking(name, index, namearray, shoottypear, package_ar, hours, shoot_bill);
        }
        if (userchoice == 6)
        {
            sortbookings(index, namearray, shoottypear, package_ar, hours, shoot_bill);
        }
        if (userchoice == 7)
        {
            revenue(index, shoot_bill);
        }
        if (userchoice == 8)
        {
            highestpayingclient(index, shoot_bill, namearray);
        }
        if (userchoice == 9)
        {
            lowestpayingclient(index, shoot_bill, namearray);
        }
        if (userchoice == 10)
        {
            averagebill(index, shoot_bill);
        }
        if (userchoice == 11)
        {
            logout();
            break;
        }
        cout << "Press any key to continue ";
        getch();
    }
}
bool adminlogin()
{
    string name, password;
    cout << "Enter username ";
    cin >> name;
    cout << "Enter password ";
    cin >> password;
    if (name == "admin" && password == "123")
    {
        cout << "Login successful " << endl;
        adminmenu(namearray, shoottypear, package_ar, hours, shoot_bill);
        return true;
    }
    else
    {
        cout << "Wrong username and password " << endl;
        return false;
    }
}
void viewyourbookingdetails(string name, int index, string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    bool found = false;
    cout << "Enter your name to see your detail ";
    cin >> name;
    for (int i = 0; i < index; i++)
    {
        if (name == namearray[i])
        {
            cout << "Name: " << namearray[i] << endl;
            cout << "Shoot Type: " << shoottypear[i] << endl;
            cout << "Package: " << package_ar[i] << endl;
            cout << "Hours: " << hours[i] << endl;
            cout << "Shoot bill: " << shoot_bill[i] << endl;
            shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);
            found = true;
        }
    }

    if (!found)
    {
        cout << "No Record Found ";
        cout << endl;
    }
}
void viewpackages()
{
    cout << "Packages Details " << endl;
    cout << "Package name\t\tPrice" << endl;
    cout << "If shoottyoe is WEDDING " << endl;
    cout << "Basic\t\t\t" << "500" << endl;
    cout << "Elite\t\t\t" << "1500" << endl;
    cout << "Premium\t\t\t" << "3000" << endl;

    cout << "If Shoottype is Solo " << endl;
    cout << "Basic\t\t\t" << "300" << endl;
    cout << "Elite\t\t\t" << "800" << endl;
    cout << "Premium\t\t\t" << "1000" << endl;

    cout << "If Shoottype is Event " << endl;
    cout << "Basic\t\t\t" << "400" << endl;
    cout << "Elite\t\t\t" << "1200" << endl;
    cout << "Premium\t\t\t" << "2000" << endl;
}
void viewshoottype()
{
    cout << "Shoot types details " << endl;
    cout << "Shoot types" << endl;
    cout << "Event " << endl;
    cout << "Solo" << endl;
    cout << "Wedding " << endl;
}
void viewyourbill(string name, int index, string namearray[], int shoot_bill[])
{
    bool found = false;
    cout << "Enter name to Check your bill ";
    cin >> name;

    for (int i = 0; i < index; i++)
    {
        if (name == namearray[i])
        {
            shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);
            cout << "Your Bill " << "= " << shoot_bill[i] << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No Record Found ";
        cout << endl;
    }
}
int discount(string name, int index, string namearray[], int shoot_bill[])
{
    bool found = false;
    cout << "enter your name to get dicount ";
    cin >> name;
    for (int i = 0; i < index; i++)
    {
        shoot_bill[i] = calculate_bill(shoottypear[i], package_ar[i], hours[i]);
        if (name == namearray[i])
        {
            found = true;

            if (shoot_bill[i] > 4000)
            {
                float discount = shoot_bill[i] * 0.05;
                shoot_bill[i] = shoot_bill[i] - discount;
                cout << "5% discount applied " << endl;
                cout << "New bill is " << shoot_bill[i] << endl;
            }
            else
            {
                cout << "NO dicount " << endl;
            }
        }
    }
    if (!found)
    {
        cout << "No Record Found ";
        cout << endl;
    }
}
void feedback()
{
    string feedback;
    cout << "Enter your feedback about our service ";
    cin.ignore();
    getline(cin, feedback);
    cout << "Thank you for your feedback " << endl;
}
void usermenu(string namearray[], string shoottypear[], string package_ar[], int hours[], int shoot_bill[])
{
    while (true)
    {
        system("cls");
        cout << "---------Welcome to User menu---------" << endl;
        cout << "1. View your booking details " << endl;
        cout << "2. View packages details " << endl;
        cout << "3. View shoot types details " << endl;
        cout << "4. View your bill " << endl;
        cout << "5. Get discount " << endl;
        cout << "6. Give feedback " << endl;
        cout << "7. Logout " << endl;
        cout << "Enter your choice: ";
        int userchoice;
        cin >> userchoice;
        if (userchoice == 1)
        {
            viewyourbookingdetails(name, index, namearray, shoottypear, package_ar, hours, shoot_bill);
        }
        else if (userchoice == 2)
        {
            viewpackages();
        }
        else if (userchoice == 3)
        {
            viewshoottype();
        }
        else if (userchoice == 4)
        {
            viewyourbill(name, index, namearray, shoot_bill);
        }
        else if (userchoice == 5)
        {
            discount(name, index, namearray, shoot_bill);
        }
        else if (userchoice == 6)
        {
            feedback();
        }
        else if (userchoice == 7)
        {
            logout();
            break;
        }
        else
        {
            cout << "Wrong option selected " << endl;
        }
        cout << "Press any key to continue ";
        getch();
    }
}
int main()
{
    while (true)
    {
        cout << "==============================================" << endl;
        cout << "     PHOTOGRAPHY BUSINESS MANAGEMENT SYSTEM  " << endl;
        cout << "==============================================" << endl;
        cout << "1. Admin login " << endl;
        cout << "2. User Menu " << endl;
        cout << "3. Exit " << endl;
        cout << "Enter your choice ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            adminlogin();
        }
        else if (choice == 2)
        {
            usermenu(namearray, shoottypear, package_ar, hours, shoot_bill);
        }
        else if (choice == 3)
        {
            cout << "Exiting program " << endl;
            break;
        }
        else
        {
            cout << "Wrong option selected " << endl;
        }
    }
    cout << "Press any key to continue ";
    getch();
    return 0;
}