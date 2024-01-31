class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int k = 0;
        int gct = 0;
        int cct = 0;
        int n = gas.size();
        for (int i = 0; i < n; i++)
        {

            gct += gas[i];
        }

        for (int i = 0; i < n; i++)
        {
            cct += cost[i];
        }

        if (gct >= cct)
        {
            for (int i = 0; i < n; i++)
            {
                if (gas[i] >= cost[i])
                {
                    int su = gas[i];

                    int j = i;
                    int count = 0;
                    do
                    {
                        int t = j % n;
                        if (j == n - 1)
                        {
                            t = 0;
                        }

                        j++;
                        count++;

                    } while (count < n - 1);
                    if (su >= 0)
                    {
                        k = i;
                        return k;
                        break;
                    }
                }
            }
        }
        else
        {
            k = -1;
            return k;
        }
    }
};