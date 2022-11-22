/*
#include <iostream>
#include <cmath>
//program to test if input is a perfect square
//David Schultz
using namespace std;
int main(){
    int x;
    int y;
    do{
        cout << "Enter a number to test if its a perfect square: ";
        cin >> x;
        int sq=sqrt(x);
        if(sq*sq==x){
            y=2;
            cout << "Correct" << endl;
        }
        else{
            y=1;
            cout << "Try again: " << endl;
        }
    }
    while(y!=2);
}
*/

/*
#include <iostream>
//David Schultz
//sums all positive numbers in the array
using namespace std;

void sum_positive(int a[6]) {
    int sum=0;
    for (int i=0; i<6; i++){
        if(a[i]>0){
            sum=sum+a[i];
        }
    }
    cout << sum << " is the sum of the positive values" << endl;
}
int main() {
    
    int a[6] = {3, -3, 5, 2, -1, 2};
    if(a[0]<0||a[0]>0){
        sum_positive(a);
    }
    else{
        return 0;
    }
}
*/



/*
#include <iostream>
#include <cstring>
//David Schultz
//string reversal
using namespace std;
void revString(string& s)
{
    int length = s.length();
    int n = length-1;
    int i = 0;
    while(i<=n){
        swap(s[i],s[n]);
        n--;
        i++;
    }
}
int main()
{
    string s = "abcde";
    revString(s);
    cout << "The string reversed is: "<< s << endl;
}
*/

/*
#include <iostream>
#include <cmath>
using namespace std;
//David Schultz
//Prints prime numbers < 1000
bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void isPrime(int n)
{
    for (int i = 2; i <= n; i++)
        if (checkPrime(i))
            cout << i << " ";
}
int main()
{
    int n = 1000;
    isPrime(n);
}
*/


