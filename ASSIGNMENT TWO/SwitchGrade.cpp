//Question3
# include <iostream>
using namespace std;
int main(){
    //Declare variables 
    int option;
    string fullName;
    //ask user to input their name
    cout<<"please enter you name";
    cin>>fullName;
    cout<<"Dear"<<fullName<<endl;
    cout<<"This is your DBIT sem 1 grade";
    cout<<"\n.1score>70\n2.score>=60&&score<=69\n3.score>=50&&score<=59\n4.score>=40&&score<=49\n5.score<40\n6.any other"<<endl;
    cout<<"Plese select the category your score is (e.g 1,2,3,...e.t.c)"<<endl;
    cin>>option;
// start the switch case
    switch(option){
        //For those who choose one execute this block
        case 1:
        cout<<"Dear"<<fullName;
        cout<<"Congratulations you have an A "<<endl;
        break;
         //For those who choose two execute this block
        case 2:
        cout<<"Dear"<<fullName<<endl;
        cout<<"Congratulations you have a B "<<endl;
        break;
     //For those who choose three  execute this block
    
        case 3:
        cout<<"Dear"<<fullName<<endl;
        cout<<"Congratulations you have a C "<<endl;
        break;
  //For those who choose four  execute this block
        case 4 :
            cout<<"Dear"<<fullName<<endl;
            cout<<"you have a D";
            break;
  //For those who choose five  execute this block
        case 5:
            cout<<"Dear"<<fullName<<endl;
            cout<<"you have an F";
            break;  

              //For those who choose six execute this block


        case 6:
            cout<<"Dear"<<fullName<<endl;
            cout<<"Invalid score";
            break;
        


    }
}





    

    
