#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    do{
         m=n%10;
         cout << m;
         n=n/10;
    }
    while(n/10!=0 || n%10!=0);

return 0;
}
