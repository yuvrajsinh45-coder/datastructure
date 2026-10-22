#include <iostream>
using namespace std;

void bubble(int a[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

void selection(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int m=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[m]) m=j;
        swap(a[i],a[m]);
    }
}

int main() {
    int a[20], n, ch;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) cin>>a[i];

    cout<<"1. Bubble\n2. Selection\nChoice: ";
    cin>>ch;

    if(ch==1) bubble(a,n);
    else selection(a,n);

    cout<<"Sorted: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}