// CPP program to find Union of two unsorted arrays

/* Procedure :
First of all here we'll initialize an empty hash set 's' then we'll iterate through the first array and put every element of the first array in the set s.
Repeat the process for the second array.
Finally we'll print the set s.

Time Complexity: O(m+n)
where m,n : sizes of both arrays.
*/

#include <bits/stdc++.h>
using namespace std;
void Union(int a1[], int a2[], int n1, int n2)
{ set<int>s;
  for (int i = 0; i < n1; i++)
		s.insert(a1[i]);
	for (int i = 0; i < n2; i++)
		s.insert(a2[i]);
	for (auto it =s.begin(); it !=s.end(); it++)
		cout <<*it << " ";
	cout << endl;
}
int main()
{
	int a1[100005],a2[1000005],n1,n2,i;
	cout<<"Enter the size of both the arrays: ";
	cin>>n1>>n2;
  cout<<"\nEnter the elements of 1st array:";
  for(i=0;i<n1;i++)
  {cin>>a1[i];}
  cout<<"\nEnter the elements of 2nd array:";
  for(i=0;i<n2;i++)
  {cin>>a2[i];}
  cout<<"\nUnion of both the arrays:\n";
  Union(a1, a2, n1, n2);
	return 0;
}

/*
Sample Input
5
6
2 6 9 7 1
1 2 3 4 5 6
Sample Output
Enter the size of both the arrays: 
Enter the elements of 1st array:
Enter the elements of 2nd array:
Union of both the arrays:
1 2 3 4 5 6 7 9 

*/
