#include<iostream>
#include<cstring>
using namespace std;
#include<iomanip>

# define MAX 10
class graph
{
private:
	int mat[MAX][MAX];
	int edge_cnt;
	int vertc_cnt;
public:

	graph (void)
{
		this->edge_cnt=0;
		this->vertc_cnt=0;
		memset(mat,0,sizeof(mat));
}
	void acceptgraph(void)
	{
		cout<<"enter the vertices:  "<<endl;
		cin>>vertc_cnt;

		cout<<"enter the edges:    "<<endl;
		cin>>edge_cnt;

		for(int i=0; i<edge_cnt;++i)
		{
		 int from,to;
		 cout<<"enter the edge count:   "<<endl;
		 cin>>from>>to;

		mat[from][to]=1;
		mat[to][from]=1	;
		}
	}
	void display_graph(void)
	{
		cout<<"no. of vertices are :   "<<endl;
		cout<<"no.of edges are :    "<<endl;
		cout<<"input graph is:  "<<endl;
		for(int i=0;i<vertc_cnt;++i)
		{
			for(int j=0; j<vertc_cnt;++j)
			{
			cout<< setw(4) << left <<mat[i][j];
			}
			cout<<endl;
	}
		cout<<endl;
	}
};
int main(void)
{
graph g;


g.acceptgraph();
g.display_graph();
return 0;
}
