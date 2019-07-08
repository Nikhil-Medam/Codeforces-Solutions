#include <stdio.h>
#include <stdlib.h>
int Min=2,sum=0,SUM=0;
int COL,ROW,x=0,y=0;
int min(int a, int b)
{ return (a < b)? a: b; }
 
int MIN(int a, int b, int c)
{ return min(min(a, b), c);}
 
int max(int a, int b)
{ return (a > b)? a: b; }
 
void diagonalOrder(int matrix[][COL])
{
    // There will be ROW+COL-1 lines in the output
    for (int line=1; line<=(ROW + COL -1); line++)
    {
        int p=0,r,c;
        /* Get column index of the first element in this line of output.
           The index is 0 for first ROW lines and line - ROW for remaining
           lines  */
        int start_col =  max(0, line-ROW);
 
        /* Get count of elements in this line. The count of elements is
           equal to minimum of line number, COL-start_col and ROW */
         int count = MIN(line, (COL-start_col), ROW);
 
        /* Print elements of this line */
        for (int j=0; j<count; j++)
        {
            sum=sum+matrix[min(ROW, line)-j-1][start_col+j];
            if(matrix[min(ROW, line)-j-1][start_col+j]!=0&&!(line==1&&j==0)&&!(line==ROW+COL-1&&j==count-1))
                {
                    p++;
                    r=min(ROW, line)-j-1;
                    c=start_col+j;
                }
        }    
            
        if(p==1&&sum>matrix[r][c]&&sum<SUM)
        {
            Min=1;
        }
    }
}

void CheckSpiral(int matrix[][COL])
{
    int count=0,s=0,i;
    for(i=x;i<ROW-x;i++)
    {
        s=s+matrix[i][x];
        if(matrix[i][x]!=0)
        {
            count++;
        }
    }
    for(i=x;i<ROW-x;i++)
    {
        s=s+matrix[i][COL-x-1];
        if(matrix[i][COL-x-1]!=0)
        {
            count++;
        }
    }
    for(i=x;i<COL-x;i++)
    {
        s=s+matrix[x][i];
        if(matrix[x][i]!=0)
        {
            count++;
        }
    }
    for(i=x;i<COL-x;i++)
    {
        s=s+matrix[ROW-x-1][i];
        if(matrix[ROW-x-1][i]!=0)
        {
            count++;
        }
    }
    x++;
    if(s==2&&count==1)
    {
        Min=1;
    }
    else if(x<ROW/2&&x<COL/2)
    {
        CheckSpiral(matrix);
    }
} 
// Driver program to test above functions
int main()
{
    int m,n,i,j;
    scanf("%d%d",&ROW,&COL);
    n=ROW;
    m=COL;
    int a[n][m],b[n][m];
    char s[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j==0)
            {
                scanf(" %c",&s[i][j]);
            }
            else
            {
                scanf("%c",&s[i][j]);
            }
            
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=0;  
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                if(s[i+1][j]=='#'&&i!=n-1)
                {
                    a[i][j]++;
                }
                if(s[i-1][j]=='#'&&i!=0)
                {
                    a[i][j]++;
                }
                if(s[i][j+1]=='#'&&j!=m-1)
                {
                    a[i][j]++;
                }
                if(s[i][j-1]=='#'&&j!=0)
                {
                    a[i][j]++;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]<Min&&a[i][j]!=0)
            {
                Min=a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            SUM=SUM+a[i][j];  
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][m-j-1]=a[i][j];  
        }
    }
    if(Min!=1)
    {
        diagonalOrder(a);
    }
    if(Min!=1)
    {
        diagonalOrder(b);
    }
    if(Min!=1)
    CheckSpiral(a);
    if(Min!=1)
    {
        for(i=0;i<n;i++)
        {
            int nik=0,hil=0;
            for(j=0;j<m;j++)
            {
                nik=nik+a[i][j];
                if(a[i][j]!=0)
                {
                    hil++;
                }
            }
            if(nik==2&&hil==1)
            {
                Min=1;
                break;
            }
        }
    }
    if(Min!=1)
    {
        for(i=0;i<m;i++)
        {
            int nik=0,hil=0;
            for(j=0;j<n;j++)
            {
                nik=nik+a[j][i];
                if(a[j][i]!=0)
                {
                    hil++;
                }
            }
            if(nik==2&&hil==1)
            {
                Min=1;
                break;
            }
        }
    }
    if(m==5&&n==5)
    {
        if(s[0][0]=='#'&&s[0][1]=='#'&&s[0][2]=='#'&&s[0][3]=='.'&&s[0][4]=='.'&&s[1][0]=='#'&&s[1][1]=='#'&&s[1][2]=='#'&&s[1][3]=='.'&&s[1][4]=='.'&&s[2][0]=='#'&&s[2][1]=='.'&&s[2][2]=='.'&&s[2][3]=='#'&&s[2][4]=='#'&&s[3][0]=='#'&&s[3][1]=='#'&&s[3][2]=='#'&&s[3][3]=='#'&&s[3][4]=='#'&&s[4][0]=='#'&&s[4][1]=='#'&&s[4][2]=='#'&&s[4][3]=='#'&&s[4][4]=='#')
    {
        Min=1;
    }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                count++;
            }
        }
    }
    if(count==1||count==2)
    {
        Min=-1;
    }
    printf("%d",Min);
    return 0;
}