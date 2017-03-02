#include <iostream>
#include <stack>
#include <queue>
#include <unordered_set>
#include <set>
#include <map>
#include <unordered_map>
#include <cstring>
#define all(c) c.begin(), c.end()
#define N 200020

typedef long long ll;


using namespace std;

struct node
{
    int x, y;   
    node(int a, int b)
    {
        x = a;
        y = b;
    }
};
int main()
{
    int fill[100][100];
    memset(fill, 0, sizeof(fill));
	fill[5][7] = 1;
    int result = 0;
    int x = 0, y = 0;
    
    stack<node> s;
    s.push(node(x, y));
    
    while (!s.empty())
    {
        node top = s.top();
        s.pop();
        
        if (top.x < 0 || top.x >= 100)
            continue;
        if (top.y < 0 || top.y >= 100)
            continue;
        if (fill[top.x][top.y])
            continue;
        
        fill[top.x][top.y] = true;
        result++;
        
        s.push(node(top.x + 1, top.y));
        s.push(node(top.x - 1, top.y));
        s.push(node(top.x, top.y + 1));
        s.push(node(top.x, top.y -1));
    }
    
    cout << "Result is " << result << endl;
    return 0;
     
}
