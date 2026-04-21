#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int size = 10000;
    int index = 6;

    string namearray[size] = {"meerub", "uswa", "zara", "sana", "sara", "ali"};
    string shoottypear[size] = {"wedding", "solo", "event", "wedding", "solo", "event"};
    string package_ar[size] = {"premium", "Elite", "premium", "Basic", "Elite", "Basic"};
    int hours[size] = {5, 1, 3, 2, 3, 7};
    int userchoice;

    int i;
    int shoot_bill[size];

    for (int i = 0; i < index; i++)
    {
        if (package_ar[i] == "Basic")
            shoot_bill[i] = hours[i] * 1000;
        else if (package_ar[i] == "Elite")
            shoot_bill[i] = hours[i] * 2000;
        else
            shoot_bill[i] = hours[i] * 3000;
    }

    while (true)
    {
        system("cls");
        cout << "==============================================" << endl;
        cout << "     PHOTOGRAPHY BUSINESS MANAGEMENT SYSTEM  " << endl;
        cout << "==============================================" << endl;

        cout << "1. Admin " << endl;
        cout << "2. User " << endl;
        cout << "3. Exit " << endl;

        int choice;
        cout << "Enter your choice ";
        cin >> choice;

        if (choice == 1)
        {
            for (i = 0; i < 3; i++)
            {
                string password, username;
                cout << endl;
                cout << "Admin Login Attempt " << i + 1 << endl;
                cout << "Enter Username ";
                cin >> username;
                cout << "Enter Password ";
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    cout << endl
                         << "LOGIN SUCCESSFULL ! " << endl;
                    while (true)
                    {
                        cout << "=========ADMIN MENU===========" << endl;
                        cout << "1. Show all Bookings " << endl;
                        cout << "2. Search Bookings " << endl;
                        cout << "3. Add Bookings " << endl;
                        cout << "4. Update Bookings " << endl;
                        cout << "5. Delete Booking" << endl;
                        cout << "6. Sorting " << endl;
                        cout << "7. Total revenue " << endl;
                        cout << "8. Highset paying client " << endl;
                        cout << "9. Lowest paying client " << endl;
                        cout << "10. Show Average Bill per Client " << endl;
                        cout << "11. Logout " << endl;

                        cout << "Enter your choice ";
                        cin >> choice;

                        if (choice == 1)
                        {
                            system("cls");
                            cout << "       ----Show all the data---- " << endl;
                            cout << "Name\t\tShoot\t\tPackage\t\tHours\t\tBill\n";
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] != "")
                                {
                                    cout << namearray[i] << "\t\t";
                                    cout << shoottypear[i] << "\t\t";
                                    cout << package_ar[i] << "\t\t";
                                    cout << hours[i] << "\t\t";
                                    cout << shoot_bill[i] << endl;
                                }
                            }

                            cout << endl;
                        }
                        else if (choice == 2)
                        {
                            system("cls");
                            cout << "---------Search----------" << endl;
                            string search;
                            bool found = false;
                            cout << "Enter name to search ";
                            cin >> search;

                            for (i = 0; i < index; i++)
                            {
                                if (search == namearray[i])
                                {
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
                        else if (choice == 3)
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
                            if (package_ar[index] == "Basic")
                                shoot_bill[index] = hours[index] * 1000;
                            else if (package_ar[index] == "Elite")
                                shoot_bill[index] = hours[index] * 2000;
                            else
                                shoot_bill[index] = hours[index] * 3000;

                            index++;
                            cout << "Booking Added Successfully " << endl;
                        }

                        else if (choice == 4)
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
                                    getline(cin, namearray[index]);

                                    cout << "Shoot type ";
                                    getline(cin, shoottypear[index]);

                                    cout << "Package: (Basic/Elite/Premium) ";
                                    getline(cin, package_ar[index]);

                                    cout << "Hours: ";
                                    cin >> hours[i];

                                    if (package_ar[i] == "Basic")
                                        shoot_bill[i] = hours[i] * 1000;
                                    else if (package_ar[i] == "Elite")
                                        shoot_bill[i] = hours[i] * 2000;
                                    else
                                        shoot_bill[i] = hours[i] * 3000;

                                    cout << "Updated successfully " << endl;
                                }
                            }
                            if (!found)
                            {
                                cout << "record not found ";
                            }
                        }
                        else if (choice == 5)
                        {

                            cout << "------Delete data------" << endl;
                            string del;
                            bool found = false;

                            cout << "Enter name to delete ";
                            cin >> del;
                            for (int i = 0; i < index; i++)
                            {
                                if (namearray[i] == del)
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
                        else if (choice == 6)
                        {

                            for (i = 0; i < index; i++)
                            {
                                for (int j = 0; j < index - i - 1; j++)
                                {
                                    if (shoot_bill[j] > shoot_bill[j + 1])
                                    {
                                        // swap bill
                                        int tempbill = shoot_bill[j];
                                        shoot_bill[j] = shoot_bill[j + 1];
                                        shoot_bill[j + 1] = tempbill;

                                        // swap name
                                        string tempname = namearray[j];
                                        namearray[j] = namearray[j + 1];
                                        namearray[j + 1] = tempname;

                                        // sswap shoot type
                                        string tempshoot = shoottypear[j];
                                        shoottypear[j] = shoottypear[j + 1];
                                        shoottypear[j + 1] = tempshoot;

                                        // swap package
                                        string temppackage = package_ar[j];
                                        package_ar[j] = package_ar[j + 1];
                                        package_ar[j + 1] = temppackage;

                                        // swap hours
                                        int temphours = hours[j];
                                        hours[j] = hours[j + 1];
                                        hours[j + 1] = temphours;
                                    }
                                }
                            }

                            cout << "Bookings sorted by Bill(LOw to High) ";
                            cout << endl;
                            cout << "Name\t\tShoot\t\tPackage\t\tHours\t\tBill\n";

                            for (int i = 0; i < index; i++)
                            {
                                cout << namearray[i] << "\t\t";
                                cout << shoottypear[i] << "\t\t";
                                cout << package_ar[i] << "\t\t";
                                cout << hours[i] << "\t\t";
                                cout << shoot_bill[i] << endl;
                            }
                        }

                        else if (choice == 7)
                        {
                            int total_income = 0;
                            for (i = 0; i < index; i++)
                            {

                                total_income += shoot_bill[i];
                            }
                            cout << "Total revenue " << total_income << endl;
                        }

                        else if (choice == 8)

                        {
                            cout << "----Highest paying client-----" << endl;
                            int max = shoot_bill[0];
                            string max_name = namearray[0];
                            for (i = 0; i < index; i++)
                                if (max < shoot_bill[i])
                                {
                                    max = shoot_bill[i];
                                    max_name = namearray[i];
                                }
                            cout << "Highest paying Client " << max_name << " = " << max;
                            cout << endl;
                        }

                        else if (choice == 9)
                        {
                            cout << "----Lowest paying client-----" << endl;
                            int min = shoot_bill[0];
                            string min_name = namearray[0];
                            for (i = 0; i < index; i++)
                                if (min > shoot_bill[i])
                                {
                                    min = shoot_bill[i];
                                    min_name = namearray[i];
                                }
                            cout << "Lowest paying Client " << min_name << " = " << min;
                            cout << endl;
                        }

                        else if (choice == 10)
                        {
                            int total_income = 0;
                            for (i = 0; i < index; i++)
                            {

                                total_income += shoot_bill[i];
                            }
                            int average = total_income / index;
                            cout << "Average Bill Per client " << average << endl;
                        }
                        else if (choice == 11)
                        {
                            break;
                        }

                        else
                        {
                            cout << "Exiting Admin menu ";
                            cout << endl;
                        }
                        cout << "Press any key to continue ";
                        getch();
                    }
                }
            }
        }
        else if (choice == 2)
        {
            while (true)
            {

                cout << "=========USER MENU============" << endl;
                cout << "1. View Your Booking Details " << endl;
                cout << "2. Search Your Bookings " << endl;
                cout << "3. View All Packages " << endl;
                cout << "4. View All Shoot Types " << endl;
                cout << "5. Check Your Bill " << endl;
                cout << "6. Discount " << endl;
                cout << "7. Feedback " << endl;
                cout << "8. Logout " << endl;

                cout << "Enter your choice ";
                cin >> userchoice;
                // view you details
                if (userchoice == 1)
                {
                    string name;
                    bool found = false;
                    cout << "Enter your name to see your detail ";
                    cin >> name;

                    for (i = 0; i < index; i++)
                    {
                        if (name == namearray[i])
                        {
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
                    cout << "press any to continue ";
                    getch();
                }
                // search
                if (userchoice == 2)
                {
                    string search;
                    bool found = false;
                    cout << "Enter name to search ";
                    cin >> search;

                    for (i = 0; i < index; i++)
                    {
                        if (search == namearray[i])
                        {
                            cout << namearray[i] << " " << shoot_bill[i] << endl;
                            found = true;
                        }
                    }
                    cout << "press any to continue ";
                    getch();
                }
                // view packages
                if (userchoice == 3)
                {
                    cout << "Packages Details " << endl;
                    cout << "Package name\t\tPrice" << endl;
                    cout << "Basic\t\t\t" << "1000" << endl;
                    cout << "Elite\t\t\t" << "2000" << endl;
                    cout << "Premium\t\t\t" << "3000" << endl;
                    cout << "press any to continue ";
                    getch();
                }
                // View shoottypes
                if (userchoice == 4)
                {
                    cout << "Shoot Types Details " << endl;
                    cout << "Shoot types" << endl;
                    cout << "Event" << endl;
                    cout << "Solo" << endl;
                    cout << "Wedding" << endl;
                    getch();
                }
                // Your Bill
                if (userchoice == 5)
                {
                    string name;
                    bool found = false;
                    cout << "Enter name to Check your bill ";
                    cin >> name;

                    for (i = 0; i < index; i++)
                    {
                        if (name == namearray[i])
                        {

                            cout << "Your Bill " << "=" << shoot_bill[i] << endl;
                            found = true;
                        }
                    }
                    cout << "press any to continue ";
                    getch();
                }
                // discount
                else if (userchoice == 6)
                {
                    bool found = false;
                    string name;
                    cout << "enter your name to get dicount ";
                    cin >> name;
                    for (int i = 0; i < index; i++)
                    {
                        if (name == namearray[i])
                        {
                            found = true;

                            if (shoot_bill[i] > 4000)
                            {
                                float discount = shoot_bill[i] * 0.95;
                                shoot_bill[i] = shoot_bill[i] - discount;
                                cout << "5% discount applied " << endl;
                                cout << "New bill is " << shoot_bill[i];
                            }
                            else
                            {
                                cout << "NO dicount "<<endl;
                            }
                        }
                    }
                    cout << "press any to continue ";
                    getch();
                }
                // feedback
                else if (userchoice == 7)
                {
                    string msg;
                    cout << "Your Feedback ";
                    cin.ignore();
                    getline(cin, msg);
                    cout << "Saved: " << msg << endl;
                    cout << "press any to continue ";
                    getch();
                }
                else if (userchoice == 8)
                {
                    break;
                }
                else
                {
                    cout << "Exiting User Menu ";
                }
            }
        }

        else
        {
            cout << "Exiting Program";
        }
        cout << "Press any key to continue ";
        getch();
    }
    return 0;
}
