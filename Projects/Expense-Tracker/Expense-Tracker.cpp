#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

// Add New Expense
void expense(vector<string>& title, vector<string>& category, vector<int>& amount, vector<string>& date){
string t,c,d;
int a;


cout<<"Enter expense title: ";
cin>>t;
cout<<endl;

cout<<"Enter category (Food/Travel/Shopping/Other): ";
cin>>c;
cout<<endl;

cout<<"Enter amount: ";
cin>>a;
cout<<endl;

cout<<"Enter date (DD-MM-YYYY): ";
cin>>d;

title.push_back(t);
category.push_back(c);
amount.push_back(a);
date.push_back(d);

cout<<endl;

cout<<"Expense added successfully!";
cout<<endl<<endl;



}


/// 2. View Expense
void viewexpense(vector<string>& title, vector<string>& category, vector<int>& amount, vector<string>& date){

if(title.empty()){
    cout<<"No expenses found!\n\n";
    return;
}



    cout<<"----------------------------------------------------------------------"<<endl;
   cout<<left<<setw(15)<<"Title"<<setw(15)<<"Category"<<setw(10)<<"Amount"<<setw(15)<<"Date"<<endl;
cout<<"----------------------------------------------------------------------"<<endl;

int i;
 for( i = 0; i<title.size(); i++){
 cout<<left<<setw(15)<<title[i]<<setw(15)<<category[i]<<setw(10)<<amount[i]<<setw(15)<<date[i]<<endl;

}
cout<<"----------------------------------------------------------------------"<<endl<<endl;

cout<<"Total "<<title.size()<<" expenses recorded"<<endl;
cout<<"----------------------------------------------------------------------"<<endl;
}



// View Total Spending
void totalspending(vector<int>& amount){
    if(amount.empty()){
        cout<<" No expenses to calculate!\n\n";
        return;
    }
int sum = 0;
for(int i = 0; i<amount.size(); i++){
sum = sum + amount[i];

}


cout<<"Total spending: Rs. "<<sum<<endl<<endl;
}



///  category spending
void categoryspending(vector<string>& category, vector<int>& amount){
if(category.empty()){
        cout<<" No expenses found!\n\n";
        return;
    }
    string cat;
    cout<<"Enter category to view(Food/Travel/Shopping/Other): ";
    cin>>cat;
int sum = 0;
    for(int i = 0; i<category.size(); i++){
        if(cat == category[i]){
            sum = sum + amount[i];
        }
    }

    if(sum == 0){
        cout<<"No spending found in category: "<<cat<<"\n\n";
    }
    else{
        cout<<"Total spent on "<<cat<<": Rs. "<<sum;
    }
    cout<<endl;


}




// Highest Expense
void highest(vector<string>& title, vector<string>& category, vector<int>& amount, vector<string>& date){
if(amount.empty()){
    cout<<"No expenses found!\n\n";
    return;
}
cout<<endl;


cout<<"Highest expense:"<<endl;

int max =0;
for( int i = 1; i<amount.size(); i++){
    if( amount[max] < amount[i]){
        max = i;
       
    }
}
cout<<title[max]<<" ("<<category[max]<<") - Rs. "<<amount[max]<<" on "<<date[max]<<endl;
}


void quit(){
    cout<<"Thank you for using Personal Expense Tracker!"<<endl;
}




int main(){
vector<string>title;
vector<string>category;
vector<int>amount;
vector<string>date;



cout<<"======================================="<<endl;
cout<<"         PERSONAL EXPENSE TRACKER      "<<endl;
cout<<"======================================="<<endl;

    int choice;

while(true){

cout<<"\n1. Add New Expense"<<endl;
cout<<"2. View All Expense"<<endl;
cout<<"3. View Total Spending"<<endl;
cout<<"4. View Spending by Category"<<endl;
cout<<"5. Find Highest Expense"<<endl;
cout<<"6. Exit"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice == 6){ quit(); return 0; }




  switch (choice){
 case 1:
    expense(title, category, amount, date);
    break;

    case 2:
      viewexpense(title, category, amount, date);
break;

case 3:
totalspending(amount);
break;



case 4:
categoryspending(category,amount);
break;

case 5:
highest(title, category, amount, date);
break;

case 6:
quit();
return 0;
break;

default:
cout<<"Invalid choice! Please try again. \n\n";
break;




  }


}

return 0;
}