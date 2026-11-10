//Merge Two Sorted Array. --> Three Pointers Method. (Behind)
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
vector<int> merge(vector<int> &arr1 , vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m+n);
    int i = n - 1; //arr1
    int j = m - 1; //arr2
    int k = m + n - 1; //res
    while(i >= 0 && j >= 0){   // i <= n - 1 && j <= m - 1
        //Jo chota hai wo element put karo inside the Resultant.
        if(arr1[i] > arr2[j]){
            res[k] = arr1[i];
            i--;
        }
        else{ // arr2[j] > arr1[i]
            res[k] = arr2[j];
            j--;
        }
        k--;
    }
    //For remaining
    while(i >= 0) {
        res[k] = arr1[i];
        i--;
        k--;
    }
    while(j >= 0) {
        res[k] = arr2[j];
        j--;
        k--;
    }
    return res;
}
int main(){
    vector<int> arr1 = {1,4,5,8};
    cout << "First Sorted Array : ";
    display(arr1);
    vector<int> arr2 = {2,3,6,7,10,12};
    cout << "Second Sorted Array : ";
    display(arr2);
    vector<int> v = merge(arr1 , arr2);
    cout << "Merged Sorted Array : ";
    display(v);
}