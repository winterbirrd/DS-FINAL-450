#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int b[] = {1,2,3};
    int m = sizeof(b)/sizeof(b[0]);
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]<b[j])
            cout<<a[i++]<<", ";
        else if(a[i]>b[j]){
            cout<<b[j++]<<", ";
        }
        else
            cout<<a[i++]<<", ";
            j++;
    }
    while(j<m){
        cout<<b[j++]<<", ";
    }
    while(i<n){
        cout<<a[i++]<<", ";
    }

    return 0;
}