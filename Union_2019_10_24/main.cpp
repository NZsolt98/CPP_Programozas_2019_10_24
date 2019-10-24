#include <iostream>

using namespace std;
union U
{
    unsigned char c[4];
    unsigned int i;
};
int main()
{
    U uni;
    uni.i=0x01020304;
    cout << (int)uni.c[0] << "," << (int)uni.c[1] << "," << (int)uni.c[2] << "," << (int)uni.c[3] << endl;
    return 0;
}
