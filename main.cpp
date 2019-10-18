#include <iostream>
#include <stdlib.h>

using namespace std;
void sign_in();
void sign_up();
void stuffs();

string choiceYes = "yes", choiceNo = "no", choice;
string choiceYes2 = "yes", choiceNo2 = "no", choice2;
string fname, lname, username;
int age,sec_code=123, mycode;

int main()
{
    cout << "\t\t\t Welcome Customer" << endl;
    cout << "\t\t Are you already a member?";
    cout << " Yes or No\n" << endl;
    cout << "\t\t Enter  your choice: ";
    cin >> choice;

    if (choice == choiceYes)
        {
            sign_in();
            string stuff;
        int again;
        cout << "\t\t\n\n Do you want to shop?"<<endl;
        cout << "\n Yes or No?"<<endl;
        again;
        cin>> stuff;
        if (stuff=="yes")
            {
            stuffs();
            }
        else if (stuff=="no")
            {
            cout<< "Thank you for visiting us!"<< endl;
            return 0;
            }

        }
        else if (choice==choiceNo)
            {
            sign_up();
            }





    return 0;

}


void sign_in()
    {
       int trials = 0, passcode = 123;
       while (trials!=3)
        {
            cout << "Enter your password: " << endl;
            cin >> passcode;
            if (passcode!=123)
                {
                trials++;
                }
            else if (passcode=123)
                {
                cout << "\t\t Welcome Member!";
                }
                break;
            {
            if (trials==1)
                {
                 cout << "Your password is incorrect. You only have 2 trials remaining" << endl;
                }
            else if (trials==2)
                {
                 cout << "Your password is incorrect. You only have 1 trials remaining" << endl;
                }
            else if (trials==3)
                {
                 cout << "Your password is incorrect. Try again later" << endl;
                }
            }
        }
    }


void sign_up()
    {
        cout << "\t\t Do you want to sign up?" << endl;
        cout << "\t\t Yes or No?"<< endl;
        cin >> choice2;

        if (choice2==choiceYes2)
        {

            cout << "Please enter username :\t";
            cin >> username;
            cout << "Please enter first name :\t";
            cin >> fname;
            cout << "Please enter last name :\t";
            cin >> lname;
            cout << "Please enter age :\t";
            cin >>age;

            if (age<18)
                {
                cout << "Registration is not valid. Still a minor";
                }
            else
                {
                cout << "Congratulations! You are now a member!"<<endl;
                cout << "\n\n\t\tUsername : "<<username<<endl;
                cout << "\n\n\t\tName : " <<fname<<endl;
                cout << "\n\n\t\tLast name: " <<lname<< endl;
                cout << "\n\n\t\tAge :"<<age<<endl;
                }
        }
    }


void stuffs()
{
    int items, points=0, wearable= 10, tablets= 30, phones= 40, camera= 60;

    while (points!=10000000)
    {
        cout << "\t\t\tPlease select the item that you want to purchase"<<endl;
        cout << "[1] Wearables\t\t [2] Phones\t\t [3] Tablet\t\t [4] Camera\t\t"<<endl;
        cin >> items;

    switch (items)
    {

    case 1:
    {
        int total, quantity;
        string choiceyes="yes",choiceno="no", choice;

        cout << "How many werables do you want to purchase?"<<endl;
        cin >>quantity;
        total= quantity*wearable;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
        if (points>=100&& points<= 500)
        {
            cout<< "Congratulations! You have passed 100 points. You are now eligible to redeem your load reward. Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>=500&& points<=999)
        {
            cout << "Congratulations! You have passed 500 points. You are now eligible to redeem your smart watch reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 1000&&points<=1999)
        {
            cout << "Congratulations! You have passed 1000 points. You are now eligible to redeem your phone reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 2000)
        {
            cout << "Congratulations! You have passed 2000 points. You are now eligible to redeem your tablet reward.  Please ignore if you have already claimed your reward."<<endl;
        }

        cout << "Do you want to purchase additional items?"<<endl;
        cout << "Yes or No?" << endl;
        {
        cin>> choice;
        if (choice==choiceyes)
            {
            cout<< "Continue shopping with us!"<<endl;
            }
        else if (choice==choiceno)
            {
            cout<< "Thank you for choosing to shop with us!"<<endl;
            exit (0);
            }
        }
        break;
    }

    case 2:
    {
        int total, quantity;
        string choiceyes="yes",choiceno="no", choice;

        cout << "How many phones do you want to purchase?"<<endl;
        cin >>quantity;
        total= quantity*phones;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
       if (points>=100&& points<= 500)
        {
            cout<< "Congratulations! You have passed 100 points. You are now eligible to redeem your load reward. Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>=500&& points<=999)
        {
            cout << "Congratulations! You have passed 500 points. You are now eligible to redeem your smart watch reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 1000&&points<=1999)
        {
            cout << "Congratulations! You have passed 1000 points. You are now eligible to redeem your phone reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 2000)
        {
            cout << "Congratulations! You have passed 2000 points. You are now eligible to redeem your tablet reward.  Please ignore if you have already claimed your reward."<<endl;
        }

        cout << "Do you want to purchase additional items?"<<endl;
        cout << "Yes or No?" << endl;
        {
        cin>> choice;
        if (choice==choiceyes)
            {
            cout<< "Continue shopping with us!"<<endl;
            }
        else if (choice==choiceno)
            {
            cout<< "Thank you for choosing to shop with us!"<<endl;
            exit (0);
            }
        }
        break;
    }

    case 3:
    {
        int total, quantity;
        string choiceyes="yes",choiceno="no", choice;

        cout << "How many tablets do you want to purchase?"<<endl;
        cin >>quantity;
        total= quantity*tablets;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
        if (points>=100&& points<= 500)
        {
            cout<< "Congratulations! You have passed 100 points. You are now eligible to redeem your load reward. Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>=500&& points<=999)
        {
            cout << "Congratulations! You have passed 500 points. You are now eligible to redeem your smart watch reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 1000&&points<=1999)
        {
            cout << "Congratulations! You have passed 1000 points. You are now eligible to redeem your phone reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 2000)
        {
            cout << "Congratulations! You have passed 2000 points. You are now eligible to redeem your tablet reward.  Please ignore if you have already claimed your reward."<<endl;
        }

        cout << "Do you want to purchase additional items?"<<endl;
        cout << "Yes or No?" << endl;
        {
        cin>> choice;
        if (choice==choiceyes)
            {
            cout<< "Continue shopping with us!"<<endl;
            }
        else if (choice==choiceno)
            {
            cout<< "Thank you for choosing to shop with us!"<<endl;
            exit (0);
            }
        }
        break;
    }

    case 4:
    {
        int total, quantity;
        string choiceyes="yes",choiceno="no", choice;

        cout << "How many cameras do you want to purchase?"<<endl;
        cin >>quantity;
        total= quantity*camera;
        points+=total;
        cout << "you have earned\t"<<points<<endl;
        if (points>=100&& points<= 500)
        {
            cout<< "Congratulations! You have passed 100 points. You are now eligible to redeem your load reward. Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>=500&& points<=999)
        {
            cout << "Congratulations! You have passed 500 points. You are now eligible to redeem your smart watch reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 1000&&points<=1999)
        {
            cout << "Congratulations! You have passed 1000 points. You are now eligible to redeem your phone reward.  Please ignore if you have already claimed your reward."<<endl;
        }
        else if (points>= 2000)
        {
            cout << "Congratulations! You have passed 2000 points. You are now eligible to redeem your tablet reward.  Please ignore if you have already claimed your reward."<<endl;
        }

        cout << "Do you want to purchase additional items?"<<endl;
        cout << "Yes or No?" << endl;
        {
        cin>> choice;
        if (choice==choiceyes)
            {
            cout<< "Continue shopping with us!"<<endl;
            }
        else if (choice==choiceno)
            {
            cout<< "Thank you for choosing to shop with us!"<<endl;
            exit (0);
            }
        }
    }
        break;

    }
    }
}
