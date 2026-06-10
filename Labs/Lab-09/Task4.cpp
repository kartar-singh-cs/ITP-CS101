#include<iostream>
#include<vector>
using namespace std;

// Helper function
int findmax(const vector<int>& a,int size){
    if(size == 1){
        return a[0];
    }

    int m = findmax(a,size-1);

    if(a[size - 1] > m)
    return a[size-1];

    else
    return m;

}

int l(const vector<int>& a){
    return findmax(a,a.size());
}


int main(){
vector<int>m = {3,2,5,8,7};

cout<<"Maximum element in array is: "<<l(m);


}
