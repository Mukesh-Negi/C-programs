#include <iostream>
using namespace std;
// recursive program to check if  given array is sorted or not
bool check(int arr[], int size, int i = 0)
{
    if( i == size )return true;
    if( arr[i] > arr[i+1]) return false;
    else return check(arr,size,++i);
}
int main()
{
    system("cls");
    int arr[]={1,2,30,4,5,6,7,8,9,10};
    int size = 10;
    cout<<check(arr,size)<<endl;
    return 0;
}