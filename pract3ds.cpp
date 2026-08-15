//linear search
#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"Name  : Ranyodh Singh"<<endl;
    cout<<"Class : CSE-E1"<<endl;
    cout<<"URN   : 2515241"<<endl;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array: {";
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1){
            cout<<" , ";
        }
    }
    cout<<"}"<<endl;
    int item;
    cout<<"Enter number to find: ";
    cin>>item;
    for(int i=0;i<n;i++){
        if(a[i]==item){
            cout<<"Item found at index "<<i<<endl;
            return 0;
        }
        
    }
    cout<<"Item not found!!"<<endl;
    return 0;
}