int Solution::findMinXor(vector<int> &A) {
    
    sort(A.begin(),A.end());
    
    //long long int out = 10000000000;
    //long long int m = 10000000000;
    //int mi,mj;
    long long int ans = 10000000000;

    
    for(int i=1;i<A.size();i++)
    {
       long long int out = (A[i]^A[i-1]);
        ans = min(ans,out);
    }
    
    //long long int ans = A[mi]^A[mj];
    //cout << A[mi] << " " << A[mj]; 
    
    return ans;
    
}
