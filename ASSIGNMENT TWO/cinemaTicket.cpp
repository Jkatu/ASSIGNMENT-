//Question9
# include <iostream>
using namespace std;
int main (){
    //Declare variables
    int age ;
    string type;
    //Ask for the type of movie they want to watch
    cout<<"Welcome to the Globe Cinema\n ";
    cout<<"What type of movie do you want to watch today?";
    cin>>type;
    //Ask for their age
    cout<<"how old are you?";
    cin>>age;
    //For regular and aged 18 and above execute this block
    if(type=="regular"&&age>=18){
        cout<<"your ticket will be 20000";
    }
    //For regular and aged below 18 execute this block
    else if (type=="regular"&&age<18){
        cout<<"your ticket will be 15000";
    }
    //For 3D and aged 18 and above execute this block
    else if(type=="3D"&&age>=18){
        cout<<"your ticket will be 25000";
    }
    //For 3D and aged below 18 execute this block
else if(type=="3D"&&age<18){
    cout<<"your ticket will be 23000";
}
//if the details are wrong or dont match execute this
else{
    cout<<" sorry we are unable to process your request"; 
}
    
}
