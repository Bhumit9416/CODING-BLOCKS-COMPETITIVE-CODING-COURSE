/*Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings,
and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically )
but if a string is present completely as a prefix in another string, then string with longer length should come first.
Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

Input Format
N(integer) followed by N strings.

Constraints
N<=1000

Output Format
N lines each containing one string.

Sample Input
3
bat
apple
batman
Sample Output
apple
batman
bat
Explanation
In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product)
is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.
*/
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/*
let say we have given 2 strings a,b;
we have to sheck for 3 conditions 
 1.if a is prefix string of b then b becomes first.
 2.if b is prefix string of a then a becomes first.
 3.if above 2 conditions dont satisfy then sort them in lexographical order.
*/

//comperator function for sorting
bool comp(string a, string b)
{
               //a will only be the substring of b when a is smaller or equal to b and a is the prefix substring of b .
	if(a.size()<=b.size()&&b.substr(0,a.size())==a)return false;
	else if(b.size()<=a.size()&&a.substr(0,b.size())==b)return true;
	else return a<b;
}
int main()
{
               //vector of string
	vector<string>v;
	string s;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	
	//sorting using comparator function.
	sort(v.begin(),v.end(),comp);
	
	//printing the output
	for(auto x:v)
	cout<<x<<endl;
	return 0;
}
