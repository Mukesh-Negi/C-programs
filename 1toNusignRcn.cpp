#include <iostream>
using namespace std;
// program to print from n to 1 using recursion
void print1toN(int num)
{
    if( num == 0) return;
    cout<<num<<endl;
    print1toN(num-1);
}
int main()
{
    system("cls");
    print1toN(10);
    return 0;
}