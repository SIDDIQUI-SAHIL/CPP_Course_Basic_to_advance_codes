Anti Diagonals
Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

---------------------------------------------------------------------------------------------
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
     vector <vector<int> >v;
    
    for(int i=0;i<2*A[0].size()-1;i++){
        vector<int> temp;
        
        for(int k=0,j=i;k<2*A[0].size() && j>=0;k++,j--){
            if(k<A[0].size() && j>=0 && j<A[0].size())
                temp.push_back(A[k][j]);
        }
        
        v.push_back(temp);
    }
    
    return v;
}
