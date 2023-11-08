//Question7
# include<iostream> 
using namespace std;
int main(){
    //Declare variables
    int latefee, latefee1,latefee2, days;
    string  type, fullName;
    //ask user to input their name
    cout<<"enter your fullname";
    cin>>fullName;
    cout<<"Dear"<<fullName<<endl;
    //ask for the type of book borrowed
    cout<<"what type of book did you borrow?";
    cin>>type;
    //For regular execute this block
    if( type=="regular") {
        cout<<"what are the number of days that you are late for";
        cin>>days;
        cout<<"your fine is ksh100 per day"<<endl;
        latefee=days*100;
        cout<<"dear"<<fullName<<endl;
        cout<<"total amount to pay is "<<latefee;
  }//for children execute this block
   else if (type == "children"){
        cout<<"what are the number of days that you are late for?";
        cin>>days;
        cout<<"your fine is ksh50 per day"<<endl;
        latefee1=days*50;
        cout<<"dear"<<fullName<<endl;
        cout<<"total amount to pay is "<<latefee1;
        //For reference execute this block
   }else if(type=="Reference"){
            cout<<"What are the number of days that you are late for?";
            cin>>days;
            cout<<"Your fine is Ksh20 per day"<<endl;
            latefee2=days*20;
            cout<<"dear"<<fullName<<endl;
            cout<<"Total amount to pay is "<<latefee2;
        }
        //if the deatails do not match
    else{
            cout<<"Sorry we do not recognize this type of borrower.";
        }

        }
        
    

        

    

