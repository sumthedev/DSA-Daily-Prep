#include <iostream>
#include <vector>
#include <string>

using namespace std;


//optimized way

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans)
{

    int n = mat.size();
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1)
    {
        return;
    }

    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1; //visit

    helper(mat, r + 1, c, path+"D", ans); // down
    helper(mat, r - 1, c, path+"U", ans);     // up
    helper(mat, r, c - 1, path+"L", ans);     // left
    helper(mat, r, c + 1, path+"R", ans);     // right

    mat[r][c] = 1; //unvisit

}

vector<string> findPath(vector<vector<int>> &mat)
{
    vector<string> ans;
    string path = " ";
    int n = mat.size();

    helper(mat, 0, 0, path, ans);

    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};

    vector<string> ans = findPath(mat);

    for (string path : ans)
    {
        cout << path << "";
    }
    cout << endl;
}



































// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &vis)
// {

//     int n = mat.size();
//     if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true)
//     {
//         return;
//     }

//     if (r == n - 1 && c == n - 1)
//     {
//         ans.push_back(path);
//         return;
//     }

//     vis[r][c] = true;

//     helper(mat, r + 1, c, path+"D", ans, vis); // down
//     helper(mat, r - 1, c, path+"U", ans, vis);     // up
//     helper(mat, r, c - 1, path+"L", ans, vis);     // left
//     helper(mat, r, c + 1, path+"R", ans, vis);     // right

//     vis[r][c] = false;

// }

// vector<string> findPath(vector<vector<int>> &mat)
// {
//     vector<string> ans;
//     string path = " ";
//     int n = mat.size();
//     vector<vector<bool>> vis(n, vector<bool>(n, false));

//     helper(mat, 0, 0, path, ans, vis);

//     return ans;
// }

// int main()
// {
//     vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};

//     vector<string> ans = findPath(mat);

//     for (string path : ans)
//     {
//         cout << path << "";
//     }
//     cout << endl;
// }