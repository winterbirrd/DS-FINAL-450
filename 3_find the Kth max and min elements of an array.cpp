#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    int k;
    cin>>k;
    cout<<arr[k-1];
    return 0;
}*/
int kthSmallest(int arr[], int l, int r, int k) {
    int n = r+1;
    sort(arr, arr+n);

    return arr[k-1];

}
int main()
{
    int s[] = {7,10,4,3,20,15};
    cout<<kthSmallest(s,0,5,3);

    return 0;
}