#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<vector>
using namespace std;


template<typename T>
class Graph{

	map<T,list<T> > adjList;
	
	//BFS
	vector<T> visited;
	map<T,list<T> > bfs_ing;

public:
	Graph(){

	}
	void addEdge(T u, T v,bool bidir=false){

		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}
	
	void BFS(){
	    bfs_ing = adjList;
	    cout << "bfs_ing.begin(): " << bfs_ing.begin()->first << endl;
	    
	    visited.push_back(bfs_ing.begin()->first);
	    
	    CHECK_LIST:
	    
	    while(!(bfs_ing.begin()->second.empty())){
            for(int i = 0; i < visited.size(); ++i){
                if(visited.at(i) == bfs_ing.begin()->second.front()){
                    cout << "Already in list\n";
                    goto NO_ADD;
                }
            }
            visited.push_back(bfs_ing.begin()->second.front());
            NO_ADD:
            
            bfs_ing.begin()->second.pop_front();
	    }
	    
	    bfs_ing.erase(bfs_ing.begin());
	    
        if(!(bfs_ing.empty())){
            goto CHECK_LIST;
        }
	    
	    cout << "Visited vector after performing BFS: ";
	    for(int i = 0; i < visited.size(); ++i){
	        cout << visited.at(i) << " ";
	    }
	    cout << endl;
	}

	void print(){

		//Iterate over the map
		for(auto i:adjList){
			cout<<i.first<<"->";

			//i.second is LL
			for(T entry:i.second){
				cout<<entry<<",";
			}
			cout<<endl;
		}
	}
};

int main(){

	Graph<int> g2;
	g2.addEdge(1,2);
	g2.addEdge(1, 100);
	g2.addEdge(2, 3);
	g2.addEdge(100,2);
	g2.addEdge(100,3);

	g2.print();
	
	g2.BFS();
}
