//WAP in C++ to calculate simple interest from given principle, time and rate.
// Set the rate to 15% as default argument when rate is not provided

#include<iostream>
using namespace std;

class simple_interest{
public:
    double Principle;
    double time ;
    double rate;
void input(){
    cout<<"Enter Principle : "<<endl;
    cin>>Principle;
    cout<<"Enter time: "<<endl;
    cin>>time;
}
void display(double rate=0.15){
   
    cout<<" Simple interest "<<(Principle*rate*time)*0.01<<endl;
}

};
int main()
{
 simple_interest s1;  
 s1.input();
 s1.display();
return 0;
}