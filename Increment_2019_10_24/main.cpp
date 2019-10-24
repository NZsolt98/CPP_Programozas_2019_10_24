#include <iostream>

using namespace std;
void inc1(int num);
void inc2(int* n);
void inc3(int& n);
int main()
{
    int num =0;
    inc1(num);

    cout << num << endl;

    inc2(&num);
    cout << num << endl;

    inc3(num);
    cout << num << endl;
    return 0;
}

void inc1(int a)
{
    ++a;
}

void inc2(int* aPtr)
{
    ++(*aPtr);
}

//csak c++
void inc3(int& a)
{
    ++a;
}
