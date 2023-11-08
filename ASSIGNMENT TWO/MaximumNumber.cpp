//Question4
# include <iostream>
using namespace std;
int main() {
    //Declare variables
    int  num1, num2, maxNum ,max;
    //input first number
    cout<<"Enter first number";
    cin>>num1;
    //input second number
    cout<<"Enter second number";
    cin>>num2;
    max=num1;
    //start switch case
    switch(num2){
        case 0:
            cout<<" Second number is 0 , cannot compare ."<<endl;
            break;
        default :
            if (num2 > max)
                max = num2 ;            
    }
//give output
cout<< "Maximum Number of"<<num1<<"and "<<num2<<" is "<<max<<endl;

}