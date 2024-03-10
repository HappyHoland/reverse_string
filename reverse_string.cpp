#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, ans = "";
    int strSize;
    
    
    cin >> str;
    
    for (int i = str.size() - 1; i >= 0; i--) {
        ans.push_back(str[i]);
    }
    
    cout << ans << endl;
    
    return 0;
}
