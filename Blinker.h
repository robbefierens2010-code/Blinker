#ifndef BLINKER_H
    #define BLINKER_H

class Blinker {
    private:
        int _pin;
        unsigned long _interval;
        unsigned long _startvertraging;
        unsigned long _volgendeBlink;
    public:
        Blinker(int _pin, unsigned long interval , unsigned long startvertaging = 0);      //Constructor
        ~Blinker() {};     //Destructor
    

        int handle(void);
};

#endif
