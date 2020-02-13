#ifndef FUNCTION_H
#define FUNCTION_H

#include "maths.h"
#include <string>

using namespace std;

struct part{
    double pwr; // (x)^pwr
    double mult; //(x)*mult
    double add; //(x)+add
    double xadd; //(x+xadd)
    double xmult; //(x*xmult)
    double xpwr; //(x^xpwr)
    string xmod; //(xmod(x))
    part* next;
}

class function{
    private:
        part* top;
        string pmod; //function that modifies part
    public:
        function(){
            top->pwr = 1;
            top->mult = 1;
        }
        
        function(double p, double m, double a){
            top->pwr = p;
            top->mult = m;
            top->add = a
        }
        
        ~function(){
            clear(top);
            top = NULL;
        }
        
        void add(const function &other){
            top->next = other->top;
        }
        
        void sub(const function &other){
            other->top->mult *= -1;
            top->next = other->top;
        }
        
        void clear(part* n){
            if(!n)return;
            clear(n->next);
            delete n;
        }
        
        double solve(double inp){ //Needs to include mod
            T ret = mult * pow(xmult * pow(inp,pwr) + xadd) + add;
            if(top->next){
                ret += top->next.solve(inp);
            }
            return ret;
        }
}

#endif