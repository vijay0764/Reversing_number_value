#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;                   //Taking input 
    int m;
    do{                                     //modulus to print last digit -- eg.5864 gives 4
        
         m=n%10;
         cout << m;
         n=n/10;                                   // division delete the last digit-- eg. 5864 becomes 586
    }
    while(n/10!=0 || n%10!=0);                  // it repeat the process this either it given no. becomes less then 0 or last digits is 0 

return 0;
}
