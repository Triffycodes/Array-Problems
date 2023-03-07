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
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"Swapped array is: "<<endl;

}
int main(){
    int arr[100];
    int n;
    
    cout<<"enter the array size"<<endl;
    
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
        printArray(arr,n);
    }else{
        cout<<" you have entered not to swap so, see you soon byee!"<<endl;
        cout<<" and also take your array back :p"<<endl;
        printArray(arr,n);
    }


    return 0;
}