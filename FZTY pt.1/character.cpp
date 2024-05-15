#include "character.h"

Character::Character(int, int, int, int, int, int, int, int, int, int, int)
    // Дополнительная инициализация и логика конструктора
{
    QPair <QString, int> temp = {"Нет", 0};
    job_list.append(temp);
    temp = {"Промоутер", 120};
    job_list.append(temp);
    temp = {"Курьер", 150};
    job_list.append(temp);
    temp = {"Билетный контролер", 170};
    job_list.append(temp);
    temp = {"Пиццмейкер", 200};
    job_list.append(temp);
    temp = {"Кассир", 240};
    job_list.append(temp);
    temp = {"Таксист", 550};
    job_list.append(temp);
    temp = {"Бармен", 800};
    job_list.append(temp);
    temp = {"Официант", 1100};
    job_list.append(temp);
    temp = {"Администратор ресторана", 1600};
    job_list.append(temp);
    temp = {"Заведующий рестораном", 2200};
    job_list.append(temp);
    temp = {"Директор ресторана", 3000};
    job_list.append(temp);
    temp = {"Менеджер по продажам", 1700};
    job_list.append(temp);
    temp = {"Старший менеджер", 2200};
    job_list.append(temp);
    temp = {"Супервайзер", 2700};
    job_list.append(temp);
    temp = {"Начальник отдела продаж", 3200};
    job_list.append(temp);
    temp = {"Босс в компании по продажам", 4000};
    job_list.append(temp);
    temp = {"Копирайтер", 2800};
    job_list.append(temp);
    temp = {"Программист", 3200};
    job_list.append(temp);
    temp = {"Верстальщик", 3600};
    job_list.append(temp);
    temp = {"Веб-дизайнер", 4000};
    job_list.append(temp);
    temp = {"Главный программист", 4200};
    job_list.append(temp);
    temp = {"Администратор веб проектов", 4500};
    job_list.append(temp);
    temp = {"Начальник  IT студии", 4700};
    job_list.append(temp);
    temp = {"Директор IT студии", 5400};
    job_list.append(temp);
    temp = {"Бухгалтер", 4400};
    job_list.append(temp);
    temp = {"Помощник аудитора", 5200};
    job_list.append(temp);
    temp = {"Аудитор", 5800};
    job_list.append(temp);
    temp = {"Главный бухгалтер", 6200};
    job_list.append(temp);
    temp = {"Ведущий аудитор", 8000};
    job_list.append(temp);
    temp = {"Бизнес консультант", 9000};
    job_list.append(temp);
    temp = {"Бизнес менеджер", 11000};
    job_list.append(temp);
    temp = {"Начальник отдела финансовых консультаций", 20000};
    job_list.append(temp);

    temp = {"Нет", 0};
    food_list.append(temp);
    temp = {"Бесплатная еда на работе", 0};
    food_list.append(temp);
    temp = {"Бургер и бесплатная еда на работе", 100};
    food_list.append(temp);
    temp = {"Бургер, картошка фри и газировка", 200};
    food_list.append(temp);
    temp = {"Фаст фуд с супермаркета", 500};
    food_list.append(temp);
    temp = {"Дешевое кафе", 750};
    food_list.append(temp);
    temp = {"Домашняя еда", 1300};
    food_list.append(temp);
    temp = {"Еда в дорогом ресторане", 2500};
    food_list.append(temp);

    temp = {"Нет", 0};
    clothes_list.append(temp);
    temp = {"кеды, шорты и майка", 10};
    clothes_list.append(temp);
    temp = {"Джинсы, кроссовки и майка", 50};
    clothes_list.append(temp);
    temp = {"Дешевая одежда с рынка", 150};
    clothes_list.append(temp);
    temp = {"Ботинки, штаны, свитер", 200};
    clothes_list.append(temp);
    temp = {"Новая одежда", 500};
    clothes_list.append(temp);
    temp = {"Костюм с галстуком", 1500};
    clothes_list.append(temp);

    temp = {"Нет", 0};
    housing_list.append(temp);
    temp = {"Общежитие", 100};
    housing_list.append(temp);
    temp = {"Отдельная комната", 200};
    housing_list.append(temp);
    temp = {"Дешевые апартаменты", 450};
    housing_list.append(temp);
    temp = {"Апартаменты среднего класса", 800};
    housing_list.append(temp);
    temp = {"Комфортные апартаменты", 1000};
    housing_list.append(temp);
    temp = {"Комфортная квартира в центре города", 1800};
    housing_list.append(temp);
    temp = {"Маленький дом за городом", 3600};
    housing_list.append(temp);
    temp = {"Средний дом на окраине города", 4500};
    housing_list.append(temp);

    temp = {"Нет", 0};
    relationship_list.append(temp);
    temp = {"Девушка", 100};
    relationship_list.append(temp);
    temp = {"Жена", 1200};
    relationship_list.append(temp);
    temp = {"Жена + ребенок", 1600};
    relationship_list.append(temp);
    temp = {"Жена + 2 ребенка", 2500};
    relationship_list.append(temp);

    temp = {"Нет", 0};
    education_list.append(temp);
    temp = {"Водительские курсы", 83}; //6 m
    education_list.append(temp);
    temp = {"Колледж", 278}; //2 m
    education_list.append(temp);
    temp = {"Курсы менеджера продаж", 1500}; // 2m
    education_list.append(temp);
    temp = {"Курсы управления персоналом", 700}; // 6m
    education_list.append(temp);
    temp = {"Курсы программирования", 333}; // 12m
    education_list.append(temp);
    temp = {"Курсы дизайнера", 1000}; // 2m
    education_list.append(temp);
    temp = {"Институт экономики и финансов", 833}; // 36m
    education_list.append(temp);
    temp = {"Бизнес школа", 1000}; // 6m
    education_list.append(temp);
    temp = {"Бизнес тренинг", 2000}; // 2m
    education_list.append(temp);

    temp = {"Нет", 0};
    transport_list.append(temp);
    temp = {"40-летняя машина", 1300};
    transport_list.append(temp);
    temp = {"30-летняя машина", 3500};
    transport_list.append(temp);
    temp = {"10-летняя машина", 7000};
    transport_list.append(temp);
    temp = {"Б/у машина", 13000};
    transport_list.append(temp);
    temp = {"Новая машина", 15000};
    transport_list.append(temp);
    temp = {"Пикап", 23000};
    transport_list.append(temp);

    temp = {"Выйти на прогулку", 0};
    happiness_list.append(temp);
    temp = {"Выпить пива", 3};
    happiness_list.append(temp);
    temp = {"Собраться с друзьями", 9};
    happiness_list.append(temp);
    temp = {"Сходить в кино", 20};
    happiness_list.append(temp);
    temp = {"Сыграть в бильярд", 50};
    happiness_list.append(temp);
    temp = {"Сыграть в боулинг", 80};
    happiness_list.append(temp);
    temp = {"Посетить концерт", 200};
    happiness_list.append(temp);
    temp = {"Принять антидепрессанты", 1000};
    happiness_list.append(temp);
    temp = {"Сходить на скачки", 3000};
    happiness_list.append(temp);

    temp = {"Пробежка", 0};
    health_list.append(temp);
    temp = {"Поиграть в футбол", 5};
    health_list.append(temp);
    temp = {"Посетить поликлинику", 30};
    health_list.append(temp);
    temp = {"Сходить на обследование", 100};
    health_list.append(temp);
    temp = {"Съездить в санаторий", 500};
    health_list.append(temp);
    temp = {"Слетать на отдых", 1300};
    health_list.append(temp);
    temp = {"Лечь в больницу", 2500};
    health_list.append(temp);

}

    void Character::EarnMoneyForJob(int JobIndex) {
        money += job_list[JobIndex].second;
    }

    void Character::SpendMoneyOnClothes(int ClothesIndex) {
        money -= clothes_list[ClothesIndex].second;
    }

    void Character::SpendMoneyOnHousing(int HousingIndex) {
        money -= housing_list[HousingIndex].second;
    }

    void Character::SpendMoneyOnFood(int FoodIndex) {
        money -= food_list[FoodIndex].second;
    }

    void Character::SpendMoneyOnTransport(int TransportIndex) {
        money -= transport_list[TransportIndex].second;
    }

    void Character::SpendMoneyOnEducation(int EducationIndex) {
        money -= education_list[EducationIndex].second;
    }

    void Character::SpendMoneyOnRelationship(int RelationshipIndex) {
        money -= relationship_list[RelationshipIndex].second;
    }

    void Character::Happ1() {
        happiness += 1;
        money -= happiness_list[0].second;
    }
    void Character::Happ2() {
        happiness += 3;
        money -= happiness_list[1].second;
    }
    void Character::Happ3() {
        happiness += 5;
        money -= happiness_list[2].second;
    }
    void Character::Happ4() {
        happiness += 7;
        money -= happiness_list[3].second;
    }
    void Character::Happ5() {
        happiness += 10;
        money -= happiness_list[4].second;
    }
    void Character::Happ6() {
        happiness += 13;
        money -= happiness_list[5].second;
    }
    void Character::Happ7() {
        happiness += 18;
        money -= happiness_list[6].second;
    }
    void Character::Happ8() {
        happiness += 32;
        money -= happiness_list[7].second;
    }
    void Character::Happ9() {
        happiness += 45;
        money -= happiness_list[8].second;
    }

    void Character::Health1() {
        health += 2;
        money -= health_list[0].second;
    }
    void Character::Health2() {
        health += 4;
        money -= health_list[1].second;
    }
    void Character::Health3() {
        health += 7;
        money -= health_list[2].second;
    }
    void Character::Health4() {
        health += 9;
        money -= health_list[3].second;
    }
    void Character::Health5() {
        health += 15;
        money -= health_list[4].second;
    }
    void Character::Health6() {
        health += 29;
        money -= health_list[5].second;
    }
    void Character::Health7() {
        health += 40;
        money -= health_list[6].second;
    }


