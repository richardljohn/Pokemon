//Name: Richard John
//Code Name: Pokemon, I choose you!

#include <iostream>
using namespace std;


class Pokemon {
public:
    string name;
    int health;
    int attack;
    int defense;
    int speed;
    int SPD;
    int SPA;
    string type;
    
    void printname()
    {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Attack: " << attack << endl;
        cout << "Defense: " << defense << endl;
        cout << "Speed: " << speed << endl;
        cout << "Special Attack: " << SPA << endl;
        cout << "Special Defense: " << SPD << endl;
        cout << "Type: " << type << endl;
    }
    
    void TakeDmg(int damage)
    {
        health = (health - damage);
        if(damage < this->health)
        {
            this->health -=damage;
        }
        else
        {
            this->health = 0;
        }
    }
    
    
    void AttackOpp(Pokemon *opp){
        int dmg = this->attack - this->defense;
        cout << "The damage done is: " << dmg << endl;
        if(dmg > 0){
            opp->TakeDmg(dmg);
        }
        else
        {
            opp->TakeDmg(5);
        }
    }
};



int main()
{
    Pokemon Charmander;
    Charmander.name = "Charmander";
    Charmander.health = 39;
    Charmander.attack = 52;
    Charmander.defense = 43;
    Charmander.speed = 40;
    Charmander.SPA = 70;
    Charmander.SPD = 50;
    Charmander.type = "Fire";
    
    Pokemon Squirtle;
    Squirtle.name = "Squirtle";
    Squirtle.health = 44;
    Squirtle.attack = 48;
    Squirtle.defense = 40;
    Squirtle.speed = 30;
    Squirtle.SPA = 40;
    Squirtle.SPD = 50;
    Squirtle.type = "Water";
    
    Charmander.printname();
    Squirtle.printname();
  
    Charmander.AttackOpp(&Squirtle);
    Squirtle.AttackOpp(&Charmander);
    
    Charmander.printname();
    Squirtle.printname();
}
