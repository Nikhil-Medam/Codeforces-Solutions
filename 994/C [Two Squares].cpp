// A C++ program to check if a given point lies inside a given polygon
// Refer https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
// for explanation of functions onSegment(), orientation() and doIntersect()
#include <bits/stdc++.h>
using namespace std;
 
// Define Infinite (Using INT_MAX caused overflow problems)
#define INF 10000
 
struct Point
{
    int x;
    int y;
};
 
// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;
    return false;
}
 
// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
 
    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}
 
// The function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    // Find the four orientations needed for general and
    // special cases
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
 
    // General case
    if (o1 != o2 && o3 != o4)
        return true;
 
    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
 
    // p1, q1 and p2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
 
    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
 
     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
 
    return false; // Doesn't fall in any of the above cases
}
 
// Returns true if the point p lies inside the polygon[] with n vertices
bool isInside(Point polygon[], int n, Point p)
{
    // There must be at least 3 vertices in polygon[]
    if (n < 3)  return false;
 
    // Create a point for line segment from p to infinite
    Point extreme = {INF, p.y};
 
    // Count intersections of the above line with sides of polygon
    int count = 0, i = 0;
    do
    {
        int next = (i+1)%n;
 
        // Check if the line segment from 'p' to 'extreme' intersects
        // with the line segment from 'polygon[i]' to 'polygon[next]'
        if (doIntersect(polygon[i], polygon[next], p, extreme))
        {
            // If the point 'p' is colinear with line segment 'i-next',
            // then check if it lies on segment. If it lies, return true,
            // otherwise false
            if (orientation(polygon[i], p, polygon[next]) == 0)
               return onSegment(polygon[i], p, polygon[next]);
 
            count++;
        }
        i = next;
    } while (i != 0);
 
    // Return true if count is odd, false otherwise
    return count&1;  // Same as (count%2 == 1)
}
 
// Driver program to test above functions
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + 
                pow(y2 - y1, 2) * 1.0);
}
int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,X1,X2,X3,X4,Y1,Y2,Y3,Y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>X1>>Y1>>X2>>Y2>>X3>>Y3>>X4>>Y4;
    float cx,cy,CX,CY;
    cx=(x1+x3)/2;
    cy=(y1+y3)/2;
    CX=(X1+X3)/2;
    CY=(Y1+Y3)/2;
    int k=0,c=0;
    Point polygon1[] = {{x1, y1}, {x2, y2}, {x3, y3}, {x4, y4}};
    int n = sizeof(polygon1)/sizeof(polygon1[0]);
    Point p = {X1, Y1};
    isInside(polygon1, n, p)? k=1: c=0;
    if(k!=1)
    {
        p = {X2, Y2};
        isInside(polygon1, n, p)? k=1: c=0;
    }
    if(k!=1)
    {
        p = {X3, Y3};
        isInside(polygon1, n, p)? k=1: c=0;
    }
    if(k!=1)
    {
        p = {X4, Y4};
        isInside(polygon1, n, p)? k=1: c=0;
    }
    Point polygon2[] = {{X1, Y1}, {X2, Y2}, {X3, Y3},{X4, Y4}};
    n = sizeof(polygon2)/sizeof(polygon2[0]);
    if(k!=1)
    {
        p = {x1, y1};
        isInside(polygon2, n, p)? k=1: c=0;
    }
    if(k!=1)
    {
        p = {x2, y2};
        isInside(polygon2, n, p)? k=1: c=0;
    }
    if(k!=1)
    {
        p = {x3, y3};
        isInside(polygon2, n, p)? k=1: c=0;
    }
    if(k!=1)
    {
        p = {x4, y4};
        isInside(polygon2, n, p)? k=1: c=0;
    }
    float s,S,D;
    s=distance(x1,y1,x2,y2);
    S=distance(X1,Y1,X2,Y2);
    D=distance(cx,cy,CX,CY);
    float r2=pow(2,0.5);
    if(k!=1)
    {
        if(D<s/r2+S/2&&D<S/r2+s/2)
        {
            k=1;
        }
    }
    if(k==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}