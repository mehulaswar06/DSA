#include<iostream>

using namespace std;

int fact(int n){
   if (n==1){
    return 1;
   }
   else{
        return n*fact(n-1);
        

    }
    
}

int main()
{
    int n=3;
    int i=fact(n);
    cout<<i<<endl;

    return 0;
}