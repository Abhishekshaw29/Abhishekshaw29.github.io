/*Problem Name: Next Permutation
Problem Difficulty: 2
Problem Constraints: 1 <= T <= 100 <br>
1 <= N <= 1000 <br>
0 <= A<sub>i</sub> <= 9
Problem Description:
Given an array Arr[], Treat each element of the array as the digit and whole array as the number. Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

__Note:__ The replacement must be in-place, do not allocate extra memory.
Input Format: The First Line contains the Number of test cases T. <br>
Next Line contains an Integer N,  number of digits of the number. <br>
Next Line contains N-space separated integers which are elements of the array 'Arr'.
Sample Input: 2
3
1 2 3 
3
3 2 1


Output Format: Print the Next Permutation for each number separated by a new Line.
Sample Output: 1 3 2
1 2 3
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ar[1000];
    int n,i;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
 
next_permutation(ar,ar+n);
for (i = 0; i < n; i++)
{
        cout<<ar[i]<<" ";
    }
}