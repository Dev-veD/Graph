#include <iostream>

using namespace std;
class Graph{
private:
    int v,e;
    int gph[20][20];
public:
Graph(int ve){
    for(int i=0;i<ve;i++)
        for(int j=0;j<ve;j++)
        gph[i][j]=0;
    v=ve;
}
int addedge(int src,int dest,int cst){
    gph[src-1][dest-1]=cst;
    gph[dest-1][src-1]=cst;
    return 0;
}
int truncedge(int vx){
    for(int i=0;i<v;i++)
    {
        gph[vx-1][i]=0;
        gph[i][vx-1]=0;
    }
    return 0;
}
int show_graph(){
    cout<<"G ";
    for(int i=0;i<v;i++)
        cout<<i+1<<" ";
    cout<<endl;
    for(int i=0;i<v;i++)
    {
        for(int j=-1;j<v;j++){
            if(j==-1)
                cout<<i+1<<" "
                ;
            else
                cout<<gph[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
};
int main()
{
    int v,e;
    cout<<"Enter vertices and edges";
    cin>>v>>e;
    Graph a(v);
    cout<<"Enter source, destination and cost\n";

    for(int i=0;i<e;i++)
    {
        int s,d,c;
        cin>>s>>d>>c;
        a.addedge(s,d,c);
    }

    int y;
    do{
        cout<<"To add an edge enter 1\nTo remove an edge Enter 2\n";
        cout<<"To display connections enter 3\nTo exit enter 0\n";
        cin>>y;
        switch(y){
    case 1:
        cout<<"Enter the source destination and cost";
        int src,dest,cst;
        cin>>src>>dest>>cst;
        a.addedge(src,dest,cst);
        break;
    case 2:
        cout<<"Enter the vertex name\n";
        int vs;
        cin>>vs;
        a.truncedge(vs);
        break;
    case 3:
        a.show_graph();
    default:
        break;
        }
    }while(y!=0);
    return 0;
}

//Divyanshu Joshi

/*A simple implementation of Graph by Adjacency Matrix
-Implemented Graph add and delete vertex operation

*/
