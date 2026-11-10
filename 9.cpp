#include<iostream>
using namespace std;
void display(int a[]){
    for(int i = 0 ; i < 7 ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void change(int b[]){
    b[0] = 100;
    b[1] = 200;
    b[3] = 300;
    b[6] = 700;
}
int main(){
    int arr[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    cout << "Array Before Changing Elements in it : ";
    display(arr);
    change(arr);
    cout << "Array After Changing Elements in it : ";
    display(arr);
}