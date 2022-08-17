#include <iostream>
using namespace std;

class equipament {
private:
    string name;
    float weight;
    int tier;
    int classification;
    int arm;
public:
    equipament();
    equipament(string name, float wieght, int tier, int arm, int classification);
    string getName();
    float getWeight();
    int getTier();
    int getArm();
    int getClassification();
    void setName(string name);
    void setWeight(float weight);
    void setTier(int tier);
    void setArm(int arm);
    void setClassification(int classification);
};

equipament::equipament() {
    this->name = "";
    this->weight = 0.0;
    this->tier = 0;
    this->arm = 0;
    this->classification = 0;
}

equipament::equipament(string name, float weight, int tier, int arm, int classification) {
    this->name = name;
    this->weight = weight;
    this->tier = tier;
    this->arm = arm;
    this-> classification = classification;
}

string equipament::getName() {
    return this->name;
}

float equipament::getWeight() {
    return this->weight;
}

int equipament::getTier() {
    return this->tier;
}

int equipament::getArm() {
    return this->arm;
}

int equipament::getClassification() {
    return this->classification;
}

void equipament::setName(string name) {
    this->name = name;
}

void equipament::setWeight(float weight) {
    this->weight = weight;
}

void equipament::setTier(int tier) {
    this->tier = tier;
}

void equipament::setClassification(int classification) {
    this->classification = classification;
}

void equipament::setArm(int arm) {
    this->arm = arm;
}

class armor : public equipament {
private:
    int protectionPhysical;
    int protectionElements;
public:
    armor();
    armor(int protectionPhysical, int prtotectionElements);
    armor(int protectionPhysical, int prtotectionElements, string name, float weight, int tier, int arm, int classfication);
    void setProtectionPhyscial(int protectionPhysical);
    void setProtectionelements(int prtotectionElements);
    int getProtectionPhyscial();
    int getProtectionElements();
};

armor::armor(int protectionPhysical, int prtotectionElements) {
    this->protectionPhysical = 0;
    this->protectionElements = 0;
}

armor::armor(int protectionPhysical, int prtotectionElements, string name, float weight, int tier, int arm, int classification) :equipament(name, weight, tier, arm, classification) {
    this->protectionPhysical = 0;
    this->protectionElements = 0;
}

void armor::setProtectionelements(int protectionElements) {
    this->protectionElements = protectionElements;
}

void armor::setProtectionPhyscial(int protectionPhysical) {
    this->protectionPhysical = protectionPhysical;
}

int armor::getProtectionElements() {
    return this->protectionElements;
}

int armor::getProtectionPhyscial() {
    return this->protectionPhysical;
}
int main()
{
    cout << "Hello World!\n";
    equipament A("botinha fofinha", 33.0, 2, 10, 1);
    cout << "O nome do item é:" << A.getName() << endl;

    armor falcon(10, 10, "Falcon Plate", 188.00, 4, 18, 10);
    cout << "O nome do item é:" << falcon.getName() << endl;
    cout << "O peso do item é:" << falcon.getWeight() << endl;
    cout << "O tier do item é:" << falcon.getTier() << endl;
    cout << "A arm do item é:" << falcon.getArm() << endl;
    cout << "A classificação do item é:" << falcon.getClassification() << endl;
}
