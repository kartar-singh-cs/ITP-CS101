#include<iostream>
#include<vector>
#include<string>
using namespace std;

void help(){

  cout << "Usage:\n  <operator> <num1> <num2>\n\n";
    cout << "Description:\n  Perform basic arithmetic operations or run utility commands.\n\n";
    cout << "Operators:\n  +, -, *, /\n";
    cout << "  Example: + 5 3 -> 8\n\n";
    cout << "Commands:\n  history  show history of all previous operations\n";
    cout << "  help     display this help message\n";
    cout << "  quit     exit the program\n\n";


}



void hist(vector<vector<int>>& history){

    if(history.empty()){
cout<<"No! data"<<endl;
cout<<"Please enter some data"<<endl<<endl;
return;
    }

    for(int i = 0; i<history.size(); i++){
        for(int j = 0; j<4; j++){
        if(j == 3){
cout<<"= "<<history[i][j]<<endl;
        }
        else if(j == 1){
            cout<<static_cast<char>(history[i][j])<<" ";
            
        }
        else{
            cout<<history[i][j]<<" ";
        }

        }
    }







}




int main(){

    vector<vector<int>> history;
     string choice;
     cout << "Simple Command-Line Calculator"<<endl;
    cout << "Type 'help' for a list of commands."<<endl<<endl;


while(true){
    cout<<"> ";
    cin>>choice;

if(choice == "help"){
    help();
}

else if(choice == "history"){
  hist(history);

}

else if(choice == "quit"){
cout<<"Good bye!"<<endl;
break;
}


else if(choice.length() == 1){
    int a,b;
    char op = char(choice[0]);
    cin>>a>>b;

    switch(op){
case '+': cout<<a+b<<endl<<endl;
history.push_back({a,int(op),b,a+b});
break;


case '-': cout<<a-b<<endl<<endl;
history.push_back({a,int(op),b,a-b});
break;


case '*': cout<<a*b<<endl<<endl; 
history.push_back({a,int(op),b,a*b});
break;

case '/':
if(b == 0){
    cout<<"Error: Division by zero."<<endl<<endl;
break;
}
else {
    cout<<a/b<<endl<<endl; 
    history.push_back({a,int(op),b,a/b});
    break;
}


default:
    cout<<"Please enter valid operator!"<<endl;




    }




}


}


    return 0;
}