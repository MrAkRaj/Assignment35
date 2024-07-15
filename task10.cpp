#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename K, typename V>
class HashTable {
    vector<list<pair<K, V>>> table;
    int size;

    int hashFunction(K key) {
        return static_cast<int>(key) % size;
    }

public:
    HashTable(int s) : size(s) {
        table.resize(size);
    }

    void insert(K key, V value) {
        int index = hashFunction(key);
        table[index].push_back(make_pair(key, value));
    }

    V get(K key) {
        int index = hashFunction(key);
        for (auto &pair : table[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        throw out_of_range("Key not found");
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << "Bucket " << i << ": ";
            for (auto &pair : table[i]) {
                cout << "[" << pair.first << ": " << pair.second << "] ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable<int, string> hashTable(10);

    hashTable.insert(1, "One");
    hashTable.insert(2, "Two");
    hashTable.insert(12, "Twelve");

    hashTable.display();
    cout << "Value for key 2: " << hashTable.get(2) << endl;

    return 0;
}
