class Solution {
public:
    string interpret(string command) {
        string res = "";
        
        for (int i = 0; i < command.size(); ++i) {
            switch (command[i]) {
                case 'G':
                    res += 'G';
                    break;
                case ('('):
                    {
                        if (command[i + 1] == ')') {
                            i++;
                            res += 'o';
                        }
                        else {
                            i += 3;
                            res += "al";                            
                        }
                    }
                    break;
                default:
                    break;
            }
        }
        
        return res;
    }
};
