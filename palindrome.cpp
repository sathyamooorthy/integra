// Plaindrome using function on 4 different logics


#include<iostream>
#include <bits/stdc++.h> 
#include<cstring>
using namespace std;
string reverse(string);
int main()
{
    string rev;
    string data1 = "123454321";
    rev = reverse(data1);
    cout << rev << endl;
    
    if(data1 == rev)
    {
        cout << "palindrome";
    }
    else
    {
        cout<< "Not a palindrome"    ;
    }
}

string reverse (string check)
{
    int len = check.length();
    int j = len-1;
    
    for(int i=0;i<(len/2);i++)
    {
        swap(check[i],check[j]);
        j = j-1;
    }
    
    // char temp;
    // for(int i = 0; i < j; i++,j--)
    // {
    //     temp = check[i];
    //     check[i] = check[j];
    //     check[j] = temp;
    // }
    
    // int i=0;
    // while(i<len)
    // {
    //   check[j];
    //     j=j-1;
    //     i=i+1;
    // }
    
    // reverse(check.begin(),check.end());
    

      return check;
}
   
