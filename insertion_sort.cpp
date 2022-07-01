#include <iostream>
using namespace std;

void is(int a[],int n){
    int key;

    for (int i=1;i<n;i++){
        key=a[i];
        int j=i-1;

        while(a[j]>key && j>=0){
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

int main(){
    int a[]={8,2,4,1,6,15,3};
    int n=sizeof(a)/sizeof(int);

    is(a,n);
    return 0;
}