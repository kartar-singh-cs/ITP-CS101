#include<iostream>
using namespace std;
struct product{
    string name;
    double price;
};
ostream& operator<<(ostream& print, product& p){
    print<<p.name<<"(&"<<p.price<<")";
    return print;
}
bool ischeaper(product product1, product product2){
    if(product1.price < product2.price){
        return true;
    }else return false;

}
int main(){
    product product1{"laptop", 800};
    product product2{"phone", 1000};
    int y = ischeaper(product1, product2);
    if(y){
        cout<<product1<<" is cheaper than "<< product2;
    }
}