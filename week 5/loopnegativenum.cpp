#include <iostream>
using namespace std;

int main() {
    int num,sum=0;
    cout << "Enter number until you enter negative  ";
    cin >> num;
    while (num >= 0) {
        cout << "You entered: " << num << endl;
        sum=sum+num;
        cout << "Enter number until you enter negative number  ";
        cin >> num;
    }
    cout << "program ends because you entered negative number " << endl;
    cout<<"sum of numbers is "<<sum;
}