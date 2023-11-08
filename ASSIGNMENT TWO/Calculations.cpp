//Question5
# include <iostream>
using namespace std;
int main() {
    //declare variables
    int option ,length,width,radius,base,height,area1,area2,area3;
    double pie;
    //ask the user for what they want to calculate
    cout << "Welcome to the calculator!"<<endl;
    cout<<"Hello , what calculation do you want to perform:\n";
    cout<<"\n1.Area of a circle\n2.Area of a rectangle\n3.Area of a triangle\n4.Quit";
    cout<<"\n  Please enter your choice: ";
    cin>>option;
    //start swutch case
    switch(option) {
        //Area of a circle
        case 1:
        cout << "Enter the radius : ";
        cin>>radius;
        pie=(22/7);
        area1 = pie * radius * radius ;
        cout<<"The area of the circle is:"<<area1<<endl;
        break;
        //Area of a rectangle
        case 2:
        cout << "Enter length : ";
        cin >> length; 
        cout<<"Enter width";
        cin>>width;
        area2 = length*width;
        cout<<"The area of the rectangle is:"<<area2<<endl;
        break;
        //Area of a triangle
        
        case 3:
        cout << "Enter base  : ";
        cin >> base; 
        cout<<"Enter height";
        cin>>height;
        area3 = (0.5)*base*height;
        cout<<"The area of the triangle is:"<<area3<<endl;
        break;
        //Quit
        case4 :
        cout<<"see you next time";
        break;
    }
}
