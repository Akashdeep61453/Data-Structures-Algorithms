#include<iostream>
using namespace std;

#define MAX 100

class Graph{
    int v, e;
    int par[MAX], rank[MAX];

    struct Edge{
        int a, b, wt;
    }arr[MAX], mstArr[MAX];

public:
    void getData(){
        cout<<"Enter vertices and edges:"<<endl;
        cin>>v>>e;

        cout<<"Enter edges:"<<endl;
        for(int i=0;i<e;i++){
            cin>>arr[i].a>>arr[i].b>>arr[i].wt;
        }

        for(int i=0;i<v;i++){
            par[i] = i;
            rank[i] = 0;
        }
    }

    int findSet(int n){
        if(par[n] == n) return n;
        par[n] = findSet(par[n]);
        return par[n];
    }

    void Union(int x, int y){
        x = findSet(x);
        y = findSet(y);

        if(x!=y){
            if(rank[x] > rank[y]){
                par[y] = x;
            }
            else if(rank[y] > rank[x]){
                par[x] = y;
            }
            else{
                par[y] = x;
                rank[x]++;
            }
        }
    }

    void sortEdges(){
        for(int i=0;i<e-1;i++){
            for(int j=0;j<e-i-1;j++){
                if(arr[j].wt > arr[j+1].wt){
                    Edge tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }
    }

    void Kruskal(){
        sortEdges();
        int cost=0, k=0;

        cout<<"MST Edges";
        for(int i=0; i<e; i++){
            int u = arr[i].a;
            int v2 = arr[i].b;
            int w = arr[i].wt;

            if(findSet(u) != findSet(v2)){
                mstArr[k++] = arr[i];
                cost += w;
                Union(u, v2);
            }
        }

        for(int i=0;i<k;i++){
            cout<<mstArr[i].a<<" - "<<mstArr[i].b<<" : "<<mstArr[i].wt<<"\n";
        }
        cout<<"cost = "<<cost<<endl;
    }

};

int main(){
    Graph g;
    
    g.getData();
    g.Kruskal();
    return 0;
}
