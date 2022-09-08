#include <iostream>

using namespace std;

struct Customer
{
    int Cid, Age;
    string Cname, City;
};
void display(struct Customer c)
{
    cout << "Customer Id: " << c.Cid << "." << endl;
    cout << "Customer Name: " << c.Cname << "." << endl;
    cout << "Customer Age: " << c.Age << "." << endl;
    cout << "Customer City: " << c.City << "." << endl;
    cout<<"-------------------------------\n";
}

int main()
{
    struct Customer Customer_record[3] = {{1, 15, "Aarav", "Nagpur"},
                                          {2, 21, "Abhishek", "Sangli"},
                                          {3, 19, "Ishaan", "Kolhapur"}};

    for (int i = 0; i < 3; i++)
    {

        display(Customer_record[i]);
    }
}