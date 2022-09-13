/* Create a class Film (Name, Language, Type and Duration). Create a default
constructor to initialize Language and Duration as ‘Hindi’ and 3 (hrs.). Insert
rest of the details through function. Display all the details. (Use destructor as
well)
 */
#include <iostream>

using namespace std;

class Film
{
    string Name;
    string Language;
    string Type;
    int Duration;

public:
    Film()
    {
        Language = "Hindi";
        Duration = 3;
    }
    void setName(string n)
    {
        Name = n;
    }
    void setType(string n)
    {
        Type = n;
    }
    string getName()
    {
        return Name;
    }
    string getLanguage()
    {
        return Language;
    }
    string getType()
    {
        return Type;
    }
    int getDuration()
    {
        return Duration;
    }

    ~Film()
    {
        cout << "\n---Object Destroyed---" << endl;
    }
};
int main()
{
    Film f1;
    f1.setName("Rocketry");
    f1.setType("Documentary");
    cout << "Film Name: " << f1.getName() << "." << endl;
    cout << "Film Language: " << f1.getLanguage() << "." << endl;
    cout << "Film Type: " << f1.getType() << "." << endl;
    cout << "Film Duration: " << f1.getDuration() << " hrs." << endl;
    return 0;
}