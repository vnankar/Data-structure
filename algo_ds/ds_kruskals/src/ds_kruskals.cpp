#include<iostream>
#include<vector>
#include<iterator>
#include<iomanip>
#include<algorithm>
using namespace std;

#define MAX 10
#define INF 9999
int parent[MAX];
int g_rank[MAX];
class edges
{
private:
	int src;
	int dest;
	int weight;
public:
	edges(int u=0, int v=0, int w=0)
{
		this->src=u;
		this->dest=0;
		this->weight=0;
}
	friend ostream& operator<<(ostream& out, edges& other)
	{
		out<<other.src<<"->" <<other.dest<< " : " <<other.weight;
		return out;
	}
};
class graph
{
private:
	vector<edge> edges;
	int vertc_cnt;
	int edge_cnt;
	int mat[MAX][MAX];

public:
	graph()
{
		this->edge_cnt=0;
		this->vertc_cnt=0;
		for(int i=0; i<MAX;  ++i)

			for(int j=0; j<MAX; ++j)
			mat[i][j]=INF;
}
	void acceptvalues(void)
	{
		cout<<"enter the vertices:   "<<endl;
		cin>>vertc_cnt;
		cout<<"enter the edges:   "<<endl;
		cin>>edge_cnt;

		for(int i=0; i<edge_cnt; ++i)
		{
			int from,weight,to;
			cout<<"enter the vertices:from-to-weight "<<endl;
			cin>>from>>to>>weight;

			mat[from][to]=weight;
			mat[to][from]=weight;
			 edges ed [from,to,weight];
			 edges.push_back(ed);
		}
	}
	void displaygraph(void)
	{
		cout<<"the no. of vertices are:  "<<vertc_cnt<<endl;
		cout<<"the no.of edges are: "<< vertc_cnt<<endl;
		cout<<"the input graph is:  "<<endl;
		for(int i=0; i<vertc_cnt; ++i)
		{
				for(int j=0; j<vertc_cnt; ++j)
				{
					if(mat[i][j]!=INF)
						cout<< setw(4) << left << mat[i][j];
					else
						cout<< setw(4) << left <<"#";
				}
				cout<<endl;
		}
		cout<<endl;
		cout<<"the edges are:  "<<endl;
		displayedges();
	}
	void displayedges(void)
	{
		vector<edge>::iterator itr;
		for(itr=edges.begin(); itr!=edges.end(); ++itr)
			cout<< *itr <<  endl;
	}
	int root(int i)
	{
  return i;
	}
	void combine(void)
	{

	}

	void kruskals(void)
	{

	}
};
int main(void)
{
	graph g;
	g.acceptvalues();
	g.displaygraph();

	return 0;
}

