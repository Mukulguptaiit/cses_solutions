#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    // Output results for all board sizes from 1x1 up to tx t
    for(long long int k = 1; k <= t; k++) {
        long long int total_positions = (k * k) * (k * k - 1) / 2;
        long long int attacking_positions = 0;
        
        if(k > 2) {
            attacking_positions = 4 * (k - 1) * (k - 2);
        }
        
        long long int non_attacking_positions = total_positions - attacking_positions;
        cout << non_attacking_positions << endl;
    }
 
    return 0;
}