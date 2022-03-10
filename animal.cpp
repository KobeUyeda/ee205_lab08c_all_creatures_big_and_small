///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// @brief ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file animal.cpp
/// @version 1.0
///
/// @author Kobe Uyeda <kobek@hawaii.edu>
/// @date 03_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "animal.h"

// Define the const Kingdom here
const std::string Animal::kingdom = "Animalia";

// Animal Class Constructors
Animal::Animal(const std::string Species) {
    species = Species;
}
Animal::Animal(const std::string Species, const float Weight) {
    species = Species;
    weight = Weight;
}
Animal::Animal(const std::string Species, const enum Genders Gender) {
    species = Species;
    gender = Gender;
}
Animal::Animal(const std::string Species, const enum Genders Gender, const float Weight) {
    species = Species;
    gender = Gender;
    weight = Weight;
}

// Animal Class methods
const std::string Animal::getKingdom() {
    return kingdom;
}

std::string Animal::getSpecies() {
    return species;
}

enum Genders Animal::getGender() {
    return gender;
}

void Animal::setGender(enum Genders newGender) {
    if (gender == 0){
        gender = newGender;
    }
}

float Animal::getWeight() {
    return weight;
}

void Animal::setWeight(const float newWeight) {
    if(newWeight > 0){
        weight = newWeight;
    }
}

void Animal::printInfo() {
    std::cout << "Animal Fields" << std::endl;
    std::cout << "  Kingdom = [" << kingdom << "]" << std::endl;
    std::cout << "  Species = [" << species << "]" << std::endl;
    std::cout << "  Weight = [" << weight << "]" << std::endl;
    std::cout << "  Gender = [" << gender << "]" << std::endl;
}

bool Animal::isValid() {
    if (weight <= 0 || species.length() == 0){
        return false;
    }
    return true;
}