class Solution
{
public:
vector<string> valid;
    void generate(string s, int o, int c)
    {
        if (o == 0 && c == 0)
        {
            valid.push_back(s);
            return;
        }
        if (o > 0)
        {
        
        s.push_back('(');
        generate(s, o - 1, c);
        s.pop_back();}
    
    if (c > 0)
    {
        if (o < c)
        {
            s.push_back(')');
            generate(s, o, c - 1);
            s.pop_back();
        }
    }}

 vector<string> generateParenthesis(int n)
{
    string s;
    generate(s, n, n);
    return valid;
}
}
;