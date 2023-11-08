//Question8
# include<iostream>
using namespace std;
int main() {
    //declare variables
    int cost1,cost2 , cost3,discount1,discount2;
    //input cost before discount
    cout<<"Welcome to Juhudi stores discount system\n";
    cout << " Please enter the total cost before discount";
    cin >> cost1;
    //for goods worth  between 50000 and 70000
    if(cost1>=50000&&cost1<=70000 ){
        discount1=(0.2)*cost1;
        cout<<"your discount will be:"<<discount1<<endl;
        cost2 = cost1-discount1;
        cout<<"after discount your new price is :"<<cost2<<endl;
    }
    //for goods worth more than 70000
    else if(cost1>=70000){
        discount2=(0.3)*cost1;
        cout<<"your discount will be:"<<discount2<<endl;
        cost3 = cost1-discount2;
        cout<<"after discount your new price is :"<<cost3<<endl;
    
    } //goods worth less than 50000 no discount
    else{
        cout<<"sorry no discount for you"<<endl;
        cout<<"Discounts are offered to goods worth 50000 and above"<<endl;
        }

    

    }
    