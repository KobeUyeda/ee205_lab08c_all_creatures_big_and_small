///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file animal.h
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date 03_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_LAB08C_ALL_CREATURES_BIG_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_BIG_AND_SMALL_ANIMAL_H
#include <string>

enum Genders {UNKNOWN_GENDER, MALE, FEMALE}; // Defines the enum used in the Animal Structure

class Animal{
private:
    static const std::string kingdom;
    std::string              species;
    enum Genders             gender;
    float                    weight;

public:
    Animal(const std::string Species);
    Animal(const std::string Species, const enum Genders Gender);
    Animal(const std::string Species, const enum Genders Gender, const float Weight);
    Animal(const std::string Species, const float Weight);

public:
    static const std::string getKingdom();
    std::string getSpecies();
    enum Genders getGender();
    void setGender(enum Genders newGender); // Previous gender has to be unknown to use this method
    float getWeight();
    void setWeight(const float newWeight);

public:
    void printInfo();
    bool isValid();

};
#endif //EE205_LAB08C_ALL_CREATURES_BIG_AND_SMALL_ANIMAL_H
