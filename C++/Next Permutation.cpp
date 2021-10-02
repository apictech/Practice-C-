vector<int> Solution::nextPermutation(vector<int> &A) {
    for(int i=A.size()-2;i>=0;i--){
        for(int j=A.size()-1;j>i;j--){
            if(A[j]>A[i])
                {
                swap(A[j],A[i]);
                sort(A.begin()+i+1,A.end());
                return A;}
        }
    }
    sort(A.begin(),A.end());
    return A;
}
