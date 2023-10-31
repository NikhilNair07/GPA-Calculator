#include<iostream>
using namespace std;

int main(){
    int totalmarks, obtainedmarks;
    float percentage=0.0;

    cout<<"Enter total marks:"<<endl;
    cin>>totalmarks;
    cout<<"Enter the obtained marks"<<endl;
    cin>>obtainedmarks;
if(obtainedmarks<=totalmarks){
    percentage=100*obtainedmarks/totalmarks;
    if(percentage>=97 && percentage<=100){
        cout<<"the gpa is 4.00"<<endl;
        cout<<"the grade is A+"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=93 && percentage<=96.99){
        cout<<"the gpa is 4.00"<<endl;
        cout<<"the grade is A"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=90 && percentage<=92.99){
        cout<<"the gpa is 3.7"<<endl;
        cout<<"the grade is A-"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=87 && percentage<=89.99){
        cout<<"the gpa is 3.3"<<endl;
        cout<<"the grade is B+"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=83 && percentage<=86.99){
        cout<<"the gpa is 3.0"<<endl;
        cout<<"the grade is B"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=80 && percentage<=82.99){
        cout<<"the gpa is 2.7"<<endl;
        cout<<"the grade is B-"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=77 && percentage<=79.99){
        cout<<"the gpa is 2.3"<<endl;
        cout<<"the grade is C+"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=73 && percentage<=76.99){
        cout<<"the gpa is 2.0"<<endl;
        cout<<"the grade is C"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=70 && percentage<=72.99){
        cout<<"the gpa is 1.7"<<endl;
        cout<<"the grade is C-"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=67 && percentage<=69.99){
        cout<<"the gpa is 1.3"<<endl;
        cout<<"the grade is D+"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=65 && percentage<=66.99){
        cout<<"the gpa is 1.0"<<endl;
        cout<<"the grade is D"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
    else if(percentage>=0 && percentage<=64.99){
        cout<<"the gpa is 0.0"<<endl;
        cout<<"the grade is F"<<endl;
        cout<<"the percentage is "<<percentage<<endl;
    }
}
else{
    cout<<"the obtained marks entered is invalid"<<endl;
}
    

    return 0;
}