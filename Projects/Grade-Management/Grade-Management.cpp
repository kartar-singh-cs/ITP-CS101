/*
-------------------------------------------------
Project: Student Grade Management System
Description:
  A simple console-based system to manage student
  records — add students, view grades, search by name,
  and calculate class average.

Concepts Used:
  - Arrays
  - Loops
  - Switch-case
  - Conditional logic

Written By: *Kartar Singh*
-------------------------------------------------
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){


float classavg = 0.0;
int choice = 0;
int n = 0;;
string m;
string name[50];
int m1[50],m2[50],m3[50];
int total[50]={0};
float avg[50]={0};
char grade[50];



cout<<"================================================="<<endl;
cout<<"     STUDENT GRADE SYSTEM MANAGEMENT SYSTEM      "<<endl;
cout<<"================================================="<<endl;




while(choice!=5){
cout<<"1. "<<"Add Student Records"<<endl;
cout<<"2. "<<"View All Records"<<endl;
cout<<"3. "<<"Search Student"<<endl;
cout<<"4. "<<"Class Average"<<endl;
cout<<"5. "<<"Exit"<<endl;
cout<<endl;
cout<<"Enter your choice: ";
cin>>choice;




switch (choice){
  case 1:
      cout<<"Enter number of students: ";
      cin>>n;
      cout<<endl<<endl;
      for(int i = 0; i<n; i++){
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>name[i];
        cout<<"Enter marks of 3 subjects: "<<endl;
        cout<<endl;
        cout<<"Subject 1: ";
        cin>>m1[i];
        
        cout<<"Subject 2: ";
        cin>>m2[i];
        
        cout<<"Subject 3: ";
        cin>>m3[i];
        cout<<endl;

        total[i]=(m1[i]+m2[i]+m3[i]);

        avg[i]=total[i]/3.0;

        if(avg[i] >= 90  && avg[i] <= 100){
        grade[i]='A';
        cout<<endl;}

        else if(avg[i] >= 80 && avg[i] < 90){
        grade[i] = 'B';
        cout<<endl;}

        else if(avg[i] >= 65 && avg[i] < 80){
        grade[i] = 'C';
        cout<<endl;}

        else{
            grade[i] = 'F';
            cout<<endl;
        }
      }
      
      cout<<"Student records added successfully!"<<endl;
      cout<<endl;
break;


case 2:
if (n <= 0) {
      cout << "No records found! Please add students first.\n\n";
      break;
  }
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Name"<<setw(15)<<"Total Marks"<<setw(10)<<"Average"<<setw(10)<<"Grade"<<endl;
  cout<<"-----------------------------------------------"<<endl;
  for(int i = 0; i<n; i++){
    cout<< left <<setw(10)<<name[i]<<setw(15)<<total[i]<<setw(10)<<avg[i]<<setw(5)<<grade[i]<<endl;
  }
  cout<<"------------------------------------------------"<<endl;

break;

case 3:{
if (n <= 0) {
      cout << "No records found! Please add students first.\n\n";
      break;
  }
cout<<"Enter name to search: ";
cin>>m;
cout<<endl;
bool found = false;

for(int i =0; i<n; i++){
    if(name[i] == m){
        found = true;
        cout<<"Found: "<<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Total: "<<total[i]<<endl;
        cout<<"Average: "<<avg[i]<<endl;
        cout<<"Grade: "<<grade[i]<<endl;
    }
    cout<<endl;
}
if(!found)
cout<<"Student Not Found!"<<endl;

break;}

case 4:{
if (n <= 0) {
      cout << "No records found! Please add students first.\n\n";
      break;
  }
float sum = 0.0;
for(int i = 0; i<n; i++){
    sum = sum + avg[i];
}
classavg = sum/n;
   cout<<"Class average marks: "<<classavg<<endl;
   if(classavg > 90)
   cout<<"Overall Grade: A"<<endl;

   else if(classavg >= 80 && classavg < 90)
   cout<<"Overall Grade: B"<<endl;

   else{
    cout<<"Overall Grade: C"<<endl;
   }
   cout<<endl;
   break;}


case 5:
cout<<"Thank you for using Student Grade Management System!"<<endl;
break;



}






}













return 0;
}