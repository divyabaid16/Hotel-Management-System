#include <iostream>

using namespace std;

int main()
{
    cout<<"Choose an option"<<endl;
    cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division"<<endl;
    int a;
    int b;
    int operation;
    int value;
    cin>>operation;
    cout<<"Enter first no.";
    cin>>a;
    cout<<"Enter second no.";
    cin>>b;

    if(operation==1){
        value=a+b;
    }
    else if(operation==2){
        value=a-b;
    }
    else if(operation==3){
        value=a*b;
    }
    else if(operation==4){
        value=a/b;
    }

    else{
        cout<<"invalid choice";
    }
    cout<<"The result is "<<value <<endl;
    return 0;
}
