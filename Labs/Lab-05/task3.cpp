#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int n=0,guess;
    n=rand()%101;
cout<<n<<endl;
    while(guess!=n)
    {cout<<"Enter your guess: ";
        cin>>guess;
    if(guess>n)
        cout<<"Too High!"<<endl;
        else if(guess<n)
        cout<<"Too Low!"<<endl;
        else if(guess==n)
        cout<<"Congratulations! You guessed it.";

    }

    }
