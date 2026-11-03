#include <iostream>
using namespace std;

#define SIZE 5

class Queue
{
    int arr[SIZE];
    int front, rear;

public:

    Queue()
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if(rear == SIZE - 1)
        {
            cout << "Queue is Full\n";
            return;
        }

        if(front == -1)
            front = 0;

        rear++;
        arr[rear] = x;
    }

    void dequeue()
    {
        if(front == -1)
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if(front == rear)
            front = rear = -1;
        else
            front++;
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Queue is Empty\n";
            return;
        }

        for(int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue elements: ";
    q.display();

    q.dequeue();

    cout << "After deletion: ";
    q.display();

    return 0;
}
