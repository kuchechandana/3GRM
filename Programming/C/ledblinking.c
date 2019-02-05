#include<reg51.h>
sbit blinkLed = P2^1;    //pin connected to toggle Led
void Delay(const unsigned int uCount) //Function to provide delay
{
unsigned int uLoop1=0;
unsigned int uLoop2=0;
for(;uLoop1 < uCount;uLoop1++)
{
for(uLoop2=0;uLoop2 <65535;uLoop2++)
{ }
}
}
int main()
{
blinkLed=0; //configuring as output pin
while(1)
{
blinkLed=1; //Make pin high
Delay(2);
blinkLed=0; // Make pin low
Delay(2);
}
}
