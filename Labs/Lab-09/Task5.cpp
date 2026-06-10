#include<iostream>
#include<string>
using namespace std;
int palindrome(string& a,int size,int start = 0){

if(start >= size)
{
return true;
}

if(a[start] != a[size]){
return false;
}


return palindrome(a,size-1,start+1);
    

  
}

int main(){
string n;
cout<<"Enter a word: ";
cin>>n;
cout<<palindrome(n,n.length()-1,0);




}