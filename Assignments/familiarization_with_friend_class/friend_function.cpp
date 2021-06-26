/*Wap to create class Sample with 2 float data members and 
member functions void getdata()to input the values and one 
friend function float mean(Sample)to calculate and return mean value*/
//WAP to add private data of two different classes.

#include<iostream>
using namespace std;
class Sample
{
  private :
  double num1,num2;

  public :
  // Declaring the friend function so it can access the private data of class  
  friend double setmean(Sample S);  
  void getdata(double a,double b){
      num1=a;
      num2=b;
      cout<<"The data you have set is "<<a << ","<<b<<endl;
  } 
};
double setmean(Sample S){
      return((S.num1+S.num2)/2);
  } 
int main()
{
    Sample S1;
    S1.getdata(4.3,5.7);
    cout<<"Mean is :"<<setmean(S1)<<endl;

return 0;
}