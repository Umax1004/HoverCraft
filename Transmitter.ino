#include<VirtualWire.h>
void setup() 
{
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  vw_set_tx_pin(7);
  vw_setup(4000); 
  Serial.begin(9600);
}

void loop()
{
  int val,v,i=0;
  char* c;
  if (digitalRead(5)==HIGH)
  {
    c="a1";
  }
  else
  {
    c="a0";
  }
  vw_send((uint8_t *)c, 2);
  vw_wait_tx();
  Serial.print(c);
  val=analogRead(0);
  v=map(val,0,1023,0,9);
  switch (v)
  {
    case 0:
    {
      c="b0";
      break;
    }
    case 1:
    {
      c="b1";
      break;
    }
    case 2:
    {
      c="b2";
      break;
    }
    case 3:
    {
      c="b3";
      break;
    }
    case 4:
    {
      c="b4";
      break;
    }
    case 5:
    {
      c="b5";
      break;
    }
    case 6:
    { 
      c="b6";
      break;
    }
    case 7:
    {
      c="b7";
      break;
    }
    case 8:
    {
      c="b8";
      break;
    }
    case 9:
    {
      c="b9";
      break;
    }
  }
  vw_send((uint8_t *)c, 2);
  vw_wait_tx();
  Serial.print(c);
  val=analogRead(1);
  v=map(val,0,1023,0,9);
  switch (v)
  {
    case 0:
    {
      c="c0";
      break;
    }
    case 1:
    {
      c="c1";
      break;
    }
    case 2:
    {
      c="c2";
      break;
    }
    case 3:
    {
      c="c3";
      break;
    }
    case 4:
    {
      c="c4";
      break;
    }
    case 5:
    {
      c="c5";
      break;
    }
    case 6:
    {
      c="c6";
      break;
    }
    case 7:
    {
      c="c7";
      break;
    }
    case 8:
    {
      c="c8";
      break;
    }
    case 9:
    {
      c="c9";
      break;
    }
  }
  vw_send((uint8_t *)c, 2);
  vw_wait_tx();
  Serial.print(c);
  val=analogRead(2);
  v=map(val,0,1023,0,9);
  switch (v)
  {
    case 0:
    {
      c="d0";
      break;
    }
    case 1:
    {
      c="d1";
      break;
    }
    case 2:
    {
      c="d2";
      break;
    }
    case 3:
    {
      c="d3";
      break;
    }
    case 4:
    {
      c="d4";
      break;
    }
    case 5:
    {
      c="d5";
      break;
    }
    case 6:
    {
      c="d6";
      break;
    }
    case 7:
    {
      c="d7";
      break;
    }
    case 8:
    {
      c="d8";
      break;
    }
    case 9:
    {
      c="d9";
      break;
    }
  }
  vw_send((uint8_t *)c, 2);
  vw_wait_tx();
  Serial.print(c);
  if (digitalRead(6)==HIGH)
  {
    c="e1";
  }
  else
  {
    c="e0";
  }
  vw_send((uint8_t *)c, 2);
  vw_wait_tx();
  Serial.println(c);
  delay(200);
  
  
  
}

