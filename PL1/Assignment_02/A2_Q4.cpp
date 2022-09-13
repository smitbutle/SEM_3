/* Create class SportsTeam (Name, NoOfPlayers, Average_age). Make a Static 
data member as ObjectCount. Create 3 Objects of SportsTeam, Insert and 
Display all information of 3 SportsTeam and Display count of object. */
#include <iostream>
#include <string.h>
using namespace std;

class SportsTeam{
    public:
    string Name;
    int NoOfPlayers, Average_age;

    static int ObjectCount;
    SportsTeam(string s, int a,int b){
        Name=s;
        NoOfPlayers=a;
        Average_age=b;
    }

};
void display(SportsTeam& o){
    cout<<"Name: "<<o.Name<<endl;
    cout<<"Numer of players: "<<o.NoOfPlayers<<endl;
    cout<<"Average age: "<<o.Average_age<<endl;
    cout<<"---------------------------"<<endl;

}
int main()
{
    SportsTeam obj1("Barcelona",10,25), obj2("India",11,22),obj3("Argentina",10,28);
    cout<<"---------------------------"<<endl;
    display(obj1);
    display(obj2);
    display(obj3);
    return 0;
}