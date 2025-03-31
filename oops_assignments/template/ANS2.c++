// WAP to implement bubble sort using function template.

#include<iostream>
using namespace std;

// I'm Just using Template in Class
template<class T>
class bubbleSort{
    public:
    void Bubble(T arr[],T n){
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
    }
};

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int *arr = new int[size];  
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    bubbleSort<int> obj;
    obj.Bubble(arr,size);
    cout<<"Sorted array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr; 
    return 0;
};

// {44,5,23,7,90,34,12,56,78,1}