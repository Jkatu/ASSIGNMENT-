//Question2
#include <iostream>
using namespace std;
int main(){
    //Declare variables
    int  score;
    string grade , fullName;
    //ask user to input their name
    cout <<"Please input you full name";
    cin>>fullName;
    //Ask the user to input their score
    cout<<"Enter your test score: \n";
    cin >>score ;
    //if they meet the condition give them their grade
    if (score >= 70){
        cout<<"Dear"<<fullName;
        cout<<"You have passed the exam with a score of:"<<score<<endl;
        cout<<"Congratulations you have an A "<<endl;
    }
    //if they meet the condition give them their grade
    else if(score>=60&&score<=69){
        cout<<"Dear"<<fullName<<endl;
        cout<<"You have passed the exam with a score of:"<<score<<endl;
        cout<<"Congratulations you have a B "<<endl;
    }
    //if they meet the condition give them their grade
    else if(score>=50&&score<=59){
        cout<<"Dear"<<fullName<<endl;
        cout<<"You have passed the exam with a score of:"<<score<<endl;
        cout<<"Congratulations you have a C "<<endl;}
//if they meet the condition give them their grade
    else if(score>=40&&score<=49){
            cout<<"Dear"<<fullName<<endl;
            cout<<" you have a score of:"<<score<<endl;
            cout<<"you have a D";

        }
        //if they meet the conditiio give them their grade
     else if(score<40){
            cout<<"Dear"<<fullName<<endl;
            cout<<"you have a score of:"<<score<<endl;
            cout<<"you have an F";
        }
    else{ 
        cout<<" invalid score";

    }
}





    
