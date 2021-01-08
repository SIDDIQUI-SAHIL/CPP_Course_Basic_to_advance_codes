-------------------------------------------------------------------------------------------------
/*Problem Description

Reverse the bits of an 32 bit unsigned integer A.

Input Format
First and only argument of input contains an integer A.



Output Format
Return a single unsigned integer denoting the decimal value of reversed bits.



Example Input
Input 1:

 0
Input 2:

 3
 Example Explanation
Explanation 1:

        00000000000000000000000000000000    
=>      00000000000000000000000000000000
Explanation 2:

        00000000000000000000000000000011    
=>      11000000000000000000000000000000*/
-------------------------------------------------------------------------------------------------------------------------------
unsigned int Solution::reverse(unsigned int A) {
    unsigned int B = 0; //B will hold the reversed number
    for(int i=0;i<32;i++){  //Iterating on all bit positions
        int k = A & 1;      //Extracting the rightmost bit from A (the ith bit in original number)
        B <<= 1;            //Shifting B to left (rightmost bit becomes 0)
        B += k;             //Adding the extracted bit
        A >>= 1;            //Now the (i+1)st bit shifts to the rightmost position in A
    }
    return B;
}
