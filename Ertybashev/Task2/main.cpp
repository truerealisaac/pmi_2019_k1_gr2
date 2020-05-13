#include <iostream>
using namespace std;

class Array {
    friend void PrintArray(Array &a);

private:
    int size;
    int *arr;
public:
    Array(int _size) {
        size = _size;
        arr = new int[size];
    }

    Array(const Array &ARR):size(ARR.size){
        arr = new int[size];
        for (int i=0;i<size;i++){
            arr[i]=ARR.arr[i];
        }
    }

    ~Array(){
        delete []arr;
    }


    void setArray(){
        for(int i=0; i<size;i++){
            cin >> arr[i];
        }
    }
/*
    void getArray(){
        for(int i=0; i<size;i++){
            cout<<arr[i]<<"\n";
        }
    }
*/

};

void PrintArray(Array &a){
    cout<<"Array: \n";
    for (int i=0; i<a.size; i++){
        cout<<a.arr[i]<<endl;
    }
    cout<<"-----------\n";
}


int main() {
    Array a1(5);
    a1.setArray();
    PrintArray(a1);
    Array a2=a1;
    PrintArray(a2);
    return 0;
}
