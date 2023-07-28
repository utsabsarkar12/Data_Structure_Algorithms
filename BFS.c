#include <stdio.h>
#include <stdlib.h>
int a[20][20], q[20]= {0}, visited[20]= {0},n,i,j,f=0,r=-1;
void bfs (int v) //0
{
    for (i=0; i<n; i++)
        if (a[v][i]==1&& visited [i]==0)//a[0][1] && visited[0]==0
            q[++r]=i;
    if(f<=r)
    {
        visited [q[f]]=1;
        bfs(q[f++]);

    }
}

main()
{
    int v;
    printf("\n Enter The number of vertices:");
    scanf("%d", &n );
    printf("\n eNTER GRAPH DATA IN MATRIX FROM:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter the startuing vertex: ");
    scanf("%d", &v);
    bfs(v);
    for (i=0; i<n; i++)
    {

        if(visited[i])
            printf("%d\t",i);
        else
        {
            printf("\n Bfs is not possible. Not all nodes are reachable");
            break;
        }
    }

}
