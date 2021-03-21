/*int minJumps(int arr[], int n){
    int jmp=0;
    int index=0;
    int count=0;
    for(int i=0;i<n;i++){
        index = i+(arr[i]);
        jmp=arr[index];
        i=index-1;
        count++;
    }
    return count;
}
---------------------------> ERROR: Time Limit Exceeded*/
int minJumps(int arr[], int n){
    int jumps = 0, farthest = 0, currEnd = 0;
    for(int i=0;i<n-1;i++)
    {
        farthest = max(farthest, i + arr[i]);
        if(farthest >= n-1)
            return 1 + jumps;
        
        if(i == farthest)
            return -1;
        
        if(i == currEnd)
        {
            jumps++;
            currEnd = farthest;
        }
    }
    return jumps;
}