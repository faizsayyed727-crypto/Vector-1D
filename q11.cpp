//Sort the Array of 0's , 1's , 2's and 3's.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
void sortNumbers(vector<int> &nums){
    int x = nums.size();
    int noz = 0 , noo = 0 , notw = 0 , nothr = 0;
    //Counting Number of 0 , 1 , 2.
    for(int i = 0 ; i < x ; i++){
        if(nums[i] == 0) noz++;
        else if(nums[i] == 1) noo++;
        else if(nums[i] == 2) notw++;
        else nothr++;   // if(nums[i] == 3).
    }
    //Filling
    for(int i = 0 ; i < x ; i++){
        if(i < noz) nums[i] = 0;
        else if(i < (noz + noo)) nums[i] = 1;
        else if (i < (noz + noo + notw)) nums[i] = 2;
        else nums[i] = 3;
    }
}
int main() {
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter 0's , 1's , 2's and 3's : " << endl;
    for(int i = 0; i < n; i++) cin >> v[i];
    sortNumbers(v);
    cout << "Sorted Vector : ";
    display(v);
    return 0;
}