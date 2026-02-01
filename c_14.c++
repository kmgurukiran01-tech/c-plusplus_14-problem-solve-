#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(queue<int> &q, int k){
        //Write your code here...
        q.push(k);
    }
    int findFrequency(queue<int> &q, int k){
        //Write your code here
         int co=0;
        queue<int> temp=q;
       
        while(!temp.empty()){
            if (temp.front()==k){
                co++;
            }
            temp.pop();
        }
        if(co==k) return -1;
        return co;
    }
};