class MyCalendar {
public:
    vector<pair<int,int>> a;
    MyCalendar() {
        
    }
    
    bool book(int s, int e) {
        pair<int,int> p=make_pair(s,e);
        if(a.empty())
        {
            a.push_back(p);
            return true;
        }
        else
        {
            for(auto t: a)
            {
                if((s>=t.first && s<t.second) || (e>t.first && e<t.second) || (s<=t.first && e>=t.second))
                {
                    return false;
                }
            }
        }
        a.push_back(p);
        return true;
    }
};
