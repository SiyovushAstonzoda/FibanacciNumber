#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num;
    int previousnum=1;
    int currentnum=0;

    cout<<"num = ";
    cin>>num;

    for(int i = 0; i <num; i++) {
        cout<<currentnum<<" ";
        currentnum += previousnum
        previousnum = currentnum - previousNum;

    }
}
