#include <unordered_set>

class MyHashSet {
private:
    std::unordered_set<int>v;
public:
    MyHashSet() {

    }

    void add(int key) {
        v.insert(key);
    }

    void remove(int key) {
        v.erase(key);
    }

    bool contains(int key) {
        return v.count(key) > 0;
    }

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */