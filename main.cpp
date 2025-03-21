#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    set<int> unionSet, interSet;

    for (int num : set1) unionSet.insert(num);
    for (int num : set2) unionSet.insert(num);
    for (int num : set1) if (set2.count(num)) interSet.insert(num);

    cout << "Union: ";
    for (int num : unionSet) cout << num << " ";
    
    cout << "\nIntersection: ";
    for (int num : interSet) cout << num << " ";
    cout << endl;

    return 0;
}
