int mapcolor(char c)
{
    if (c == 'r')
        return 0;
    else if (c == 'g')
        return 1;
    else if (c == 'b')
        return 2;
}

int Solution::solve(vector<string> &A) {
    int n=A.size(), m=A[0].size();
    int inCol[m+1][3][2];
 
    // I take red -> 0, green-> 1 and blue -> 2. The function mapcolor do this mapping for me.
    // and start ->0 and end position -> 1.

    memset(inCol,-1,sizeof(inCol));
    for(int col=0;col<m;col++){
        for(int i=0;i<n;i++){
            int color = mapcolor(A[i][col]);
            if(inCol[col][color][0]==-1){
                inCol[col][color][0] = i;
                inCol[col][color][1] = i;
            }else{
                inCol[col][color][1] = i;
            }
        }
    }
    
    // Now the next step is how we choose the height. Since we already know which color is present in which column we will find the left most and right most column which has red and same for green and blue. This is how I did it.

    
    int lr=-1,lg=-1,lb=-1,rr=-1,rg=-1,rb=-1;
    for(int i=0;i<m;i++){
        if(inCol[i][0][0]!=-1&&lr==-1) lr = i;
        if(inCol[i][1][0]!=-1&&lg==-1) lg = i;
        if(inCol[i][2][0]!=-1&&lb==-1) lb = i;
    }
    for(int i=m-1;i>=0;i--){
        if(inCol[i][0][0]!=-1&&rr==-1) rr = i;
        if(inCol[i][1][0]!=-1&&rg==-1) rg = i;
        if(inCol[i][2][0]!=-1&&rb==-1) rb = i;
    }
    
    // Now all it’s left is to find the maximum area. Take a good look and you will understand yourself :wink:

    
    if(lr==-1||lg==-1||lb==-1)return 0;
    int maxarea = 0;
    for(int col=0;col<m;col++){
        if(inCol[col][0][0]!=-1&&inCol[col][1][1]!=-1){
            maxarea = max(maxarea, (max(abs(inCol[col][0][0]-inCol[col][1][1])+1,
                                    abs(inCol[col][1][0]-inCol[col][0][1])+1)*max(abs(col-lb)+1,abs(rb-col)+1)+1)/2);
        }
        if(inCol[col][0][0]!=-1&&inCol[col][2][1]!=-1){
            maxarea = max(maxarea, (max(abs(inCol[col][0][0]-inCol[col][2][1])+1,
                                    abs(inCol[col][2][0]-inCol[col][0][1])+1)*max(abs(col-lg)+1,abs(rg-col)+1)+1)/2);
        }
        if(inCol[col][1][0]!=-1&&inCol[col][2][1]!=-1){
            maxarea = max(maxarea, (max(abs(inCol[col][1][0]-inCol[col][2][1])+1,
                                    abs(inCol[col][2][0]-inCol[col][1][1])+1)*max(abs(col-lr)+1,abs(rr-col)+1)+1)/2);
        }
    }
    return maxarea;
}
