#include <iostream> 
#include <cstring>

using namespace std;

namespace CAR_CONST
{
  enum
  {
    ID_LEN = 20, MAX_SPD=200, FUEL_STEP = 2,
    ACC_STEP = 10, BRK_STEP=10
  };
}

class car
{
  private:
    char gamerID[car_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;
  public:
    void InitMember(char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};


void Car::void InitMember(char * ID, int fuel)
{
  strcpy(gamerID, ID);
  fuelGauge=fuel;
  curSpeed=0;
}

void Car::void ShowCarState()
{

}

void Car::void Accel()
{

}
void Car::void Break()
{

}

int main(int argc, char* argv[]) 
{
    
    return 0; 
}
