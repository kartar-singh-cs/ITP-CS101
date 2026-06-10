#include<iostream>
#include<cmath>
using namespace std; 
struct circle{
    double radius;
};
double calculatearea(circle c){
    return 3.14 * c.radius * c.radius;

}
int main(){
    circle mycircle;
    mycircle.radius= 5.0;
    double area = calculatearea(mycircle);
 cout<<"radius of circle is: "<<mycircle.radius<<"and area of circle is: "<<area;
}