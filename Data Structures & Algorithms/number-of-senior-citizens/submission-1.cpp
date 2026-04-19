class Solution {
public:
    int countSeniors(vector<string>& details) {
        string age = "";
        int count = 0;
        for (int i = 0; i < details.size(); i++){
            age += details[i][11];
            age += details[i][12];
            int intAge = std::stoi(age);
            if (intAge > 60)
                count++;
            age = "";
        }
        return count;
    }
};