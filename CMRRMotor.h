
#ifndef CMRRMotor_h
#define CMRRMotor_h
class CMRRMotor {
  public:
    CMRRMotor(int pin, int speed=0){
      this->pin = pin;
      this->speed = speed;
      pinMode(this->pin, OUTPUT);
    }

    void begin(){
      this->speed = 255;
      analogWrite(this->pin, this->speed);
    }

    void stop(){
      this->speed = 0; 
      analogWrite(this->pin, this->speed);
    }

    void setSpeed(int speed){ 
      this->speed = speed; 
      analogWrite(this->pin, this->speed);
    }

    int getSpeed(){
      return this->speed;
    }

    int getPin(){
      return this->pin;
    }
  private:
    int pin;
    int speed;
};
#endif