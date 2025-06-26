#include <bits/stdc++.h>
using namespace std;

class person // abstract class
{
private:
    string name;
    string id;
    double salary;

public:
    person();
    person(string, string, string);

    string getName() const;
    string getID() const;
    double getSalary() const;

    void setName(string);
    void setID(string);
    void setSalary(double);

    virtual void printinfo() const = 0;
};

class citizen : public person
{
private:
    int order_in_queue;
    bool emergency_state;
    string emergency_description;

public:
    citizen();
    citizen(string, string, double, int, bool, string);
    citizen(const citizen &);
    ~citizen();

    int getOrderInQueue();
    bool getEmergency();
    string getEmergencyDescription();

    void setOrderInQueue();
    void setEmergencyState();
    void setEmergencyDescription();

    void printinfo() const override;
};

class FireFighter : public person
{
private:
    string specialization;
    bool emergency_available;
    pair<int, int> *work_shift[2];

public:
    FireFighter();
    FireFighter(string, string, double, string, bool, pair<int, int> *);
    FireFighter(const FireFighter &);
    ~FireFighter();

    bool getAvailability();
    pair<int, int> *getWorkShift();
    string getSpecialization();

    void setAvailablity(bool);
    void setWorkShift(pair<int, int> *);
    void setSpecialization(string);

    void printinfo() const override;
};

class staff : public person
{
private:
    string department;

public:
    staff();
    staff(const staff &);
    staff(string, string, double, string);
    ~staff();

    string getDepartment();
    void setDepartment(string);

    void printinfo() const override;
};