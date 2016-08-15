#include<ServoTimer2.h>
#include<VirtualWire.h>

ServoTimer2 m1;
ServoTimer2 m2;
ServoTimer2 s1;

void setup() 
{
  vw_set_rx_pin(4);
  vw_setup(4000);
  vw_rx_start();
  Serial.begin(9600);
  m1.attach(5);
  m2.attach(6);
  s1.attach(7);

}

void loop() 
{
  int i,p,v;
  char c;
  uint8_t buf[VW_MAX_MESSAGE_LEN];
  uint8_t buflen = VW_MAX_MESSAGE_LEN;

    if (vw_get_message(buf, &buflen))
    {
          c=buf[0];
          if(c=='a')
          {
            c=buf[1];
            v=c-'0';
            Serial.print(v);
            {
              m1.write(0);
              m2.write(0);
              s1.write(0);
            }
            
          }
          else if (c=='b')
          {
            c=buf[1];
            v=c-'0';
            i=map(v,0,9,0,180);
            p=map(i,0,180,700,2000);
            Serial.print(p);
            m1.write(p);
          }
          else if (c=='c')
          {
            c=buf[1];
            v=c-'0';
            i=map(v,0,9,0,180);
            p=map(i,0,180,700,2000);
            Serial.print(p);
            m2.write(p);
          }
          else if (c=='d')
          {
            c=buf[1];
            v=c-'0';
            i=map(v,0,9,0,180);
            p=map(i,0,180,500,2400);
            Serial.print(p);
            s1.write(p);
          }
          else if(c=='e')
          {
            c=buf[1];
            v=c-'0';
            Serial.println(v);
            {
              m1.write(180);
              m2.write(180);
            }
          }
          
          
               
    }
    
}

