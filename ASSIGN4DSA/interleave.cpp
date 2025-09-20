#include <iostream>
#include <queue>
using namespace std;
//Write a program interleave the first half of the queue with second half.
//Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9
int main() {
    queue<int>q;
   int n;
   cout<<"enter n elements of a queue"<<endl;
   cin>>n;
   for(int i =0;i<n;i++){
    int x;
    cin>>x;
    q.push(x);
   }

   int halfn = n/2;
   queue<int>newq;
   for(int i=0;i<halfn;i++){
    newq.push(q.front());
    q.pop();// due to this , it happens
   }
   
   while(!newq.empty()){
    cout<<newq.front()<<" ";
    newq.pop();
    cout<<q.front()<<" ";
    q.pop();
   }
    return 0;
}
