#include<iostream>
using namespace std;
bool isPowerOfFour(int n) {
    return !(n&(n-1)) && (n&0x55555555);
    //check the 1-bit location;
}
int main()
{
    int n=186;
    cout<<isPowerOfFour(16);
}