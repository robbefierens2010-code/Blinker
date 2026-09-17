#include <Blinker.h>
#include <Arduino.h>

Blinker::Blinker(int pin, unsigned long interval , unsigned long startvertaging ) {
    _pin = pin;
    _interval = interval;
    _startvertraging = startvertaging;
    _volgendeBlink = millis() + _startvertraging;

    pinMode(_pin, OUTPUT);
}

int Blinker::kweeni(void){
    unsigned long nu = millis();
    int retval = false;

    if (nu > _volgendeBlink) 
    {
         _volgendeBlink = nu + _interval;
        digitalWrite(_pin, !digitalRead(_pin));
        retval = true;
   }
  return retval;
}

