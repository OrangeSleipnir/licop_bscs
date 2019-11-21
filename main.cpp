#include <iostream>
#include <stdlib.h>

using namespace std;

class product
{
    public:
        void addproduct(int Product_id,int  Price,int  Expiration_date,string Product_Name,string Manufacturer);
        double DisplayProducts(void);
        string choice;

    product();

    private:
        int Product_id, Price, Expiration_date;
        string Product_Name, Manufacturer;
};

product::product(void)
{

    cout << "\t\t Welcome to MAH STORE! \n\n"<< endl;

    do{
      {

        cout<< "Enter Product I.D: ";
        cin >> Product_id;
        cout<< "Enter Prodct Name: ";
        cin >> Product_Name;
        cout<< "Enter Price: ";
        cin >> Price;
        cout<< "Enter Manufacturer: ";
        cin >> Manufacturer;
        cout<< "Enter Expiration Date: ";
        cin >> Expiration_date;
      }
        cout<< "\t\t Do you want to add products? "<< endl;
        cin>> choice;
      }

    while (choice == "Y"|| choice == "y");
}


double product::DisplayProducts(void)
{

    cout<< "The product I.D. is: " << Product_id << endl;
    cout<< "The product name is: " << Product_Name<< endl;
    cout<< "The Price is: " << Price<< endl;
    cout<< "The product manufacturer is: " <<Manufacturer<< endl;
    cout<< "The Product expiration is: " << Expiration_date<< endl;
}


int main()
{
   product product;

   product.DisplayProducts();

return 0;
}
