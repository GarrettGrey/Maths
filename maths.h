#ifndef MATHS_H
#define MATHS_H

#include <math.h> 
#include <iostream>

using namespace std;

double e = 2.718281828459;
double pi = 3.14159265359;

double nrt(double root, double base){
    if(root < 0)throw "nrt: root cannot be negative";
    if(root == 0)throw "nrt: root cannot be zero";
    double ret = 0;
    for(double i = 1; i > .000000001; i = i/10){
        while(pow(ret + i, root) < base)ret+=i;
    }
    return ret;
}

template <class T>
T fact(T base){
    if(base == 0 || base == 1)return 1;
    return base * fact(base - 1);
}

double log(double base, double res){
    double ret = 0;
    for(double i = 1; i > .0000000001; i = i/10){
        while(pow(base, ret + i) < res)ret+=i;
    }
    return ret;
}

double log(double res){
    return log(10, res);
}

double ln(double res){
    return log(e, res);
}


double rsin(double in){
    double temp = in;
    bool isNeg;
    while(temp > 2*pi) temp = fmod(temp, 2*pi);
    if(temp == 2*pi) return 0;
    if(temp > pi){
        temp = fmod(temp, pi);
        isNeg = true;
    }
    if(temp == pi) return 0;
    if(temp > pi/2) temp = fmod(temp, pi/2);
    double ret = temp - (pow(temp, 3)/6) + (pow(temp, 5)/fact(5)) - (pow(temp, 7)/fact(7)) + (pow(temp, 9)/fact(9)) - (pow(temp, 11)/fact(11));
    if(isNeg){
        ret = -ret;
    }
    return ret;
}

double rcos(double in){
    double temp = in;
    bool isNeg;
    while(temp > 2*pi) temp = fmod(temp, 2*pi);
    if(temp == 2*pi) return 0;
    if(temp > pi)temp = fmod(temp, pi);

    if(temp == pi) return 0;
    if(temp > pi/2){ 
        temp = fmod(temp, pi/2);
        isNeg = true;
    }
    double ret = 1 - (pow(temp,2)/2) + (pow(temp,4)/fact(4)) - (pow(temp,6)/fact(6)) + (pow(temp,8)/fact(8)) - (pow(temp,10)/fact(10)) + (pow(temp,12)/fact(12));
    if(isNeg){
        ret = -ret;
    }
    return ret;
}

double rtan(double in){
    if(in == 0)return 0;
    if(fmod(in, (pi/2)) == 0) throw "rtan: tan(pi/2) is undefined";
    return rsin(in)/rcos(in);
}

double dsin(double in){
    return rsin(in/(180/pi));
}

double dcos(double in){
    return rcos(in/(180/pi));
}

double dtan(double in){
    if(in == 0)return 0;
    if(fmod(in, 90) == 0) throw "dtan: tan(90) is undefined";
    return rtan(in/(180/pi));
}

double rsec(double in){
    return 1/rcos(in);
}

double rcsc(double in){
    return 1/rsin(in);
}

double rcot(double in){
    return 1/rtan(in);
}

double dsec(double in){
    return 1/dcos(in);
}

double dcsc(double in){
    return 1/dsin(in);
}

double dcot(double in){
    return 1/dtan(in);
}

/*
double sum(int i, int n, function){
    int j = i;
    double ret;
    for(j; j >= n; j++){
        ret += function(j);
    }
    return ret;
}
*/


#endif