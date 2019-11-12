#include <iostream>
#include <stdlib.h>

using namespace std;

int arrSize;

int inputArrSize();
void inputArray(int[]);
void displayArray(int []);
void callArray(int []);

int main()
{

   int age[arrSize];
   inputArray(age);
   displayArray(age);
   callArray(age);

    return 0;
}

int inputArrSize (){

    cout << "Enter array size. Up to 4 only: ";
    cin >> arrSize;

    return arrSize;
}

void inputArray(int age[]){

inputArrSize();
for (int i= 0; i<=arrSize-1; i++) {
        cout << "Enter Value for position " <<i+1<<" : ";
        cin >> age [i];
    }
}

void displayArray(int age[]){

for (int i= 0; i<=arrSize-1; i++) {
        cout << "The Value at position " << i +1<< " is "<<age[i]<< endl;

    }
 }

void callArray (int age []){
int choice;

system("CLS");

    cout << "Enter the position of the array that you want to call: "<< endl;
    cin >> choice;

    if (choice == 1)
    {
      cout << "The value in place at position 1 is: " << age [0] << endl;
    }
    if (choice == 2)
    {
      cout << "The value in place at position 2 is: " << age [1] << endl;
    }
    if (choice == 3)
    {
      cout << "The value in place at position 3 is: " << age [2] << endl;
    }
    if (choice == 4)
    {
      cout << "The value in place at position 4 is: " << age [3] << endl;
    }



}
