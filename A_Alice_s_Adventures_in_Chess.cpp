#include <iostream>
#include <string>
#include <set>
using namespace std;

bool canMeetRedQueen(int n, int a, int b, string s)
{
    int x = 0, y = 0;
    set<pair<int, int>> visitedPositions;
    visitedPositions.insert({x, y});

    for (char move : s)
    {
        if (move == 'N')
            y++;
        else if (move == 'E')
            x++;
        else if (move == 'S')
            y--;
        else if (move == 'W')
            x--;

        visitedPositions.insert({x, y});
    }

    if (visitedPositions.count({a, b}) > 0)
    {
        return true;
    }

    int dx = x, dy = y;

    if (dx == 0 && dy == 0)
        return false;

    while (abs(x) <= 10 && abs(y) <= 10)
    {
        x += dx;
        y += dy;
        if (x == a && y == b)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        if (canMeetRedQueen(n, a, b, s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
