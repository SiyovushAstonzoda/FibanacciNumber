#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    int previousNum=1;
    int currentNum=0;

    cout<<"n = ";
    cin>>n;

    for(int i = 0; i <n; i++) {
        cout<<currentNum<<" ";
        currentNum += previousNum;
        previousNum = currentNum - previousNum;

    }
}
