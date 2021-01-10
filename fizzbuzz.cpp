Given a positive integer A, return an array of strings with all the integers from 1 to N. But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5, the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, the array should have "FizzBuzz" instead of the number.

Look at the example for more details.



Problem Constraints
1 <= A <= 500000



Input Format
The first argument has the integer A.



Output Format
Return an array of string.



Example Input
Input 1:

 A = 5


Example Output
Output 1:

 [1 2 Fizz 4 Buzz]
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
vector<string> Solution::fizzBuzz(int A) {
    vector<string> v;
    for(int i=1;i<=A;i++){
         if(i%3==0&&i%5==0)
        cout<<"FizzBuzz ";
        else if(i%5==0)
        cout<<"Buzz ";
        else if(i%3==0)
        cout<<"Fizz ";
        else
        cout<<i<<" ";
    }
    
    return v;
}
