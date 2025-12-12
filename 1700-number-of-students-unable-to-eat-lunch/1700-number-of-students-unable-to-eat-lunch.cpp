class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue <int> q ;
        queue <int> st;

        for(int i = 0 ; i < students.size() ; i++){

           q.push(students[i]);
           st.push(sandwiches[i]);
        }
        int count = 0;
        while(!q.empty()){
            while(!q.empty() && q.front() == st.front()  ){
                st.pop();
                q.pop();
                count = 0;

            }
            if (q.empty()) break;
            
            while( !q.empty() && q.front() != st.front()){
                count++;
                if(count >= q.size()) return q.size();

               int x = q.front();
               q.pop();
                q.push(x);
            }
        }
      return q.size();
        
    }
};