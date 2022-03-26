#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num;
    int previousNum=1;
    int currentNum=0;

    cout<<"num = ";
    cin>>num;

    for(int i = 0; i <num; i++) {
        cout<<currentNum<<" ";
        currentNum += previousNum;
        previousNum = currentNum - previousNum;

    }
}
