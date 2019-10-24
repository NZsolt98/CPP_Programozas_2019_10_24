#include <iostream>

using namespace std;

int t[]={2,3,4,5,6};
void print1(int a[], int s)
{
    for(int i=0;i<s;++i){
        cout << a[i] << " " <<endl;
    }
}

void print2(int a[5], int s)
{
    for(int i=0;i<s;++i){
        cout << a[i] << " " <<endl;
    }
}

void print3(int* a, int s)
{
    for(int i=0;i<s;++i){
        cout << a[i] << " " <<endl;
    }
}
int main()
{
    print1(t,5);
    print2(t,5);
    print3(t,5);
    return 0;
}
