#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int x=0;
int main()
{ int x=1;
// by using scope resolution operator we can access global variables 
cout<<"local x="<<x<<"\n global x="<<::x<<endl;
   getch();
    return 0;
}
