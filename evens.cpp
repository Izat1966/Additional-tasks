/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n;
    int index=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        index=i;
        if (index%2==0) cout<<arr[index]<<" ";
    }
    return 0;
}
