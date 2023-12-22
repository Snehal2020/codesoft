#include <iostream>
using namespace std;
int main()
{   char ch; 
    do
  {
    int num1,num2;
    cout<<"Enter number1 : ";
    cin>>num1;
    cout<<"Enter number2 : ";
    cin>>num2;
    int op;
    cout<<"\n***************** Choose to arithmatic operation **********************\n  1.Addition\n  2.Subtraction\n  3.Multiplication\n  4.Division\n";
    cin>>op;
    if(op==1)
    {
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    }
    else if(op==2)
    {
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    }
    else if(op==3)
    {
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    }
    else if(op==4)
    {
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    }
    else{
        cout<<"\nEnter valid choice ";
    }

   cout<<"Enter 'Y' to perform more operation :- ";
   cin>>ch;
  } while (ch=='y' || ch=='Y');
    return 0;
}