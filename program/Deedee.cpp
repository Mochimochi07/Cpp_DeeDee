#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>

using namespace std;

bool contains(vector<string> v, string e) {
    for (auto a : v) {
        if (a == e) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(time(0));
    vector<string> opponents = {"Freddy"};
    vector<string> characters = {"Chica", "Bonnie", "Foxy","Goldy","Plushtrap"};
    vector<string> summoned;

    while (true) {
        cout << "DeeDee: Uh oh! How unfortunate. Uh oh! How unfortunate. I know how much you like to fight.\n";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "DeeDee: So I add a new contender to the night.\n";

        string newOpponent = characters[rand() % characters.size()];
        if (contains(summoned, newOpponent)) {
            continue;
        }
        summoned.push_back(newOpponent);
        opponents.push_back(newOpponent);
        cout << "A new challenger has been summoned!\n";
        cout << "Current opponents: ";
        for (auto opp : opponents) {
            cout << opp << " ";
        }
        cout << endl;
    }

    cout << "DeeDee: *Leaves*\n";
    return 0;
}
