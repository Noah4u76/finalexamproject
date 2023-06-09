#ifndef mountain_H

#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<limits>

using namespace std;

class Mountain {
    private:
    string name, country;
    double elevation;

    public:
Mountain(){}
    Mountain(string name, string country, double elevation) {
        this->name=name;
        this->country=country;
        this->elevation=elevation;
    }
        void setName(string name)
        {
            return;
        }
        void setCountry(string country)
        {
            return;
        }
        void setElevation(double elevation)
        {
            return;
        }

            string getName()
            {
                return name;
            }
            string getCountry()
            {
                return country;
            }
            double getElevation()
            {
                return elevation;
            }

            double toMeters()
            {
                double meter = getElevation() / 3.2808;
                return meter;
            }
        };
    Mountain minElevation(vector<Mountain>& m)
        {
            double minElevation = numeric_limits<double>::infinity();
            Mountain j;

            for(int i = 0; i<m.size(); i++)
            {
                if(m.at(i).getElevation() < minElevation)
                    {
                        minElevation = m.at(i).getElevation();
                        j=m.at(i);
                    }
            }
            return j;
        }
        #endif