#include <iostream>
using namespace std;

int main()
{
    cout<<"\nFor loop prints 1 to 10 numbers below"<<endl;
    for(int i=1; i<=10; ++i)
      cout<<i<<' ';
    
    cout<<endl<<endl;
    cout<<"While loop sum all the numbers of for loop"<<endl;
    int j=1, sum=0;
    while(j<=10)
    {
        sum+=j;
        ++j;
    }
    cout<<"Sum of 10 numbers :"<<sum<<endl;
}