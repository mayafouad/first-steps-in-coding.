#ifndef Vending_Machine_H
#define Vending_Machine_H

class Water{
    private:
        int c = 1;
        int p = 3;
        int q = 10;
    public:
        int get_Water();
        int Water_price();
        void buy();

};
class Cola{
    private:
        int c = 2;
        int p = 5;
        int q = 10;
    public:
        int get_Cola();
        int cola_price();
        void buy();
};
class Pepsi{
    private:
        int c = 3;
        int p = 5;
        int q = 10;
    public:
        int get_Pepsi();
        int pepsi_price();
        void buy();
};
class Chips{
    private:
        int c = 4;
        int p = 6;
        int q = 10;
    public:
        int get_Chips();
        int chips_price();
        void buy();
};
class Pringles{
    private:
        int c = 5;
        int p = 15;
        int q = 10;
    public:
        int get_Pringles();
        int pringles_price();
        void buy();
};
class Marshmallow{
    private:
        int c = 6;
        int p = 7;
        int q = 10;
    public:
        int get_Marshmallow();
        int marsh_price();
        void buy();
};
class Chocolate{
    private:
        int c = 7;
        int p = 10;
        int q = 10;
    public:
        int get_Chocolate();
        int choco_price();
        void buy();
};

class Doritos{
    private:
        int c = 8;
        int p = 6;
        int q = 10;
    public:
        int get_Doritos();
        int doritos_price();
        void buy();
};
class Ice_Coffee{
    private:
        int c = 9;
        int p = 10;
        int q = 10;
    public:
        int get_Ice_Coffee();
        int ice_price();
        void buy();
};
class Strawberry_milk{
    private:
        int c = 10;
        int p = 10;
        int q = 10;
    public:
        int get_Strawberry_milk();
        int milk_price();
        void buy();
};

#endif
