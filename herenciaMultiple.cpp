#include<iostream>
#include<string>
#include <iomanip> 

using namespace std;

class Vehicle {
    private:
        string brand;
        string model;
        float speed;
        string license;
        float maxLoad;
        int year;

    public:
        Vehicle(string b, string m, float s, string l, float ml, int y) 
        : brand(b), model(m), speed(s), license(l), maxLoad(ml), year(y) {}

        virtual void displayInfo() {
            cout << "\n============= VEHICLE DATA =============" << endl;
            cout << "\n[Vehicle] Brand: " << brand << endl;
            cout << "\n[Vehicle] Model: " << model << endl;
            cout << "\n[Vehicle] Speed: " << speed << endl;
            cout << "\n[Vehicle] License: " << license << endl;
            cout << "\n[Vehicle] Max load: " << maxLoad << endl;
            cout << "\n[Vehicle] Year: " << year << endl;
            cout << "\n============= VEHICLE DATA =============" << endl;
        }
};

class LandVehicle : virtual public Vehicle {
    private:
        string wheelsType;
        int wheelsNumber;
        string traction;
        string suspensionType;
        string brakesType;
        int passengerQuantity;

    public:
        LandVehicle(
            string b, 
            string m,
            float s,
            string l,
            float ml, 
            int y,
            string wt,
            int wn,
            string t,
            string sp,
            string bt,
            int pq
        ) : 
            Vehicle(b, m, s, l, ml, y),
            wheelsType(wt),
            wheelsNumber(wn),
            traction(t),
            suspensionType(sp),
            brakesType(bt),
            passengerQuantity(pq)
        {}

        void displayLandVehicle() {
            cout << "\n============= LAND VEHICLE DATA =============" << endl;
            cout << "\n[Land Vehicle] Wheels type: " << wheelsType << endl;
            cout << "\n[Land Vehicle] WheelsNumber: " << wheelsNumber << endl;
            cout << "\n[Land Vehicle] Traction: " << traction << endl;
            cout << "\n[Land Vehicle] Suspension type: " << suspensionType << endl;
            cout << "\n[Land Vehicle] Brakes type: " << brakesType << endl;
            cout << "\n[Land Vehicle] Passenger quantity: " << passengerQuantity << endl;
            cout << "\n============= LAND VEHICLE DATA =============" << endl;
        }
};

class AirVehicle : virtual public Vehicle {
    private:
        float maxAltitude;
        string propulsionType;
        int enginesNumber;
        bool autoPilot;
        string wingsType;
        int crewNumber;

    public:
        AirVehicle(
            string b, 
            string m,
            float s,
            string l,
            float ml, 
            int y,
            float ma,
            string pt,
            int en,
            bool ap,
            string wgt,
            int cn
        ) : 
            Vehicle(b, m, s, l, ml, y), 
            maxAltitude(ma),
            propulsionType(pt),
            enginesNumber(en),
            autoPilot(ap),
            wingsType(wgt),
            crewNumber(cn)
        {}

        void displayAirVehicle() {
            cout << "\n============= AIR VEHICLE DATA =============" << endl;
            cout << "\n[Air Vehicle] Max altitude: " << maxAltitude << endl;
            cout << "\n[Air Vehicle] Propulsion type: " << propulsionType << endl;
            cout << "\n[Air Vehicle] Engines number: " << enginesNumber << endl;
            cout << boolalpha << "\n[Air Vehicle] Auto pilot: " << autoPilot << endl;
            cout << "\n[Air Vehicle] Wings type: " << wingsType << endl;
            cout << "\n[Air Vehicle] Crew number: " << crewNumber << endl;
            cout << "\n============= AIR VEHICLE DATA =============" << endl;
        }
};

class DroneHybridVehicle : virtual public Vehicle, virtual public LandVehicle, virtual public AirVehicle {
    private:
        float autonomy;
        bool gps;
        string refrigeration;
        bool hybridEngine;
        float maxTemperature;
        bool tailRotor;
    public:
    DroneHybridVehicle(
            string b, 
            string m,
            float s,
            string l,
            float ml, 
            int y,
            string wt,
            int wn,
            string t,
            string sp,
            string bt,
            int pq,
            float ma,
            string pt,
            int en,
            bool ap,
            string wgt,
            int cn,
            float at,
            bool gps,
            string rf,
            bool he,
            float mt,
            bool tr
    ) :
        Vehicle(b, m, s, l, ml, y),
        LandVehicle(b, m, s, l, ml, y, wt, wn, t, sp, bt, pq),
        AirVehicle(b, m, s, l, ml, y, ma, pt, en, ap, wgt, cn),
        autonomy(at),
        gps(gps),
        refrigeration(rf),
        hybridEngine(he),
        maxTemperature(mt),
        tailRotor(tr)
    {}

    void displayHybridVehicle() {
            displayLandVehicle();
            cout << "\n" << endl;
            displayAirVehicle();
            cout << "\n" << endl;
            cout << "\n============= HYBRID VEHICLE DATA =============" << endl;
            cout << "\n[Hybrid Vehicle] Autonomy: " << autonomy << endl;
            cout << "\n[Hybrid Vehicle] GPS available: " << gps << endl;
            cout << "\n[Hybrid Vehicle] Refrigeration: " << refrigeration << endl;
            cout << boolalpha << "\n[Hybrid Vehicle] Hybrid engine: " << hybridEngine << endl;
            cout << "\n[Hybrid Vehicle] Max temperature: " << maxTemperature << endl;
            cout << boolalpha << "\n[Hybrid Vehicle] Tail rotor: " << tailRotor << endl;
            cout << "\n============= HYBRID VEHICLE DATA =============" << endl;
    }

};


int main() {
    LandVehicle bmwx6(
        "BMW",
        "X6M",
        320,
        "TER-734",
        2.500,
        2026,
        "tires",
        4,
        "RWD",
        "Hydraulic",
        "ceramic disc",
        4
    );
    bmwx6.displayInfo();
    bmwx6.displayLandVehicle();

    AirVehicle f22raptor(
        "Lockheed martin",
        "F22 Raptor",
        1354,
        "USAF-34321",
        10000,
        2007,
        25000,
        "Jet turbine",
        2,
        true,
        "static",
        1
    );

    f22raptor.displayInfo();
    f22raptor.displayAirVehicle();

    DroneHybridVehicle militaryDrone(
        "Stark Industries",
        "XDV-54",
        890,
        "TRR-7867",
        5000,
        2025,
        "tires",
        12,
        "FWD",
        "Hydraulic",
        "electromagnetic",
        0,
        20000,
        "Jet turbine",
        4,
        true,
        "foldable",
        3,
        1200,
        true,
        "liquid",
        false,
        1400,
        false
    );
    militaryDrone.displayInfo();
    militaryDrone.displayHybridVehicle();
    return 0;
}