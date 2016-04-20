/*Name: Parekh Vishal
Enrollment Number: 130280107064
Date: 06/05/2015*/

#include<iostream>
#include<stdio.h>

using namespace std;

int i, j,  a, b, n, ne = 1;
int m, mincost, cost[9][9], parent[9];
int find(int);
int uni(int, int);


int main()
{
	freopen("i.txt", "r", stdin);
    /* Number of vertex = n.*/
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> cost[i][j];
			if (cost[i][j] == 0)
				cost[i][j] = 999;
		}
	}
	/* It will run for n-1 times. */
	while (ne < n)
	{
		/* Finding minimum edge from all. */
		for (i = 1, m = 999; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (cost[i][j] < m)
				{
					m = cost[i][j];
					a  = i;
					b =  j;
				}
			}
		}

        /* If edge(a,b) does not form cyclic then it is added in Minimum Spanning Tree.*/
		if (find(a)!=find(b))
		{
		    cout<<ne++<<" edge "<<a<<","<<b<<" = "<<m<<endl;
			mincost += m;
		}
		/* By doing this , edge (a,b) will not be included in finding minimum. */

		cost[a][b] = cost[b][a] = 999;

		cout << endl << endl;
	}
	/* Mincost will return Minimum Cost of spanning tree.*/
	cout<<endl<<"Minimum Cost:"<<mincost;
	return 0;
}

/* This function will return us the vertex. */
int find(int i)
{
	while (parent[i])
		i = parent[i];
	return i;
}



