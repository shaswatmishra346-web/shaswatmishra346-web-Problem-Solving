class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> dict;
        for(const string& word : words)
            dict[word]++;    
        auto comp = [](const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            return a.second < b.second;
        };
        priority_queue<
            pair<int, string>,
            vector<pair<int, string>>,
            decltype(comp)> pq(comp);
        for(auto& i : dict) {
            string element = i.first;
            int freq = i.second;
            pair<int, string> curr = {freq, element};

            if(pq.size() < k) {
                pq.push(curr);
                continue;
            }
            //curr>top
            pq.push(curr);
            pq.pop();
        }
        vector<string> res;
        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};