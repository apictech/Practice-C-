vector<int> Solution::findPerm(const string A, int B) {
    vector<int> a(A.size()+1);
    int b=1,c=A.size()+1;
    for(int i=0;i<A.size();i++){
        if(A[i]=='I')
            a[i]=b++;
        else
            a[i]=c--;
    }
    a[A.size()]=(b+c)/2;
    return a;
}
