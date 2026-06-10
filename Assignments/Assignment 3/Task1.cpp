#include<iostream>
#include<string>
#include<cctype>// For Case insensitive
using namespace std;


/////// For new string Means Copy 
string sort_string(const string& str,int n = -1){
string result = str;

if(n < 0 || n > result.length()){
    n = result.length();
}


for(int i = 0; i < n; i++){
    for(int j = 0; j < n-i-1; j++){
        if(tolower(result[j]) > tolower(result[j+1])){
            char temp = result[j];
            result[j] = result[j+1];
            result[j+1] = temp;
    }
}

}

return result;
}






// FOr in place Changing actual string
void sort_string_inplace(string& str,int n = -1){


    if(n < 0 || n > str.length()){
        n = str.length();
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n-i-1; j++){
        if(tolower(str[j]) > tolower(str[j+1])){
            char temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
        }
      }
    }
   
}


int main(){
int n;
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    cout<<"Enter a number of characters to sort (negative for all): ";
    cin>>n;




cout<<"Sorted string (new): "<<sort_string(a,n)<<endl;
sort_string_inplace(a,n);
cout<<"Sorted string (in place): "<<a<<endl;



    return 0;
}
