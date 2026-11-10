//Reverse a Part of the Array.

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void reversePart(int i, int j, vector<int> &v){
    while(i < j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;

    vector<int> v(n);
    cout << "Input Array Elements :\n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int x, y;
    cout << "Enter the First Index : ";
    cin >> x;
    cout << "Enter the Last Index : ";
    cin >> y;

    cout << "Original Array is : ";
    display(v);

    cout << "After Reversing a Part of the Array : ";
    reversePart(x, y, v);
    display(v);
    return 0;
}