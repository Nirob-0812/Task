#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,sum,sub,mul,p;
    nirob:
    cout<<"Enter Your Choice: ";
    cin>>num1;
    switch(num1)
    {
    case 1:{
    cout<<"Thank You for choosing addition"<<endl;
    cout<<"Please Enter Two Number: ";
    cin>>num2>>num3;
    sum=num2+num3;
    cout<<"Addition of Two Number: "<<sum<<endl;
    cout<<"Press 1 for Home"<<endl<<"Press 2 for Exit"<<endl;
    cin>>p;
    if(p==1)
    {
        goto nirob;
    }
    if(p==2)
        break;

    }
    case 2:{
    cout<<"Thank You for choosing Subtraction"<<endl;
    cout<<"Please Enter Two Number: ";
    cin>>num2>>num3;
    if(num2>num3)
        sub=num2-num3;
    else
        sub=num3-num2;
    cout<<"Subtraction of Two Number: "<<sub<<endl;
    cout<<"Press 1 for Home"<<endl<<"Press 2 for Exit"<<endl;
    cin>>p;
    if(p==1)
    {
        goto nirob;
    }
    if(p==2)
        break;

    }
    case 3:{
    cout<<"Thank You for choosing Multiplication"<<endl;
    cout<<"Please Enter Two Number: ";
    cin>>num2>>num3;
    mul=num2*num3;
    cout<<"Multiplication of Two Number: "<<mul<<endl;
    cout<<"Press 1 for Home"<<endl<<"Press 2 for Exit"<<endl;
    cin>>p;
    if(p==1)
    {
        goto nirob;
    }
    if(p==2)
        break;

    }
    case 4:{
    cout<<"Thank You for choosing Division"<<endl;
    cout<<"Please Enter Two Number: ";
    cin>>num2>>num3;
    double div=(double)num2/num3;
    cout<<"Division of Two Number: "<<div<<endl;
    cout<<"Press 1 for Home"<<endl<<"Press 2 for Exit"<<endl;
    cin>>p;
    if(p==1)
    {
        goto nirob;
    }
    if(p==2)
        break;

    }

    }

    return 0;


}
