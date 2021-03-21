class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int i=n-1, j=0;
	    while(i>=0 && j<m && arr2[j]<arr1[i]){
	        swap(arr2[j++],arr1[i--]);
	    }
	    
	    std::sort(arr1,arr1+n);
	    std::sort(arr2,arr2+m);
	    int k=0;
	    k=n+m;
	    int arr[k];
	    for(int i=0;i<n;i++){
	        arr[i]=arr1[i];
	    }
	    for(int i=0;i<m;i++){
	        arr[i+n]=arr2[i];
	    }
	    
        
        
	}
};