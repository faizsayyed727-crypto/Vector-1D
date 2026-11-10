// Vector kya Hota hai.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v; // we do not need to specify size
    //  While Inserting / Input do not Use []
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(11);
    v.push_back(101);
    v.push_back(1001);

    cout << "Inserting Elements to Vector : " << endl;
    for (int i = 0; i <= 5; i++){
        cout << v[i] << " ";
    }

    //  If you want to Update / Access we have to use []
    v[0] = 100;
    v[1] = 50;
    v[2] = 25;
    v[3] = 2509;
    v[4] = 245;
    v[5] = 225;

    cout << endl << "Updating Elements of Vector : " << endl;
    for(int i = 0; i <= 5; i++){
        cout << v[i] << " ";
    }
}