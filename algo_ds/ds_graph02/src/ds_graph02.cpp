#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

#define MAX 10
#define INF 9999

class graph
{
private:
	   int mat[MAX][MAX];
	   int vertc_cnt;
	   int edge_cnt;
public:
	   graph(void)

{
		   this->edge_cnt=0;
		   this->vertc_cnt=0;
		   for(int i=0; i<MAX; ++i)
		  		   {
		  			   for(int j=0; j<MAX; ++j)
		  			   {
		  				   mat[i][j]=INF;
		  			   }
		  		   }
}
	  void acceptgraph(void)
	   {
		   cout<<"enter the no of vertices:  "<<endl;
		   cin>>vertc_cnt;
		   cout<<"enter the no of edges:   "<<endl;
		   cin>>edge_cnt;

		   for(int i=0;i<edge_cnt;++i)
		   {
			   int from,to,weight;
			   cout<<"the edge count from,to,weight :   "<<endl;
			   cin>>from>>to>>weight;

			   mat[from][to]=weight;
			   mat[to][from]=weight;
		   }
	   }
	   void displaygraph(void)
	   {
		   cout<<"vertices are:  "<< vertc_cnt<<endl;
		   cout<<"edges are:   "<<edge_cnt<<endl;
		   cout<<"the graph is:  "<<endl;
		   for(int i=0; i<vertc_cnt; ++i)
		   {
			   for(int j=0; j<vertc_cnt; ++j)
			   {
				   if(mat[i][j] !=INF)
					   cout<<setw(4)<< left << mat[i][j];
				   else
				       cout<<setw(4)<< left << "#";
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
	g.displaygraph();
}
