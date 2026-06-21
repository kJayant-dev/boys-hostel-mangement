#include <iostream>
#include <vector>
using namespace std;
class Boys_Hostel {
public : 

    string name ;
    int id ;
    int age ;
    int no_of_days ;
    
    
    Boys_Hostel(){
        // defualt constructor 
    }

    Boys_Hostel(string name , int id , int age , int no_of_days ){
        this->name = name ;
        this->id = id ;
        this->age = age ;
        this->no_of_days = no_of_days ;
        
    }
      
} ;

int fees(Boys_Hostel a ){
    int fees = a.no_of_days * 115 ;
    return fees ;
}

void display(Boys_Hostel b[] , int a ){
    cout<<endl;
    for(int i = 0 ; i < a ; i++ ){
        cout<<"Name of Student : "<<b[i].name<<endl;
        cout<<"ID of Student : "<<b[i].id<<endl;
        cout<<"Age of Student : "<<b[i].age<<endl;
        cout<<"No of days stay in hostel : "<<b[i].no_of_days<<endl;
        cout<<endl;
    }
}

int main(){
    Boys_Hostel arr[5];
    int a = 0 ;
    
    while(1){
        int n ;
        cout<<"What you want to do ! "<<endl ;
        cout<<" 1  . Add Details : "<<endl;
        cout<<" 2  . Print Details : "<<endl;
        cout<<" 3  . Calculate fees of student"<<endl ;
        cout<<" 4  . Exit !!"<<endl;

        cout<<"Select any one from above statement (1 , 2 , 3 , 4 ) : ";
        cin>>n;
        
        // complete
        
        if(n == 1){
            cout<<"Enter no of students details you want to add  (total no) ) : ";
            cin>>a;
            Boys_Hostel arr[a];
            cin.ignore();
            for(int i = 0 ; i < a ; i++ ){
                cout<<endl;
                cout<<"Enter Name of Student : ";
                getline( cin , arr[i].name);
                cout<<"Enter ID of Student : ";
                cin>> arr[i].id;
                cout<<"Enter Age of Student : ";
                cin>> arr[i].age;
                cout<<"Enter No of days   : ";
                cin>> arr[i].no_of_days;
                cin.ignore();
            }
            // brr[a] = arr[a];
        }

        else if (n == 2) {
            if (a == 0) {
                cout << "No student data available. Please add details first.\n";
            } 
            else {
                display(arr, a);
            }
        }

        else if(n == 3 ){
            int id ; 
            cout<<"Enter Which Student fees  you want to print (Enter ID )  ";
            cin>>id;
            for (int i = 0; i < a; i++) {
                if (arr[i].id == id) {
                    cout << "Fees of Student (" << arr[i].name << ") is: "<< fees(arr[i]) << endl;
                    
                }
            }
    
        }
        else if( n == 4 ){
            break ;
        }
    }    
    

}