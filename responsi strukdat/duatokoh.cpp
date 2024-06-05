#include <iostream>
using namespace std;


//Fungsi Linear Search
int linearSearch(int arr[], int n, int x) { 
    for(int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}


//Fungsi Binary Search
int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}



int main(){
    int n, m, x;
    cin >> n >> m;

    int array_A[n]; 
    int array_B[m];

    //Input Array A
    cout<<"masukan besar array A (Basha): ";
        for(int i = 0; i < n; i++) {
        cin >> array_A[i];
    }
    
    //Input Array B
    cout<<"masukan besar array B (Sena): ";
    for(int i = 0; i < m; i++) {
        cin >> array_B[i];
    }
  

    //Pencarian
    int index_A = linearSearch(array_A, n, x);
    int index_B = binarySearch(array_B, m, x);
  
    if(index_A = -1){
        cout << x << "ditemukan di array A indeks ke-" << index_A << endl;
    }else{
        cout << x << "tidak ditemukan di A" << endl;
    }

    if(index_B = -1){
        cout << x << "ditemukan di array indeks ke-" << index_B << endl;
    }else{
        cout << x << "tidak ditemukan di B" << endl;
    }

    if((index_A != -1) || (index_B )){
        cout << x << "ditemukan di KEDUANYA" << index_B << endl;
    }else{
        cout << x << "tidak ditemukan KEDUANYA" << endl;
    }
    
    return 0;
}