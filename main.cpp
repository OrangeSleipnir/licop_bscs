#include <iostream>
#include <stdlib.h>

using namespace std;

int arrSize;

int inputArrSize();
void inputArray(string[], string [], int[], int[], string[], string[]);
void displayArray(string [], string [], int[], int[], string[], string[]);

int main()
{
   string fname [10], lname [10], email [10], address [10];
   int age [10], contactno[10];
   inputArray(fname, lname, age, contactno, email, address);
   displayArray(fname, lname, age, contactno, email, address);

    return 0;
}

int inputArrSize (){

    cout << "Enter array size: ";
    cin >> arrSize;

    return arrSize;
}

void inputArray(string fname[], string lname[], int age [], int contactno[], string email[], string address[]){

inputArrSize();
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Firstname: " <<i+1<<" : ";
        cin >> fname [i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Lastname: " <<i+1<<" : ";
        cin >> lname [i];
    }
    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter age: " <<i+1<<" : ";
        cin >> age [i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter contact number: " <<i+1<<" : ";
        cin >> contactno [i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter email: " <<i+1<<" : ";
        cin >> email[i];
    }

    for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter address: " <<i+1<<" : ";
        cin >> address[i];
    }
}

void displayArray(string fname[], string lname [], int age[], int contactno[], string email[], string address[]){

system ("CLS");
    cout << "| Firstname | Lastname | Age | Contacts | Email | Address"<< endl;
    for (int i= 0; i<=arrSize-1; i++) {
    cout << "\n  " << fname [i]<< "       |    " << lname[i] << "       |    " << age[i] << "       |    " << contactno[i] << "       |    " << email[i]<< "       |    " << address[i] <<endl;

    }
 }

