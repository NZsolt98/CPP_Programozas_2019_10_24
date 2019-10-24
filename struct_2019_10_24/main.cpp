#include <iostream>

using namespace std;

struct Person
{
    char firstName [20];
    char lastName [20];
    int yearOfBirth;
};
//void print (Person person);
void print (Person* person);
int main()
{
    Person p1= { "Joe","Black", 1970};

    //print(p1);
    print(&p1);
    print(&p1);
    return 0;
}

/*
void print(Person p)
{
    cout << p.firstName << " " << p.lastName << " " << p.yearOfBirth << endl;
    p.firstName[0]='\0';
}
*/
void print(Person* p)
{
    //cout << (*p).firstName << " " << (*p).lastName << " " << (*p).yearOfBirth << endl;
    //(*p).firstName[0]='\0';
    cout << p->firstName << " " << p->lastName << " " << p->yearOfBirth << endl;
    p->firstName[0]='\0';
}
