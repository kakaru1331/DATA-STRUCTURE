#include <vector>
#include <iostream>

using namespace std;

int main(){    
    int n;
    
    cout << "enter the array size." << endl;
    cin >> n;
    vector<int> arr(n);
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       cout << "enter a elment" << endl;
       cin >> arr[arr_i];
    }
    
    for(;n > 0; n--){
        cout << arr[n-1] << ' ';
    }
    
    return 0;
}