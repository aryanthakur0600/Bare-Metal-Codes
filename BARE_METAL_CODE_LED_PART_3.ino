
#define mitchb *((volatile byte*)0x25)
#define mitchdirb *((volatile byte*)0x24)
void setup() {
 //DDRB=32;
 mitchdirb =32;
}

void loop() {
 // *((volatile byte*)0x25)=32;
mitchb =32;
  //for(long i=0;i<1000000;i++){*((volatile byte*)0x25)=32;}  
  for(long i=0;i<1000000;i++){mitchb=32;}  

  //*((volatile byte*)0x25)=0; 
 // for(long i=0;i<1000000;i++){*((volatile byte*)0x25)=0;} 
   mitchb=0;     
  for(long i=0;i<1000000;i++){mitchb=0;}                    
}
