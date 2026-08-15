#include <iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c;
    while(true){
    cout<<"Enter your choice: "<<endl;
    cout<<"1 for display arrays:"<<endl;
    cout<<"2 for insert a number in array:"<<endl;
    cout<<"3 for delete a number in array:"<<endl;
    cout<<"4 for Exit from program:"<<endl;
    cin>>c;
    switch(c){
        case 1:
        cout<<"Array: {";
        for(int i=0;i<n;i++){
            cout<<a[i];
            if(i<n-1){
                cout<<" , ";
            }
            
        }
        cout<<"}"<<endl;
        break;
        case 2:{
        int pos,ele;
        cout<<"Enter the position to insert a number: ";
        cin>>pos;
        cout<<"Enter the number: ";
        cin>>ele;
        int p=pos-1;
        for(int i=n;i>p;i--){
            a[n]=a[n-1];
        }
        a[p]=ele;
        break;}
        case 3:{
            int x;
            cout<<"Enter your position: ";
            cin>>x;
            for(int i=x-1;i<n-1;i++){
                a[i]=a[i+1];

            }
            n--;
            break;
    }
        case 4:
        cout<<"Exiting!!!"<<endl;
        return 0;
        default:{
            cout<<"Invalid option!!"<<endl;
        }
}
}
}