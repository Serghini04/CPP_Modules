#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, input;
    cin >> n;
    vector<int> pro, m, p;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        if (input == 1)
            pro.push_back(i + 1);
        else if (input == 2)
            m.push_back(i + 1);
        else if (input == 3)
            p.push_back(i + 1);
    }
    cout << min(m.size(), min(pro.size(), p.size())) <<"\n";
    for (int i = 0; i < m.size() && i < pro.size() && i < p.size(); i++)
        cout << pro[i] << " " << m[i] << " " << p[i] << "\n";
    return 0;
}
