/*
    Questão: Animal
    URI - Problema: 1049
    Author: William Henrique Azevedo Martins
*/

#include <iostream>
#include <string>

int main() {
    std::string p1, p2 , p3, resp;
    std::cin >> p1 >> p2 >> p3;
    std::cin.ignore();
    
    if(p1 == "vertebrado") {
        if(p2 == "ave") {
            if(p3 == "carnivoro") {
                resp = "aguia";
            } else {
                resp = "pomba";
            }
        } else {    //p2 != ave
            if(p3 == "onivoro") {
                resp = "homem";
            } else {
                resp = "vaca";
            }
        }
    } else {
        if(p2 == "inseto") {
            if(p3 == "hematofago") {
                resp = "pulga";
            } else {
                resp = "lagarta";
            }
        } else {    // p2 != inseto
            if(p3 == "hematofago") {
                resp = "sanguessuga";
            } else {
                resp = "minhoca";
            }
        }
    }

    std::cout << resp << std::endl;
    return 0;
}