#include <iostream>
#include "LinkedQueue.hpp"

using namespace std;


int main()
{
    LinkedQueue<int> q1;

    try {
        cout << "=-=- Enqueueing 1 2 3 4 5 -=-=" << endl;
        for (int i = 1; i <= 5; i++) {
            q1.enqueue(i);
        }

        cout << "Front of queue is " << q1.front() << endl;
        cout << "Back of queue is " << q1.back() << endl;
        cout << "Length of queue is " << q1.getLength() << endl;

        cout << "=-=- Dequeueing -=-=" << endl;
        while (!q1.isEmpty()) {
            q1.dequeue();
            cout << "Length after dequeue is " << q1.getLength() << endl;
        }

        cout << "Empty? " << boolalpha << q1.isEmpty() << endl;
    }
    catch (string e) {
        cout << "Exception: " << e << endl;
    }

        cout << "=-=- Trying to break stuff -=-=" << endl;

        try {
            cout << "Return front when empty... ";
            cout << q1.front() << endl;
        }
        catch (string e) {
            cout << "Caught: " << e << endl;
        }

        try {
            cout << "Return back when empty... ";
            cout << q1.back() << endl;
        }
        catch (string e) {
            cout << "Caught: " << e << endl;
        }

        try {
            cout << "Try to dequeue when empty... ";
            q1.dequeue();
        }
        catch (string e) {
            cout << "Caught: " << e << endl;
        }

        cout << "=-=- Copy ctor -=-=" << endl;

        try {
        LinkedQueue<int> q2;
        q2.enqueue(10);
        q2.enqueue(20);
        q2.enqueue(30);

        LinkedQueue<int> q3(q2); // copy ctor

        cout << "Original queue front is " << q2.front() << endl;
        cout << "New copied front is " << q3.front() << endl;

        cout << "=-=- Assignment operator -=-=" << endl;

        q1 = q2;

        cout << "New front (used to be og queue) " << q1.front() << endl;

        LinkedQueue<string> qstring;

        qstring.enqueue("Bulbasaur");
        qstring.enqueue("Charmander");
        qstring.enqueue("Squirtle");

        cout << "Front pokemon " << qstring.front() << endl;
        cout << "Back pokemon " << qstring.back() << endl;

        cout << "Dequeuing strings:" << endl;
        while (!qstring.isEmpty()) {
            qstring.dequeue();
            cout << endl;
        }

    }
    catch (string e) {
        cout << "Unhandled exception: " << e << endl;
    }

    cout << "front: error, queue is empty, cannot access the front back:          error, queue is empty, cannot access the back A length: 1 A front: -5 A          back: -5 A length: 0 front: error, queue is empty, cannot access the front          back: error, queue is empty, cannot access the back A length: 10 A front:          0 A back: 9 A contains: 0 1 2 3 4 5 6 7 8 9  A is now empty B length: 10          B front: 0 B back: 9 B is now empty C length: 10 C front: 0 C back: 9";
    return 0;
}