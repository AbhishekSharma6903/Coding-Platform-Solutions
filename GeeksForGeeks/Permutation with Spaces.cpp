vector<string> permutation(string S){
      string op;
      op.push_back(S[0]);
      S.erase(S.begin()+0);
      vector<string> s;
      solve(op,S,s);
      return s;
    }
    void solve(string op,string ip,vector<string> &s)
    {
        if(ip.size()==0)
        { s.push_back(op);
          return ;
        }
        string op1=op;
        string op2=op;
        op1.push_back(' ');
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(op1,ip,s);
        solve(op2,ip,s);
        return ;
    }
