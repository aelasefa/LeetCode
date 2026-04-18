class HashTable{
private:
    int size;
    vector<list<int>> table;
public:
    HashTable(int s)
    {
        size = s;
        table.resize(size);
    }
    int HashFunction(int key)
    {
        return ((key * 31) % size + size) % size;
    }
    bool insert(int key)
    {
        int index = HashFunction(key);
        for (int x : table[index])
        {
            if (x == key) return false;
        }
        table[index].push_back(key);
        return true;
    }

};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        HashTable ht(101);
        for (int num : nums){
            if (!ht.insert(num)) return true;
        }
        return false;
    }
};