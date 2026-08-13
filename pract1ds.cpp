#include<iostream>
using namespace std;
int main(){
    int a1[100][100];
    int a2[100][100];
    int rows,col;
    cout<<"Enter number of rows in first array: ";
    cin>>rows;
    cout<<"Enter number of columns in first array: ";
    cin>>col;
    cout<<"Enter elements in first array: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>a1[i][j];
        }
    }
    int row2,col2;
    cout<<"Enter number rows in second array: ";
    cin>>row2;
    cout<<"Enter number of columns in second array: ";
    cin>>col2;
    if(rows!=row2 || col!=col2){
        cout<<"Invalid operations!!"<<endl;
        return 0;
    }
    cout<<"Enter elements in second array: ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>a2[i][j];
        }
    }
    int sum[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=a1[i][j]+a2[i][j];
        }
    }
    cout<<"Sum of arrays: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;

}