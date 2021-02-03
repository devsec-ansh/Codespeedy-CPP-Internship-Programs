#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cout<<"Select the unit type to be converted\n";
    cout<<"1-Length\n2-Weight\n3-Volume\n4-Time\n5-Force\n6-BMI Calculator\n\nEnter Input : ";
    cin>>a;

    //For length conversions
    if(a==1){
        cout<<"\nEnter the unit type of data available :\n\n";
        cout<<"1-Millimeter\n2-centimeter\n3-Decimeter\n4-Meter\n5-Decameter\n6-Hectometer\n7-Kilometer\n";
        cout<<"8-Inch\n9-Foot\n10-Mile\n";
        cout<<"Enter Input : ";
        cin>>n;
        float m;
        if(n==1){
            float mm; cout<<"Enter Millimeters : ";cin>>mm; m=mm/1000; //cout<<m;
        }
        else if(n==2){
            float cm; cout<<"Enter Centimeters : "; cin>>cm; m=cm/100; //cout<<m;
        }
        else if(n==3){
            float dm; cout<<"Enter Decimeters : "; cin>>dm; m=dm/10; //cout<<m;
        }
        else if(n==4){
            cout<<"Enter Meters : "; cin>>m; //cout<<m;
        }
        else if(n==5){
            float dam; cout<<"Enter Decameters : "; cin>>dam; m=dam*10; //cout<<m;
        }
        else if(n==6){
            float hm; cout<<"Enter Hectometers : "; cin>>hm; m=hm*100; //cout<<m;
        }
        else if(n==7){
            float km; cout<<"Enter Kilometers : "; cin>>km; m=km*1000; //cout<<m;
        }
        else if(n==8){
            float in; cout<<"Enter Inches : "; cin>>in; m=(in*2.54)/100; //cout<<m;
        }
        else if(n==9){
            float ft; cout<<"Enter Feets : "; cin>>ft; m=(ft*0.3048); //cout<<m;
        }
        else if(n==11){
            float mile; cout<<"Enter Miles : "; cin>>mile; m=(mile*1609.34); //cout<<m;
        }
        else{
            cout<<"\nInvalid Input";
        }
        cout<<"\nMillimeters : "<<(long long int)m*1000<<"\nCentimeter : "<<(long long int)m*100<<"\nDecimeter : "<<(long long int)m*10<<"\nMeter : "<<m<<"\nDecameter : "<<m/10;
        cout<<"\nHectometer : "<<m/100<<"\nKilometer : "<<m/1000<<"\nInch : "<<(m*100)/2.54<<"\nFoot : "<<(m/0.3048)<<"\nMile : "<<(m/1609.34)<<"\n";
    }

    //for weight conversions
    else if(a==2){
        cout<<"\nEnter the unit type of data available :\n\n";
        cout<<"1-Milligram\t2-Centigram\t3-Decigram\t4-Gram\t\t5-Decagram\t6-Kilogram\n";
        cout<<"7-Pound\t\t8-Ounce\n";
        cout<<"\nEnter Input : ";
        cin>>n;
        float g;
        if(n==1){
            float mg; cout<<"Enter Milligrams : ";cin>>mg; g=mg/1000; //cout<<m;
        }
        else if(n==2){
            float cg; cout<<"Enter Centigrams : "; cin>>cg; g=cg/100; //cout<<m;
        }
        else if(n==3){
            float dg; cout<<"Enter Decigrams : "; cin>>dg; g=dg/10; //cout<<m;
        }
        else if(n==4){
            cout<<"Enter Grams : "; cin>>g; //cout<<m;
        }
        else if(n==5){
            float dag; cout<<"Enter Decagrams : "; cin>>dag; g=dag*10; //cout<<m;
        }
        else if(n==6){
            float kg; cout<<"Enter Kilograms : "; cin>>kg; g=kg*1000; //cout<<m;
        }
        else if(n==7){
            float po; cout<<"Enter Pounds : "; cin>>po; g=po*453.592; //cout<<m;
        }
        else if(n==8){
            float oz; cout<<"Enter Ounces : "; cin>>oz; g=(oz*28.3495); //cout<<m;
        }
        else{
            cout<<"\nInvalid Input\n";
        }
        cout<<"\nMilligrams : "<<(long long int)g*1000<<"\nCentigrams : "<<(long long int)g*100<<"\nDecigrams : "<<(long long int)g*10<<"\nGrams : "<<g<<"\nDecagrams : "<<g/10;
        cout<<"\nKilograms : "<<g/1000<<"\nPound : "<<(double)(g*453.592)/2.54<<"\nOunces : "<<(double)(g/28.3495)<<"\n";
    }

    //for area conversions
    else if(a==3){
        cout<<"\nEnter the unit type of data available :\n\n";
        cout<<"1-Milliliters\n2-Centiliters\n3-Deciliters\n4-Liters\n5-Decaliters\n6-Kiloliters\n";
        cout<<"7-Cubic Inch\n8-Gallon\n8-Cubic Foot\n";
        cout<<"\nEnter Input : ";
        cin>>n;
        float l;
        if(n==1){
            float ml; cout<<"Enter Milliliters : ";cin>>ml; l=ml/1000; //cout<<m;
        }
        else if(n==2){
            float cl; cout<<"Enter Centiliters : "; cin>>cl; l=cl/100; //cout<<m;
        }
        else if(n==3){
            float dl; cout<<"Enter Deciliters : "; cin>>dl; l=dl/10; //cout<<m;
        }
        else if(n==4){
            cout<<"Enter Liters : "; cin>>l; //cout<<m;
        }
        else if(n==5){
            float dal; cout<<"Enter Decaliters : "; cin>>dal; l=dal*10; //cout<<m;
        }
        else if(n==6){
            float kl; cout<<"Enter Kiloliters : "; cin>>kl; l=kl*1000; //cout<<m;
        }
        else if(n==7){
            float ci; cout<<"Enter Cubic Inch : "; cin>>ci; l=(ci*1.639)/100; //cout<<m;
        }
        else if(n==8){
            float ga; cout<<"Enter Gallon : "; cin>>ga; l=(ga*3.785); //cout<<m;
        }
        else if(n==7){
            float cf; cout<<"Enter Cubic Foot : "; cin>>cf; l=cf*28.316; //cout<<m;
        }
        else{
            cout<<"\nInvalid Input\n";
        }
        cout<<"\nMilliliters : "<<l*1000<<"\nCentiliters : "<<l*100<<"\nDeciliters : "<<l*10<<"\nLiters : "<<l<<"\nDecaliters : "<<l/10;
        cout<<"\nKiloliters : "<<l/1000<<"\nCubic Inch : "<<(double)(l*100)/1.639<<"\nGallon : "<<(double)(l/3.785)<<"\nCubic Foot : "<<(double)(l/28.316)<<"\n";
    }


    //For time conversions
    else if(a==4){
        cout<<"\nEnter the unit type of data available :\n\n";
        cout<<"1-Seconds\n2-Minutes\n3-Hours\n4-Days\n5-Weeks\n6-Years\n";
        cout<<"\nEnter Input : ";
        cin>>n;
        float s;
        if(n==1){
            float s; cout<<"Enter Seconds : ";cin>>s;
        }
        else if(n==2){
            float min; cout<<"Enter Minutes : "; cin>>min; s=min*60; //cout<<m;
        }
        else if(n==3){
            float h; cout<<"Enter Hours : "; cin>>h; s=h*3600; //cout<<m;
        }
        else if(n==4){
            float d; cout<<"Enter Days : "; cin>>d; s=d*3600*24; //cout<<m;
        }
        else if(n==5){
            float w; cout<<"Enter Weeks : "; cin>>w; s=w*3600*24*7; //cout<<m;
        }
        else if(n==6){
            float ye; cout<<"Enter Years : "; cin>>ye; s=ye*3600*24*7*365; //cout<<m;
        }
        else{
            cout<<"\nInvalid Input\n";
        }
        cout<<"\nSeconds : "<<(long long int)s<<"\nMinutes : "<<(long long int)s/60<<"\nHours : "<<(long long int)s/3600<<"\nDays : "<<s/(24*3600)<<"\nWeeks : "<<s/(24*3600*7);
        cout<<"\nYears : "<<s/(3600*7*24*365)<<"\n";
    }


    //For power unit conversions
    else if(a==5){
        cout<<"\nEnter the unit type of data available :\n\n";
        cout<<"1-Newton\n2-Dyne\n3-Pound\n";
        cout<<"\nEnter Input : ";
        cin>>n;
        float ne;
        if(n==1){
            float ne; cout<<"Enter Newtons : ";cin>>ne;
        }
        else if(n==2){
            float dy; cout<<"Enter Dynes : "; cin>>dy; ne=dy*100000; //cout<<m;
        }
        else if(n==3){
            float pound; cout<<"Enter Pounds : "; cin>>pound; ne=pound/4.448; //cout<<m;
        }
        else{
            cout<<"\nInvalid Input\n";
        }
        cout<<"\nNewtons : "<<(long long int)ne<<"\nDynes : "<<(long long int)ne/100000<<"\nPounds : "<<(long long int)ne*4.448<<"\n";
    }

    //for bmi calculation
    else if(a==6){
        float height, mass, bmi;
        cout<<"Enter Height in Meters :";
        cin>>height;
        cout<<"Enter Mass in Kilograms :";
        cin>>mass;
        bmi=mass/(height*height);
        printf("\nBMI : %0.2f",bmi);

        cout<<"\n\nSevere Thinness : <16\nModerate Thinness : 16 - 17\nMild Thinness : 17 - 18.5\nNormal : 18.5 - 25\n";
        cout<<"Overweight : 25 - 30\nObese Class I : 30 - 35\nObese Class II : 35 - 40\nObese Class III : >40\n";
    }

    //for invalid input
    else{
        cout<<"Invalid Option Selected\n";
    }
    return 0;
}
