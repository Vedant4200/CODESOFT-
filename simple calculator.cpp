#include<iostream>
using  namespace std;

int main() {

    float num_1, num_2;

    cout<<"enter the value of num_1"<<endl;
    cin>>num_1;
    
    cout<<"enter the value of num_2"<<endl;
    cin>>num_2;

    char operation;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>operation;
    
    cout<<"your answer is : ";
    switch(operation) {

        case '+':  cout<< (num_1+num_2) <<endl;
                   break;
        case '-':  cout<< (num_1-num_2) <<endl;
                   break;
        case '*':  cout<< (num_1*num_2) <<endl;
                   break;
        case '/':  cout<< (num_1/num_2) <<endl;
                   break;

        default: cout<<"please enter a valid operation"<<endl;
    }
    return 0;
}
