#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {0,2,1,0,2,1};
    int n = sizeof(a)/sizeof(a[0]);

    int l, m, h;
    l=0;
    m=0;
    h=n-1;
    while(m<=h){
        switch(a[m]){
            case 0:
                swap(a[l], a[m]);
                l++;
                m++;
                break;
            case 1:
                m++;
                break;

            case 2:
                swap(a[h],a[m]);
                h--;
                break;
        }
    }
    for(int i=0; i<n;i++){
        cout<<a[i]<<", ";
    }

    return 0;
}