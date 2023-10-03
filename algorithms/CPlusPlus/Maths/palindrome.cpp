// Program to find whether a number and word is palindrome or not.

#include<iostream>				//header file
using namespace std;
int main()						//Main function
{
	string num_str = "";		//define variable
	cin >> num_str;				//taking input from user
	int i=0,j=num_str.length()-1;               //two pointer approach
	while(i<j){				
		if(num_str[i++]!=num_str[j--]){                
			cout<<"Not a Palindrome"<<endl;
			return 0;
		}
	}	
	cout<<"Palindrome"<<endl;
	return 0;					//returning the main function
}

//complexity of the program is O(n)
//space complexity is  O(1)
//test cases:- 101,pop,asdfgfdsa,123454321,obobo,nancyiycnan etc.
