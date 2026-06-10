#include<iostream>
#include<string>
using namespace std;

void reverse_string(string& str,int start = 0, int end = -1){
    if(end >= start){
       int temp = str[end];
       str[end] = str[start];
       str[start] = temp;
    
    reverse_string(str,start+1,end-1);
}
}


int main(){
string n = "Iam Kartar Singh";
cout<<"Before reverse: ";
cout<<n<<endl;


reverse_string(n,0,n.length()-1);
cout<<"Reversed string is: "<<n;





}