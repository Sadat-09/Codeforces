#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct Player {
    string name;
    string team;
    int score = 0;
};

int main() {
    map<string, Player> players;
    vector<string> order;

    // Input first team
    string team1;
    cin >> team1;
    for (int i = 0; i < 5; ++i) {
        string name;
        cin >> name;
        order.push_back(name);
        players[name] = {name, team1};
    }

    // Input second team
    string team2;
    cin >> team2;
    for (int i = 0; i < 5; ++i) {
        string name;
        cin >> name;
        order.push_back(name);
        players[name] = {name, team2};
    }

    int q;
    cin >> q;

    // Process game events
    for (int i = 0; i < q; ++i) {
        string event;
        cin.ignore(); // Ignore newline character
        getline(cin, event);

        istringstream iss(event);
        string type, team, action;
        iss >> type >> team >> action;

        if (type == "Team") {
            int score = stoi(action);
            for (const auto& player_name : order) {
                Player& player = players[player_name];
                if (player.team == team) {
                    player.score += score;
                } else {
                    player.score -= score;
                }
            }
        } else {
            string replaced, replacement;
            iss >> replaced >> replacement;
            players[replacement] = players[replaced];
        }
    }

    // Output individual scores
    for (const auto& name : order) {
        const Player& player = players[name];
        cout << player.name << " (" << player.team << ") ";
        if (player.score > 0) {
            cout << "+";
        }
        cout << player.score << endl;
    }

    return 0;
}
