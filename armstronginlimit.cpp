#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,digit,a,b;    
    cout<<"Enter the Number=  ";    
    cin>>a;
    cin>>b;
    for(int i =a; i <=b; i++)
    {
        sum = 0;
        n = i;
        for(; n > 0; n /= 10)
        {
            digit = n % 10;
            sum = sum + digit * digit * digit;
        }
        if(sum == i)
        {
            cout << i << endl;
        }
  }
return 0;  
}
