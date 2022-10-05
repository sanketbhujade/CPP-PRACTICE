#include <iostream>
using namespace std;
int arsort(int a[])
{  int flag=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]<a[i-1])
        {flag=1;break;}
    }
    if(flag==0){return 0;}else{return 1;}
}
int main() {
    // Write C++ code here
    cout << "Hello world!";
    int arr[3]={8,2,3};
    cout<<arsort(arr);

    return 0;
}
