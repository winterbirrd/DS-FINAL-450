#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(a)/sizeof(a[0]);
    int l=0;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            if(i!=l)
                swap(a[l],a[i]);
            l++;
        }
    }

    for(int i=0; i<n;i++){
        cout<<a[i]<<", ";
    }

    return 0;
}