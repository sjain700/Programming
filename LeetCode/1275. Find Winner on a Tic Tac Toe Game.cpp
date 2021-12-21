class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
      /* Read second approach directly from solution */
        vector<int> a(3,0);
        vector<int> b(3,0);
        int dia = 0;
        int anti = 0;
        
        int count = 0;
        
        for(int i = 0 ; i < moves.size(); i++)
        {
            if(count % 2 == 0)
            {
                a[moves[i][0]]++;
                b[moves[i][1]]++;
                if(moves[i][0] + moves[i][1] == 2)
                {
                    anti++;
                }
                if(moves[i][0] == moves[i][1])
                {
                    dia++;
                }
            }
            else
            {
                a[moves[i][0]]--;
                b[moves[i][1]]--;
                 if(moves[i][0] + moves[i][1] == 2)
                {
                    anti--;
                }
                if(moves[i][0] == moves[i][1])
                {
                    dia--;
                }
            }
            
            if(a[0] == 3 || a[1] == 3 || a[2] == 3 || dia == 3 || anti == 3 || b[0] == 3 || b[1] == 3 || b[2] == 3)
                return "A";
            else if(a[0] == -3 || a[1] == -3 || a[2] == -3 || dia == -3 || anti == -3 || b[0] == -3 || b[1] == -3 || b[2] == -3)
                return "B";
            
           count++; 
        }
        if(moves.size()<9)
            return "Pending";
        else
            return "Draw";
        
        
        
    }
};