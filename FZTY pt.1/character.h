#ifndef CHARACTER_H
#define CHARACTER_H
#include <QObject>

class Character
{

public:
    Character(int health, int happiness, int age, int money, int JobIndex, int HousingIndex, int ClothesIndex, int RelationshipIndex, int TransportIndex, int FoodIndex, int EducationIndex);
    

    int getHappiness() {return happiness;};
    int getHealth() {return health;}
    int getAge() {return age;}
    int getMoney() {return money;}
    int getJob() {return JobIndex;}
    int getHousing() {return HousingIndex;}
    int getClothes() {return ClothesIndex;}
    int getRelationship() {return RelationshipIndex;}
    int getTransport() {return TransportIndex;}
    int getFood() {return FoodIndex;}
    int getEducation() {return EducationIndex;}

    void EarnMoneyForJob(int JobIndex);
    void SpendMoneyOnFood(int FoodIndex);
    void SpendMoneyOnHousing(int HousingIndex);
    void SpendMoneyOnTransport(int TransportIndex);
    void SpendMoneyOnRelationship(int RelationshipIndex);
    void SpendMoneyOnClothes(int ClothesIndex);
    void SpendMoneyOnEducation(int EducationIndex);

    void Happ1();
    void Happ2();
    void Happ3();
    void Happ4();
    void Happ5();
    void Happ6();
    void Happ7();
    void Happ8();
    void Happ9();

    void Health1();
    void Health2();
    void Health3();
    void Health4();
    void Health5();
    void Health6();
    void Health7();


private:
    int happiness;
    int health;
    int age;
    int money;
    int JobIndex;
    int RelationshipIndex;
    int ClothesIndex;
    int TransportIndex;
    int EducationIndex;
    int FoodIndex;
    int HousingIndex;

    QList<QPair <QString, int>> job_list;
    QList<QPair <QString, int>> food_list;
    QList<QPair <QString, int>> clothes_list;
    QList<QPair <QString, int>> housing_list;
    QList<QPair <QString, int>> relationship_list;
    QList<QPair <QString, int>> transport_list;
    QList<QPair <QString, int>> education_list;
    QList<QPair <QString, int>> achievement_list;
    QList<QPair <QString, int>> happiness_list;
    QList<QPair <QString, int>> health_list;
    
};
#endif // CHARACTER_H
