#include <iostream>
#include <string>
int main () {
    
    std::cout << "Enter Character Name : ";
    std::string CN;
    std::cin >> CN;
    std::cout << "Character Name : " << CN << '\n';

    std::cout << "Choose Gender of Character" << '\n';
    std::cout << "1. Male \n" << "2. Female\n";
    std::cout << "Enter Character Gender : ";
    int Gender; 
    std::cin >> Gender;
    if (Gender == 1) {
        std::cout << "Gender Male Chosen \n";
    }
    else if (Gender == 2) {
        std::cout << "Gender Female Chosen \n";
    }
    
    std::cout << "Choose Character Class" << '\n';
    std::cout << "1. Warrior \n" <<  "2. Knight \n" << "3. Wanderer \n" << "4. Theif \n" << "5. Bandit \n";
    std::cout << "6. Hunter \n" << "7. Sorcerer \n" << "8. PyroMancer \n" << "9. Cleric \n" << "10. Deprived \n";
while (true) {
    std::cout << "Enter Character Class Number : " ;
    int Class;
    std::cin >> Class;
    if (Class == 1) {
        std::cout << "Warrior Class Chosen \n";
        break;
    }
    else if (Class == 2) {
        std::cout << "Knight Class Chosen \n";
        break;
    }
    else if (Class == 3) {
        std::cout << "Wanderer Class Chosen \n";
        break;
    }
    else if (Class == 4) {
        std::cout << "Theif Class Chosen \n";
        break;
    }
    else if (Class == 5) {
        std::cout << "Bandit Class Chosen \n";
        break;
    }
    else if (Class == 6) {
        std::cout << "Hunter Class Chosen \n";
        break;
    }
    else if (Class == 7) {
        std::cout << "Sorcerer Class Chosen \n";
        break;
    }
    else if (Class == 8) {
        std::cout << "PyroMancer Class Chosen \n";
        break;
    }
    else if (Class == 9) {
        std::cout << "Cleric Class Chosen \n";
        break;
    }
    else if (Class == 10) {
        std::cout << "Deprived Class Chosen \n";
        break;
    }
    else {
        std::cout << "Invalied Choice \n\n";
    }
}

std::cout << "Gift Player" << '\n';
std::cout << "1. Gift Player \n" << "2. Leave \n";
while (true) {
    std::cout << "Do you want to gift player? : ";
    int Gift;
    std::cin >> Gift;
    if (Gift == 1) {
    std::cout << "Gift Given \n";
    break;
    }
    else if (Gift == 2) {
    std::cout << "Gift Not Given \n";
    break; 
    }
    else {
    std::cout << "Invalid Option \n\n";
    }
}
    std::cout << "Choose Character Physique" << '\n';
    std::cout << "1. Slim \n" << "2. Average \n" << "3. Big \n" << "4. Heavy \n";
while (true) {
    std::cout << "Enter Character Physique Number : ";
    int Physique;
    std::cin >> Physique;
    if (Physique == 1) {
    std::cout << "Slim Physique Chosen \n";
    break;
    }
    else if (Physique == 2) {
    std::cout << "Average Physique Chosen \n";
    break;
    }
    else if (Physique == 3) {
    std::cout << "Big Physique Chosen \n";
    break;
    }
    else if (Physique == 4) {
    std::cout << "Heavy Physique Chosen \n";
    break;
    }
    else {
    std::cout << "Invalid Choice \n\n";
    }
}

int Level = 0;
std::cout << "Player Level : " << Level << '\n';

int Health = 100;
std::cout << "Add Vitality" << '\n';
std::cout << "1. Yes \n" << "2. No \n";
while (true) {
    std::cout << "Enter Number : ";
    int Vitality;
    std::cin >> Vitality;
    if (Vitality == 1) {
        std::cout << "Added Vitality \n";
        break;
    }
    else if (Vitality == 2) {
        std::cout << "Vitality Not Added \n";
        break;
    }
    else {
        std::cout << "Invalid Choice \n\n";
    }
}  

std::cout << "Description : " << "Increases the number of attunement slots available  || limit : 40 ||" << '\n';
std::cout << "Enter Number of Attunement Slots : ";
int Attunement;
std::cin >> Attunement;
std::cout << Attunement << " Attunement Slots Added" << "\n";

std::cout << "Description : " << "Controls the player's Stamina, max Equip Load and resistance to Bleeding" << '\n';
std::cout << "Enter Level of Endurance : ";
int Endurance;
std::cin >> Endurance;
std::cout << "Endurance Level increased by : " << Endurance << '\n';

std::cout << "Description : " << "Determines your character's ability to wield Weapons, damage with strength scaling weapons, and physical defense" << '\n';
std::cout << "Enter the Amount of Strength : ";
int Strength;
std::cin >> Strength;
std::cout << Strength << " Strength Levels Added" << '\n';

std::cout << "Description : " << "Is an attribute for wielding advanced Weapons. Also reduces spellcasting time and damage from falling." << '\n';
std::cout << "Enter Dexterity Level : ";
int Dexterity;
std::cin >> Dexterity;
std::cout << "Dexterity Level : " << Dexterity << '\n';

std::cout << "Description : " << "boosts physical defense, fire protection, and poison resistance." << '\n';
std::cout << "Enter the Amount of Resistance : ";
int Resistance;
std::cin >> Resistance;
std::cout << "Resistance Level : " << Resistance << '\n' ;

std::cout << "Description : " << "determines your character's magic bonus, magic defense, and casting speed." << '\n';
std::cout << "Enter the Amount of Intelligence : ";
int Intelligence;
std::cin >> Intelligence;
std::cout << "IQ Level : " << Intelligence << '\n';

std::cout << "Description : " << "determines your character's lightning bonus, lightning defence, and casting speed" << '\n';
std::cout << "Enter the Faith Level : ";
int Faith;
std::cin >> Faith;
std::cout << "Faith Level Chosen : " << Faith << '\n';

std::cout << "Description : " << "game mechanic which controls various aspects of the game, both off- and online" << '\n';
std::cout << "Enter the Humanity Level : ";
int Humanity;
std::cin >> Humanity;
std::cout << "Humanity Level : " << Humanity << '\n';


}


