#include<iostream>
#include<vector>
using namespace std;

// part A
void scale(vector<double>&data,double size){
    for(int i = 0; i<3; i++){
        data[i]=data[i]*size;
    }

}


// Part B
vector<double> scale_copy(const vector<double>&data,double size){
    vector<double>result;
    for(int i = 0; i<3; i++){
        result.push_back(data[i]*size);
    }
return result;
}



int main(){
    vector<double>v1 = {1.0,2.0,3.0};
vector<double>v2 = v1;

    double factor;
    cout<<"Enter a factor: ";
    cin>>factor;

    cout<<"Original V1: ";
for(int i = 0; i<3; i++){
    cout<<v1[i]<<" ";
}
cout<<endl;

//  Part A test
scale(v1,factor);
cout<<"After scaling: ";
for(int i = 0; i<3; i++){
    cout<<v1[i]<<" ";
}
cout<<endl;

// Part B test
cout<<"Original data V2 (Unchanged): ";
for(int i = 0; i<3; i++){
    cout<<v2[i]<<" ";
}
cout<<endl;
cout<<"Copy of vector(v2): ";
vector<double>v3 = scale_copy(v2,factor);
for(int i =0; i<3; i++){
    cout<<v3[i]<<" ";
}


}