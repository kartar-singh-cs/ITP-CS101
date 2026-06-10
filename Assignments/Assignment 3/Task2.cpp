#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool valid_submission(int labNumber,int erp,const vector<string>& test, bool v = false){

    if(test.empty()){
        return false;
    }

    if(v) cout<<"Validating submission: "<<test[0]<<endl;


string expect = "lab" +  to_string(labNumber) + '_' + to_string(erp) + ".zip"; 
int passed = 0;
int total = 0;

    
total++;
     if(test[0] == expect)  {passed++;}

        if(v) cout<<"- "<<test[0]<<"               "<<(test[0] == expect ? "Pass" : "Fail")<<endl;
     
   

for(int i = 1; i<test.size(); i++){
bool y = true;
int start = 4;
int end = test[i].length() - 4;


    if(test[i].substr(0,4) != "task"){
        y =  false;
    }
   

    if(test[i].substr(end,4) != ".cpp"){
        y = false;
}

string npart = test[i].substr(4,test[i].length() - 8);

if(npart.empty()){
    y =  false;
}
if(npart[0] == '0'){
    y = false;
}

for(int j = 0; j < test[i].length(); j++ ){
char c = test[i][j];
if(!((c >= '0' && c <= '9') || 
    (c >= 'A' && c <= 'Z') ||
    (c >= 'a' && c <= 'z') ||
    c == '.' || c == '_')){
        y = false;
        break;
    }

}

total++;
if(y) passed++;
if(v) cout<<"- "<<test[i]<<":                   "<<(y ? "Pass" : "Fail")<<endl;




}

if(v) cout<<"Summary for "<<test[0]<<": "<<passed<<"/"<<total<<endl<<endl;
return passed == total;
}



int main(){

vector<vector<string>>test = {{"lab8_12345.zip","task1.cpp","task2.cpp","task3.cpp"},
                              {"lab08_12345.zip","task1.cpp","task2.cpp"},
                              {"lab8_12345.zip","task01.cpp","task2.cpp"},
                              {"lab8_12345.zip","task1!.cpp","task2.cpp"}};

int labnumber = 8;
int Erp = 12345;

cout<<"---------------------Verbose Mode------------------------"<<endl<<endl;

for(int i = 0; i<test.size();i++){

valid_submission(labnumber,Erp,test[i],true);}


    return 0;
}