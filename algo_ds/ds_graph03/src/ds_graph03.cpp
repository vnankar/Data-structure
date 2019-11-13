#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>
#include<list>
#include<iterator>

class graph
{
private:
	vector<list <int> > gr;
	 int vertc_cnt;
	 int edge_cnt;
public:
	graph(void)
{
		this->vertc_cnt=0;
		this->edge_cnt=0;
}
	void acceptvalues(void)
	{
		cout<<"enter the vertices:   "<<endl;
		cin>>vertc_cnt;
		cout<<"enter the edges:     "<<endl;
		cin>>edge_cnt;

		for(int i=0; i<vertc_cnt; ++i)
		{
		    list<int> empty_list;
		    gr.push_back(empty_list);

		}
		for(int i=0; i<edge_cnt; ++i)
		{
			int to,from;
			cout<<"edges are:from to to :    "<<endl;
			cin>>to>>from;

			gr [from].push_back(to);
			gr [to].push_back(from);
		}

	}
	void displaygraph(void)
	{
		cout<<"the vertices are:   "<<vertc_cnt<<endl;
		cout<<"the edge are:     "<<edge_cnt<<endl;
		cout<<"the graph  is:   "<<endl;
		list<int>::iterator itr;
		for(int i=0; i<vertc_cnt;++i)
		{
			cout<<"{"<< i <<"}"<<"=>";
			for(itr=gr[i].begin(); itr !=gr[i].end(); ++itr)

			cout<< *itr <<"->";
            cout<< "null"<<endl;


	}
		cout<<endl;
}
};
int main(void)
{
	graph g;;
	g.acceptvalues();
	g.displaygraph();
	return 0;

}
