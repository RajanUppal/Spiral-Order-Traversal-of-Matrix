#include<iostream>
using namespace std;

void spiralOrderTraversal(int *a, int n, int m)
{
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1, i, j;
    while((row_start <= row_end) && (col_start <= col_end))
    {
        // for row_start
        for(i=col_start;i<=col_end;i++)
        {
            cout<<*(a + row_start*m + i)<<"  ";
        }
        row_start++;

        //for col_end
        for(j=row_start;j<=row_end;j++)
        {
            cout<<*(a + j*m + col_end)<<"  ";
        }
        col_end--;

        //for row_end
        for(i=col_end;i>=col_start;i--)
        {
            cout<<*(a + row_end*m + i)<<"  ";
        }
        row_end--;

        //for col_start
        for(j=row_end;j>=row_start;j--)
        {
            cout<<*(a + j*m + col_start)<<"  ";
        }
        col_start++;
    }
    
}

int main()
{
    int n,m,i,j;
    cout<<"Enter number of rows in array: ";
    cin>>n;
    cout<<"Enter number of columns in array: ";
    cin>>m;
    int a[n][m];
    cout<<"Enter array: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    spiralOrderTraversal((int*)a,n,m);
    return 0;
}
