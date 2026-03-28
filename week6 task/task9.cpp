#include <iostream>
     using namespace std;
    int main() {
         string bookname[10000];
         int count=0;
         int totalbooks=0;
        while (true) {
        int choice;

        cout << "---------Library System --------" << endl;
        cout << "1. Add book \n";
        cout << "2. View book \n";
        cout << "3. Borrow book \n";
        cout<<  "4. Issue book \n";
        cout<<  "5. Exit \n";

        cout << "Enter your choice ";
        cin >> choice;
        if (choice == 1) {
             int n;
            cout<<"enter number of books: ";
            cin>>n;
            cin.ignore();
            totalbooks=totalbooks+n;
            for(int i=0;i<=n;i++){
            cout << "Enter book name: " ;
            getline(cin, bookname[count]);
            cout<<"book added: "<<bookname[count]<<endl;
            count++;
            }
        }
        else if (choice == 2) {
            cout << "View books: number of books are available: "<<totalbooks<<endl;
            for(int i=0;i<count;i++){
            cout<<bookname[i]<<endl;
            }
       }
        else if (choice == 3) {
             cout << "You have Borrowed a book! " << endl;
          
        }
        else if (choice == 4){
            cout << "You have Issued a book! " << endl;
        
        }
        
        else if(choice==5){
            cout<< "Exiting! Library System ta ta bye bye :)";
            break;
        }
        

   
}
 return 0;
}