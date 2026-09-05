class StockSpanner {
public:
stack<pair<int , int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1 ; //starting me sabka sapn 1 hota hai khud ka 
        while(!st.empty() && st.top().first<=price){
            span = span + st.top().second;
            st.pop();
        }
        st.push({price,span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */