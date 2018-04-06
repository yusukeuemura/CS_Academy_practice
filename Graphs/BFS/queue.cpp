#include <iostream>
#include <queue>
using namespace std;

int main (int argc, char const* argv[])
{
        queue<int> q;

        q.push(1);
        q.push(2);

        cout << "q.empty: " << q.empty() << endl;
        cout << "q.front: " << q.front() << endl;
        q.pop();
        cout << "q.front: " << q.front() << endl;
        q.pop();
        cout << "q.front: " << q.front() << endl;
        cout << "q.empty: " << q.empty() << endl;

        return 0;
}
