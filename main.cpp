// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "hello, this is lin editing!" << endl;
//     cout << "What is your favorate editor?" << endl;
//     cout << "of course, Zed!" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>

// class Transform
// {
//     public:
//     int operator()(int v)
//     {
//         return v;
//     }
// };

// void print1(int val)
// {
//     cout << val << " ";
// }

// class print2
// {
//     public:
//     void operator()(int val)
//     {
//         cout << val << " ";
//     }
// };

// class Person
// {
//     public:
//     Person(string name, int age)
//     {
//        this->name = name;
//        this->age = age;
//     }

//     bool operator==(const Person &p)
//     {
//         if (this->name == p.name && this->age == p.age)
//         {
//             return true;
//         }
//         return false;
//     }
//     string name;
//     int age;
// };

// void test1()
// {
//     vector<int> v;
//     for (int i = 0; i < 10; i++)
//     {
//         v.push_back(i);
//     }

//     // for_each(v.begin(), v.end(), print01);
//     // cout << endl;

//     // for_each(v.begin(), v.end(), print02());
//     // cout << endl;
//     // vector<int> vTarget;
//     // vTarget.resize(v.size());
//     // transform(v.begin(), v.end(), vTarget.begin(), Transform());

//     // for_each(vTarget.begin(), vTarget.end(), print2());
//     // cout << endl;
//     vector<int>::iterator it = find(v.begin(), v.end(), 50);
//     if (it == v.end())
//     {
//         cout << "not find" << endl;
//     }
//     else
//     {
//         cout << "find" << endl;
//     }
// }
// void test2()
// {
//     vector<Person> v;
//     Person p1("a", 10);
//     Person p2("b", 20);
//     Person p3("c", 30);
//     Person p4("d", 40);

//     v.push_back(p1);
//     v.push_back(p2);
//     v.push_back(p3);
//     v.push_back(p4);

//     vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//     if (it == v.end())
//     {
//         cout << "not find" << endl;
//     }
//     else
//     {
//         cout << "find" << endl;
//         cout << "name: " << it->name << " age: " << it->age << endl;
//     }
// }

// int main()
// {
//     test1();
//     test2();
//     return 0;
// }
// //
// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>

// class GreaterFive
// {
//     public:
//     bool operator()(int val)
//     {
//         return val > 5;
//     }
// };

// void test1()
// {
//    vector<int> v;
//    for (int i = 0; i < 10; i++)
//    {
//        v.push_back(i);
//    }

//    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());

//    if (it == v.end())
//    {
//        cout << "not find" << endl;
//    }
//    else {
//        cout << "find" << endl;
//        cout << "val: " << *it << endl;
//    }
// }
// class Person
// {
//     public:
//     Person(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     string name;
//     int age;
// };

// class Greater20
// {
//     public:
//     bool operator()(Person &p)
//     {
//         return p.age > 20;
//     }
// };

// void test2()
// {
//     vector<Person> v;
//     Person p1("a", 10);
//     Person p2("b", 20);
//     Person p3("c", 30);
//     Person p4("d", 40);

//     v.push_back(p1);
//     v.push_back(p2);
//     v.push_back(p3);
//     v.push_back(p4);

//     vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//     if (it == v.end())
//     {
//         cout << "not find" << endl;
//     }
//     else {
//         cout << "find" << endl;
//         cout << "Name:" << it->name << " Age: " << it->age << endl;
//     }
// }

// int main()
// {
//     test1();
//     test2();
//     return 0;
// }
//
// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>


// void test1()
// {
    // vector<int> v;

    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(0);
    // v.push_back(3);
    // v.push_back(1);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(3);

    // vector<int>::iterator pos = adjacent_find(v.begin(), v.end());

    // if (pos == v.end())
    // {
    //     cout << "not adjacent find" << endl;
    // }
    // else {
    //     cout << "adjacent find:" << *pos << endl;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }

    // bool ret = binary_search(v.begin(), v.end(), 9);

    // if (ret)
    // {
    //     cout << "find" << endl;
    // }
    // else {
    //     cout << "not find" << endl;
    // }
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(40);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(20);
//     v.push_back(40);

//     int num = count(v.begin(), v.end(), 40);
//     cout << "count = " << num << endl;
// }

// class Person
// {
//     Person(string name, int age)
//     {
//        this->m_Name = name;
//        this->m_Age = age;
//     }
//     string m_Name;
//     int m_Age;
// };

// class Greater20
// {
//     public:
//     bool operator()(int val)
//     {
//         return val > 20;
//     }
// };

// void test1()
// {
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(40);
//     v.push_back(30);
//     v.push_back(20);
//     v.push_back(40);
//     v.push_back(20);

//     int num = count_if(v.begin(), v.end(), Greater20());
//     cout << "count = " << num << endl;
// }

// void myPrint(int val)
// {
//     cout << val << " ";
// }

// void test1()
// {
//     // vector<int> v;
//     // v.push_back(10);
//     // v.push_back(30);
//     // v.push_back(50);
//     // v.push_back(20);
//     // v.push_back(40);

//     // sort(v.begin(), v.end());
//     // for_each(v.begin(), v.end(), myPrint);
//     // cout << endl;

//     // sort(v.begin(), v.end(), greater<int>());
//     // for_each(v.begin(), v.end(), myPrint);
//     // cout << endl;
//     // srand((unsigned int)time(NULL));
//     // vector<int> v;
//     // for (int i = 0; i < 10; i++)
//     // {
//     //     v.push_back(i);
//     // }

//     // random_shuffle(v.begin(), v.end());
//     // for_each(v.begin(),v.end(), myPrint);
//     // cout << endl;
//     vector<int> v1;
//     vector<int> v2;

//     for(int i = 0; i < 10; i++)
//     {
//         v1.push_back(i);
//         v2.push_back(i + 1);
//     }

//     vector<int> vTarget;
//     vTarget.resize(v1.size(), v2.size());
//     merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//     for_each(vTarget.begin(), vTarget.end(), myPrint);
//     cout << endl;
// }

// void test1()
// {
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(30);
    // v.push_back(50);
    // v.push_back(20);
    // v.push_back(40);

    // cout << "before reverse: " << endl;
    // for_each(v.begin(), v.end(), myPrint);
    // cout << endl;

    // cout << "After reverse: " << endl;
    // reverse(v.begin(), v.end());
    // for_each(v.begin(), v.end(), myPrint);
    // cout << endl;
    // vector<int> v1;
    // for (int i = 0; i < 10; i++)
    // {
    //     v1.push_back(i);
    // }

    // vector<int> v2;
    // v2.resize(v1.size());
    // copy(v1.begin(), v1.end(), v2.begin());

    // for_each(v1.begin(), v1.end(), myPrint);
    // cout << endl;
    // for_each(v2.begin(), v2.end(), myPrint);
    // cout << endl;
// }

// #include <iostream>
// #include <numeric>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;

// class myPrint
// {
//     public:
//     void operator()(int val)
//     {
//         cout << val << " ";
//     }
// };

// class Greater30
// {
//     public:
//     bool operator()(int val)
//     {
//         return val >= 30;
//     }
// };
// void myPrint(int val)
// {
//     cout << val << " ";
// }

// void test1()
// {
//     // vector<int> v;
//     // v.push_back(10);
//     // v.push_back(40);
//     // v.push_back(20);
//     // v.push_back(40);
//     // v.push_back(30);
//     // v.push_back(50);
//     // v.push_back(20);
//     // v.push_back(30);

//     // cout << "before replace: " << endl;
//     // for_each(v.begin(), v.end(), myPrint());
//     // cout << endl;

//     // replace_if(v.begin(), v.end(), Greater30(), 3000);
//     // cout << "after replace: " << endl;
//     // for_each(v.begin(), v.end(), myPrint());
//     // cout << endl;
//     // vector<int> v1;
//     // vector<int> v2;

//     // for (int i = 0; i < 10; i++)
//     // {
//     //     v1.push_back(i);
//     //     v2.push_back(i + 100);
//     // }

//     // cout << "before swap: " << endl;
//     // for_each(v1.begin(), v1.end(), myPrint);
//     // cout << endl;

//     // for_each(v2.begin(), v2.end(), myPrint);
//     // cout << endl;

//     // cout << "-------" << endl;
//     // cout <<"after swap: " << endl;
//     // swap(v1, v2);
//     // for_each(v1.begin(), v1.end(), myPrint);
//     // cout << endl;

//     // for_each(v2.begin(), v2.end(), myPrint);
//     // cout << endl;
//     vector<int> v;

//     for (int i = 0; i <= 100; i++)
//     {
//         v.push_back(i);
//     }

//     int total = accumulate(v.begin(), v.end(), 0);
//     cout << "total = " << total << endl;
// }

// int main()
// {
//     test1();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include <algorithm>

// void myPrint(int val)
// {
//     cout << val << " ";
// }

// void test1()
// {
//     vector<int> v1;
//     vector<int> v2;

//     for (int i = 0; i < 10; i++)
//     {
//         v1.push_back(i);
//         v2.push_back(i + 5);
//     }

//     // vTarget.resize(min(v1.size(), v2.size()));
//     // vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

//     // for_each(vTarget.begin(), itEnd, myPrint);
//     // cout << endl;
//     // vector<int> vTarget;

//     // vTarget.resize(v1.size() + v2.size());

//     // vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

//     // for_each(vTarget.begin(), itEnd, myPrint);
//     // cout << endl;
//     vector<int> vTarget;
//     vTarget.resize(max(v1.size(), v2.size()));

//     vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//     for_each(vTarget.begin(), itEnd, myPrint);
//     cout << endl;

//     vector<int>::iterator itEnd1 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//     for_each(vTarget.begin(), itEnd1, myPrint);
//     cout << endl;
// }

// int main()
// {
//     test1();
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    cout << "use the vscode git" << endl;
    return 0;
}