#include<iostream>
#include<math.h>
using namespace std;


//printing an array
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//swapping elements in an array
void swapEle(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if(i<size){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"Swapped array is: "<<endl;
    printArray(arr,size);

}
int main(){
    cout<<"enter the array size"<<endl;
    int arr[100];
    int n;
    cin>>n;
    
    // Inputting elements to an array
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cout<<"Enter 1 to swap elements"<<endl;
    cin>>s;

    if(s==1){
        swapEle(arr,n);
    }else{
        cout<<"You have entered wrong input so printing back the normal array :p"<<endl;
        cout<<arr<<endl;
    }


    return 0;
}