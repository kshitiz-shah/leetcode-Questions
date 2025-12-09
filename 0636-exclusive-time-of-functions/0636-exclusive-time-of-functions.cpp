class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {

    //     stack <pair<int, int>> st ;

    //     vector <int> ans(n);

    //     for(int  i = 0 ;i < logs.size();i++){
    //         int firstcolon =  logs[i].find(':');
    //           int secondcolon =  logs[i].rfind(':');
    //           pair<int ,int> p ;

             
    //           char x = logs[i][firstcolon + 1];

    //           if(x == 's'){
                
    //              int id  = stoi(logs[i].substr(0,firstcolon));
    //           int lasttime = stoi(logs[i].substr(lastcolon + 1));
            
    //           st.push(id , lasttime);

    //           }
    //           else{
    //             int id  = stoi(logs[i].substr(0,firstcolon));
    //           int lasttime = stoi(logs[i].substr(lastcolon + 1));

    //             p = st.top();
    //             int first = p.first ;
    //             int second = p.second ;

    //             ans[first] += lasttime -  p.second ;
    //             st.pop();

    //           }

    //     }
       
    // return ans;


        stack<pair<int, int>> st;   // {function_id, start_time}
        vector<int> ans(n, 0);
        int prevTime = 0;           // last processed timestamp

        for (string &log : logs) {

            int firstcolon = log.find(':');
            int secondcolon = log.rfind(':');

            int id = stoi(log.substr(0, firstcolon));
            string type = log.substr(firstcolon + 1, secondcolon - firstcolon - 1);
            int time = stoi(log.substr(secondcolon + 1));

            if (type == "start") {

                if (!st.empty()) {
                    // Add time executed by the function currently on top
                    ans[st.top().first] += time - prevTime;
                }

                // Push new function
                st.push({id, time});
                prevTime = time;
            }
            else { // "end"

                // End the current top function
                ans[st.top().first] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1; // Execution continues AFTER this time
            }
        }

        return ans;
    }
};

