///*Write code for creating a player - 80%
//receive as input:
//name : string
//age : unsigned int
//HP: float
//Mana: float
//
//strength : unsigned char
//magic : unsigned char 
//dexterity : unsigned char 
//vitality : unsigned char 
//
//
//Write logic for distribution of a limited number of allowed attributes: 20%
//for example: 
//the player has 600 attribute points and needs to decide on which aspects to invest them*/
//
//#include <iostream>
//#include <string>
//
//
//int main()
//{
//    std::string name;
//    unsigned int age;
//    float hp = 0;
//    float mana = 0;
//    
//    int attPoints = 600;
//    int attNum = 0;
//    int p2Add = 0;
//    unsigned char strength = 0;
//    unsigned char magic = 0;
//    unsigned char dexterity = 0;
//    unsigned char vitality = 0;
//
//    std::cout << "Enter your character's name: ";
//    std::cin >> name;
//    std::cout << "Enter your character's age: ";
//    std::cin >> age;
//    std::cout << "Enter your character's max health points: ";
//    std::cin >> hp;
//    std::cout << "Enter your character's mana: ";
//    std::cin >> mana;
//
//    std::cout << "Great! \n\nNow spend all your attribute points on the next four attributes \nStrength\nMagic\nDexterity\nand Vitality";
//    std::wcout << "\nYou can only spend 255 points on each attribute!!!";
//    while (attPoints > 0)
//    {
//        std::cout << "\nYour current attribute points: " + std::to_string(attPoints);
//        std::cout << "\nOn which attribute would you like to spend points? \nenter:\n\"1\" for strength \n\"2\" for magic \n\"3\" for dexterity \n\"4\" for vitality\n";
//        std::cin >> attNum;
//        if (attNum < 0 || 4 < attNum)
//        {
//            std::cout << "Invalid number\n";
//            continue;
//        }
//        std::cout << "How many points would you like to add to this attribute?\n";
//        std::cin >> p2Add;
//        if (p2Add > 255 || attPoints - p2Add < 0)
//        {
//            std::cout << "Invalid number\n";
//            continue;
//        }
//
//        switch ((attNum))
//        {
//        case 1:
//            if (strength + p2Add > 255)
//            {
//                std::cout << "Invalid number\n";
//                break;
//            }
//            strength += p2Add;
//            attPoints -= p2Add;
//            std::cout << std::to_string(p2Add) + "points added to strength\n";
//            std::cout << "Current strength: " + std::to_string(strength) + "\n";
//            break;
//        case 2:
//            if (magic + p2Add > 255)
//            {
//                std::cout << "Invalid number\n";
//                break;
//            }
//            magic += p2Add;
//            attPoints -= p2Add;
//            std::cout << std::to_string(p2Add) + "points added to magic\n";
//            std::cout << "Current magic: " + std::to_string(magic) + "\n";
//            break;
//        case 3:
//            if (dexterity + p2Add > 255)
//            {
//                std::cout << "Invalid number\n";
//                break;
//            }
//            dexterity += p2Add;
//            attPoints -= p2Add;
//            std::cout << p2Add + "points added to dexterity\n";
//            std::cout << "Current dexterity: " + std::to_string(dexterity) + "\n";
//            break;
//        case 4:
//            if (vitality + p2Add > 255)
//            {
//                std::cout << "Invalid number\n";
//                break;
//            }
//            vitality += p2Add;
//            attPoints -= p2Add;
//            std::cout << p2Add + "points added to vitality\n";
//            std::cout << "Current vitality: " + std::to_string(vitality) + "\n";
//            break;
//        default:
//            std::cout << "The attribute you chose doesn't exists\n";
//            break;
//        }
//    }
//
//    std::cout << "\n\n\nThese are your character's overall stats:";
//    std::cout << "\nName: " + name;
//    std::cout << "\nAge: " + std::to_string(age);
//    std::cout << "\nMax Health: " + std::to_string(hp);
//    std::cout << "\nMana: " + std::to_string(mana);
//    std::cout << "\nStrength: " + std::to_string(strength);
//    std::cout << "\nMagic: " + std::to_string(magic);
//    std::cout << "\nDexterity: " + std::to_string(dexterity);
//    std::cout << "\nVitality: " + std::to_string(vitality);
//
//}
//
//
//
//
