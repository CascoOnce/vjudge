
// Casco_Once

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main (void){
    int students, hability;
    cin >> students;
    unordered_map<int, vector<int>> goods;
    for (int i = 0; i < students; i++){
        cin >> hability;
        goods[hability].push_back(i+1);
    }
    int maxTeam = min(goods[1].size(), min(goods[2].size(), goods[3].size()));
    cout << maxTeam << endl;
    int pos1 = 0, pos2 = 0, pos3 = 0;
    for (int i = 0; i < maxTeam; i++){
        cout << goods[1][i] << ' ' << goods[2][i] << ' ' << goods[3][i] << endl;
    }
    return 0;
}