#include<iostream>
using namespace std;

#define MAX 100

class PriorityQueue{
    int arr[MAX];
    int size;

public:

    PriorityQueue(){
        size = 0;
    }

    void insert(int x){
        arr[size] = x;
        int i = size;
        size++;

        while(i > 0){
            int parent = (i-1)/2;
            if(arr[parent] < arr[i]){
                int temp = arr[parent];
                arr[parent] = arr[i];
                arr[i] = temp;
                i = parent;
            }
            else break;
        }
    }

    int getMax(){
        if(size == 0){
            cout<<"Queue empty";
            return -1;
        }
        return arr[0];
    }

    void removeMax(){
        if(size == 0){
            cout<<"Queue empty";
            return;
        }

        arr[0] = arr[size-1];
        size--;

        int i = 0;
        while(true){
            int left = 2*i+1;
            int right = 2*i+2;
            int largest = i;

            if(left < size && arr[left] > arr[largest])
                largest = left;
            if(right < size && arr[right] > arr[largest])
                largest = right;

            if(largest != i){
                int temp = arr[i];
                arr[i] = arr[largest];
                arr[largest] = temp;
                i = largest;
            }
            else break;
        }
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    PriorityQueue pq;
    int choice, val;

    while(true){
        cout<<"Insert"<<endl<<"2.Get Max"<<endl<<"3.Remove Max"<<endl<<"4.Display"<<endl<<"5.Exit";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>val;
                pq.insert(val);
                break;

            case 2:
                cout<<"Max = "<<pq.getMax()<<endl;
                break;

            case 3:
                pq.removeMax();
                break;

            case 4:
                pq.display();
                break;

            case 5:
                return 0;
        }
    }
}
