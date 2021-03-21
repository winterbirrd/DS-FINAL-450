int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<arr[i+1]){
                sum = sum + (arr[i] + arr[i+1]);
                i++;
            }
            else{
                sum = arr[i];
                i++;
            }
        }
        return sum;