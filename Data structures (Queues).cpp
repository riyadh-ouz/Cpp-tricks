/// 8- Data structures (Queues) 

/// see use Lists as Queues in Python

/// Queue
- FIFO

- push
- pop
- front
- size
- empty


#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(3);
    q.push(7);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    return 0;
}

/// Double-ended queue
#include <queue>

deque<int> q;

q.push_back(x)
q.push_front(x)
q.pop_back()
q.pop_front()
int x = q.back()
int x = q.front()