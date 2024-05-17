// #include <iostream>
// #include <vector> 
// using namespace std;

// int main() {
//     vector<int> a = {7,8, 8, 6, 5};
    
//     if (7== 8) {
//         cout << "It Is Match";
//     } else {
//         cout << "It Is Not Match";
//     }
    
    
//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};

//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j < arr.size(); j++) {
//             if(arr[j]<arr[i]){
//                 int temp =arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0; i<arr.size();i++){
//       cout<<arr[i]<<" ";  
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int isPresent(int arr[], int toFind) {
    for (int i = 0; i < 5; i++) {
        if (arr[i] == toFind) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int toFind = 5;

    if (isPresent(arr, toFind)) {
        cout << "Present";
    } else {
        cout << "Not Present";
    }

    return 0;
}







