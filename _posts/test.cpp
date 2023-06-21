#include <bits/stdc++.h>
using namespace std;

class A {
  public:
    string name;
    // A() : name("Yes") {}
    A() { name = "Yes"; }
};

int main() {
    A a;
    cout << "In the case of declaration only, wheter <a> has been "
            "instantiated(i.e. have it called the "
            "constructor?): "
         << a.name << endl;
    string cout = "HI!"
                  "This is kafka"
                  " speaking to you~";
	std::cout << cout << endl;
    return 0;
}
// auto node = ListNode();

// cout << "prev: ";
// cout << node.ptr << endl;
// cout << "now: ";
// cout << &(node.a) << endl;
// cout << "test: " << node.test << endl;
// struct ListNode {
//     int val;
//     ListNode *next;
//     class A a, *ptr, *test;

//     ListNode() {
//         val = 0;
//         next = nullptr;
//         ptr = &a;
//         a = A(/*parameter list*/); // 这里是赋值，而不是【初始化】。
//                                    // test = &(A());
//     }
// };
// };