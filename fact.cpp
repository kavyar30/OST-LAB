#include <iostream>
using namespace std;

int fact(int n) {
   if(n <= 0) {
      return 1;
   }
   return n*fact(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout<<"Factorial of "<<number<<" is "<< factorial(number)<<endl;

    return 0;
}
