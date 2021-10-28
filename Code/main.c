#include <REGX52.H>

unsigned char L7SEG[11]= {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void delay (unsigned int time){
while (time--)	  ;
}
void tang1 () {
    unsigned char i;
    for (i = 0; i < 10; i++)
    {
        P2= L7SEG[i]  ;
        delay(50000);
    }
}
void giam1()
{      
 unsigned char i;
 for(i = 9; i >0; i--){
 P2 = L7SEG[i];
 delay(50000);
}
}
int main (){
while(1){
tang1();
//giam1();
}
return 0;
}