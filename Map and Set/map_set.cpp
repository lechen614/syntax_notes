using namespace std;
#include <iostream>
#include <unordered_map>
#include <map>
// #include <iterator>

int main() {
    // UMap initialization:
    // 1. default constructor, empty map
    unordered_map<string, int> umap;
    // 2. 
    umap["test1"] = 10;
    umap["test2"] = 20;
    umap["test3"] = 30;

    for (auto& item : umap) {
        cout <<"key: " << item.first << ", value: " << item.second << endl;
    }

    unordered_map<string, int> umap2 = umap;
    cout << "address of umap is: " << &umap << " address of umap2 is: " << &umap2 << endl;

    if (umap == umap2) {
        cout << "they are equal" << endl;
    } else {
        cout << "they are not equal" << endl;
    }

    for (auto& item : umap2) {
        cout <<"key: " << item.first << ", value: " << item.second << endl;
    }

}