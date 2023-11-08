//Question1
# include <iostream>
using namespace std;
int main(){
    //Declare variables
    int age,bankBalance,bankLife;
    string CRBstatus ,good , fullName;
//ask user to input their details:name,age
    cout<<"Hello welcome to mwananchi bank.Please enter your name\n";
    getline(cin,fullName);
    cout<<"hello "<<fullName<<endl;
    cout<<"please enter your age\n";
    cin>>age;
    if (age>22){
        //ask user to input bank balance
        cout<<"please enter bank balance\n";
    cin>>bankBalance;}
    if(bankBalance>50000){
        //ask user for their current CRB status
        cout<<"what is your CRBstatus?\n";
    cin>>CRBstatus;}
    if(CRBstatus=="good"){
        //ask user for how long they have been in the bank
        cout<<"please enter your banklife in months";
    cin>>bankLife;}
//since they meet all the conditions congratulate them
    if(bankLife>6){
        cout<<"Dear"<<fullName<<endl;
        cout<<"Congratulations you qualify for a loan"<<fullName;
    } else{
        //if they dont meet one of the conditions diqualify them
        cout<<" sorry you do not qualify for a loan, "<<fullName;
    }
    


    


}