#include <iostream>

using namespace std;

struct Customer
{
    int Cid, Age;
    string Cname, City;
};
void display(Customer &c)
{
    cout << "Customer Id: " << c.Cid << "." << endl;
    cout << "Customer Name: " << c.Cname << "." << endl;
    cout << "Customer Age: " << c.Age << "." << endl;
    cout << "Customer City: " << c.City << "." << endl;
}

int main()
{
    Customer c;
    c.Cid = 21510056;
    c.Cname = "Smit Butle";
    c.Age = 19;
    c.City = "Nagpur";
    display(c);
    return 0;
}