/*This is a comment*/
//This is also a comment

Example:

Input:
a = 5
b = 6
c = 15
Output:
5
15
Explanation:
Value of b is not printed.
 

Your Task:
Your task is to complete a function that print a, b and c. Comment the code that outputs b, so only a and c gets printed.
-------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
-------------------------------------------------------------------------------------------------------------------------
// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;
 
void comment(int,int,int);


 // } Driver Code Ends


//User function Template for C++

//Comment the part that outputs b
void comment(int a,int b,int c)
{
    cout<<a<<endl;
    //cout<<b<<endl;
    cout<<c<<endl;
}

// { Driver Code Starts.
 
int main()
{
   
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        comment(a, b, c);
    }
    
    return 0;
}   // } Driver Code Ends
