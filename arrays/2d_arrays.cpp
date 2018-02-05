#include <vector>
#include <iostream>

using namespace std;

int main(){
     vector< vector<int> > arr(6,vector<int>(6));
    
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){        
          cout << "enter the value [" << arr_i << "][" << arr_j << "]" << endl;
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int max = -2147483647;
    
    for(int i = 0; i + 2 < 6; i++){        
        int sum = 0;
        
        for(int j = 0; j + 2 < 6; j++){
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                + arr[i+1][j+1]
                + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            
            if(sum > max) {
                max = sum;
            }
        }
    }
    
    cout << max;
    
    return 0;
}
