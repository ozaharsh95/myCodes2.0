#include <bits/stdc++.h>
using namespace std;
/*
        1 ->  1
        2 ->  1  1 
        3 ->  1  2  1 
        4 ->  1  3  3  1 
        5 ->  1  4  6  4  1 
        
              
*/

// O(col)
// max value of col is row number

int findNcr(int row,int col){
    // 5c0 = 1 
    // 5c1 = 5/1 
    // 5c2 = 5*4/2*1
    
    int res = 1;
    
    for(int i=0;i<col;i++){
        res = res * (row-i);
        res = res / (i+1);
    }
    
    return res;
}

int main()
{   
    
    // type-1  
    // return specific element at row and col
    
    /*
    cout<<findNcr(3,0)<<endl;
    cout<<findNcr(3,1)<<endl;
    cout<<findNcr(3,2)<<endl;
    cout<<findNcr(3,3)<<endl;
    */
    
    // type-2
    // print Nth row of pascal triangle
    
    // way-1
    int N = 4;
    // O(N*N)
    for(int i=0;i<N;i++){
        cout<<findNcr(N-1,i)<<" ";
    }
    cout<<endl;
    
    
    //way-2
    int ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<N;i++){
        ans = ans * (N - i);
        ans = ans / i;
        cout<<ans<<" ";
    }
    

    return 0;
}