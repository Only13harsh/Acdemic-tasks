#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
private:
    string name;
    int health;
public:
    Player(const string& playerName, int playerHealth) : name(playerName), health(playerHealth) {}
    const string& getName() const { return name; }
    int getHealth() const { return health; }
    void takeDamage(int damage) { health -= damage; }
    bool isAlive() const { return health > 0; }
};

void attack(Player& attacker, Player& target) {
    int damage = rand() % 20 + 1;
    cout << attacker.getName() << " attacks " << target.getName() << " for " << damage << " damage." << endl;
    target.takeDamage(damage);
}

int main() {
    srand(time(nullptr));

    Player player1("Player 1", 100);
    Player player2("Player 2", 100);

    while (player1.isAlive() && player2.isAlive()) {
        attack(player1, player2);
        if (!player2.isAlive()) break;
        attack(player2, player1);
        if (!player1.isAlive()) break;
    }

    if (player1.isAlive()) {
        cout << player1.getName() << " wins!" << endl;
    } else if (player2.isAlive()) {
        cout << player2.getName() << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
