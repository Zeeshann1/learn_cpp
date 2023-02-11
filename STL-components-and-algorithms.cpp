#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    // Vector Example
    vector<int> numbers = {10, 20, 30, 40, 50};
    cout << "The first element of the vector is: " << numbers[0] << endl;
    cout << "The last element of the vector is: " << numbers[numbers.size()-1] << endl;
    numbers.push_back(60);
    numbers.pop_back();
    cout << "The size of the vector is: " << numbers.size() << endl;

    // List Example
    list<int> numbers_list = {1, 2, 3, 4, 5};
    numbers_list.push_front(0);
    numbers_list.pop_back();
    cout << "The first element of the list is: " << numbers_list.front() << endl;
    cout << "The last element of the list is: " << numbers_list.back() << endl;
    cout << "The size of the list is: " << numbers_list.size() << endl;

    // Stack Example
    stack<int> numbers_stack;
    numbers_stack.push(10);
    numbers_stack.push(20);
    cout << "The top element of the stack is: " << numbers_stack.top() << endl;
    numbers_stack.pop();
    cout << "The size of the stack is: " << numbers_stack.size() << endl;

    // Queue Example
    queue<int> numbers_queue;
    numbers_queue.push(10);
    numbers_queue.push(20);
    cout << "The front element of the queue is: " << numbers_queue.front() << endl;
    cout << "The back element of the queue is: " << numbers_queue.back() << endl;
    numbers_queue.pop();
    cout << "The size of the queue is: " << numbers_queue.size() << endl;

    // Map Example
    map<string, int> numbers_map;
    numbers_map["one"] = 1;
    numbers_map["two"] = 2;
    cout << "The value of key 'one' is: " << numbers_map["one"] << endl;
    cout << "The value of key 'two' is: " << numbers_map["two"] << endl;
    cout << "The size of the map is: " << numbers_map.size() << endl;

    // Algorithm Example
    vector<int> nums = {30, 10, 20, 40};
    sort(nums.begin(), nums.end());
    cout << "The sorted vector is: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
